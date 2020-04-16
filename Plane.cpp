#include "Plane.h"
#include "Point3D.h"
#include "Normal.h"
#include "Ray.h"
#include "ShadeRec.h"
#include "Constants.h"

Plane::Plane()
{
}

Plane::Plane(const Point3D &p, const Normal& n)
	:point(p), normal(n)
{
}

bool Plane::hit(const Ray& ray, double& tmin, ShadeRec& s) const
{
	double t = (point - ray.origin) * normal / (ray.direction * normal);
	if (t > kEpsilon)
	{
		tmin = t;
		s.normal = normal;
		s.local_hit_point = ray.origin + ray.direction * t;
		return true;
	}
	else
	{
		return false;
	}
}
