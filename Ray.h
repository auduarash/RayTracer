#ifndef __RAY__
#define __RAY__

#include "Point3D.h"
#include "Vector3D.h"

class Ray
{
public:
	Point3D origin;
	Vector3D direction;

	Ray();
	Ray(const Point3D& origin, const Vector3D& direction);
	Ray(const Ray& ray);
	Ray& operator=(const Ray& rhs);
	~Ray();
};

#endif