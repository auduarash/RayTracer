#ifndef __GEOMETRIC_OBJECT__
#define __GEOMETRIC_OBJECT__

#include "RGBColor.h"

class Ray;
class ShadeRec;

class GeometricObject
{
public:
	virtual bool hit(const Ray& ray, double& tmin, ShadeRec& sr) const = 0;

protected:
	RGBColor color;
};

#endif