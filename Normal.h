#ifndef __NORMAL_H__
#define __NORMAL_H__

#include "Vector3D.h"

class Normal : public Vector3D
{
public:
	Normal();
	Normal(const Vector3D& rhs);
};

#endif