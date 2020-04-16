#include "Vector3D.h"

Vector3D::Vector3D(double x, double y, double z)
	:x(x), y(y), z(z)
{
}

Vector3D::Vector3D()
	:Vector3D(0, 0, 0)
{
}

Vector3D::Vector3D(const Vector3D& rhs)
{
	x = rhs.x; y = rhs.y; z = rhs.z;
}


double Vector3D::operator*(const Vector3D& rhs) const
{
	return this->x * rhs.x + this->y * rhs.y + this->z * rhs.z;
}


Vector3D& Vector3D::operator*(double rhs) const
{
	Vector3D ret(x*rhs, y*rhs, z*rhs);
	return ret;
}

Vector3D& Vector3D::operator+(const Vector3D& rhs) const
{
	Vector3D ret(x+rhs.x, y+rhs.y, z+rhs.z);
	return ret;
}

Vector3D& Vector3D::operator/(double rhs) const
{
	double inv = 1.0 / rhs;
	return (*this) * inv;
}
