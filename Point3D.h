#ifndef __POINT_3D__
#define __POINT_3D__

class Vector3D;

class Point3D
{
public:
	double x, y, z;
	Point3D();
	Point3D(double x, double y, double z);
	Point3D(double center);

	Vector3D& operator-(const Point3D& rhs) const;
	Point3D& operator+(const Vector3D& rhs) const;
};


#endif