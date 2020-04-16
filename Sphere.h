#ifndef __SPHERE__
#define __SPHERE__

#include "GeometricObject.h"
#include "Point3D.h"
class Ray;
class ShadeRec;

class Sphere: GeometricObject
{
public:
	Sphere();
	Point3D center;
	double radius;

	void set_center(double center);
	void set_radius(double radius);
	virtual bool hit(const Ray& ray, double& tmin, ShadeRec& sr) const;
};

#endif