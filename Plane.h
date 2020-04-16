#ifndef __PLANE__
#define __PLANE__

#include "GeometricObject.h"
#include "Point3D.h"
#include "Normal.h"

class Plane : public GeometricObject
{
public:
	Plane();
	Plane(const Point3D &p, const Normal& n);

	virtual bool hit(const Ray& ray, double& tmin, ShadeRec& s) const;

private:
	Point3D point;
	Normal normal;
};



#endif // !__PLANE__
