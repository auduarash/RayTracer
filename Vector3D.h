#ifndef __vector_3d__
#define __vector_3d__

#include "Point3D.h"

class Vector3D
{
public:
	double x, y, z;
	Vector3D() : x(0), y(0), z(0) {};
	Vector3D(const Point3D &rhs):x(rhs.x),y(rhs.y),z(rhs.z){}
	Vector3D(const Vector3D& rhs):x(rhs.x),y(rhs.y),z(rhs.z){};
	Vector3D(double x, double y, double z) : x(x), y(y), z(z) {};

	double operator*(const Vector3D& rhs) const;
	Vector3D operator*(double rhs) const;
	Vector3D operator+(const Vector3D& rhs) const;
	Vector3D operator/(double rhs) const;
};

#endif