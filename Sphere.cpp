#include "Sphere.h"
#include "Plane.h"
#include "Ray.h"
#include "ShadeRec.h"
#include "Constants.h"
#include "math.h"

Sphere::Sphere()
	:radius(0)
{
}

void Sphere::set_center(double center)
{
	this->center = center;
}

void Sphere::set_radius(double radius)
{
	this->radius = radius;
}

bool Sphere::hit(const Ray& ray, double& tmin, ShadeRec& sr) const
{
	double t;
	Vector3D temp = ray.origin - center;
	double a = ray.direction * ray.direction;
	double b = temp * ray.direction * 2.0;
	double c = temp * temp - radius * radius;
	double disc = b * b - 4.0 * a * c;
	if (disc < 0.0)
	{
		return false;
	}
	else
	{
		double e = sqrt(disc);
		double denom = 2.0 * a;
		t = (-b - e) / denom;

		if (t > kEpsilon)
		{
			tmin = t;
			sr.normal = (temp + ray.direction* t) / radius;
			sr.local_hit_point = ray.origin + ray.direction * t;
			return true;
		}
		else
		{
			return false;
		}
	}
}
