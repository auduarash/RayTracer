#ifndef __vector_3d__
#define __vector_3d__

class Vector3D
{
public:
	double x, y, z;
	Vector3D();
	Vector3D(const Vector3D& rhs);
	Vector3D(double x, double y, double z);

	double operator*(const Vector3D& rhs) const;
	Vector3D& operator*(double rhs) const;
	Vector3D& operator+(const Vector3D& rhs) const;
	Vector3D& operator/(double rhs) const;
};

#endif