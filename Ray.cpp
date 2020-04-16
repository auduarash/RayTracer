#include "Ray.h"

Ray::Ray()
{
}

Ray::Ray(const Point3D& origin, const Vector3D& direction)
	:origin(origin), direction(direction)
{
}

Ray::Ray(const Ray& ray)
	:origin(ray.origin), direction(ray.direction)
{

}

Ray& Ray::operator=(const Ray& rhs)
{
	Ray ret(rhs);
	return ret;
}

Ray::~Ray()
{
}
