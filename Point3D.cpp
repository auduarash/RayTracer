#include "Point3D.h"
#include "Vector3D.h"

Point3D::Point3D()
	:x(0),y(0),z(0)
{
}

Point3D::Point3D(double x, double y, double z)
	:x(x), y(y), z(z)
{
}

Point3D::Point3D(double center)
	:Point3D(0, 0, 0)
{
}

Vector3D& Point3D::operator-(const Point3D& rhs) const
{
	Vector3D ret(x - rhs.x, y - rhs.y, z - rhs.z);
	return ret;
}

Point3D& Point3D::operator+(const Vector3D& rhs) const
{
	Point3D ret(this->x - rhs.x, this->y - rhs.y, this->z - rhs.z);
	return ret;
}
