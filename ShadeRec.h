#ifndef __SHADEREC__
#define __SHADEREC__

#include "Normal.h"
#include "Point3D.h"
#include "RGBColor.h"
#include "World.h"

class ShadeRec
{
public:
	bool hit_an_object;
	Point3D local_hit_point;
	Normal normal;
	RGBColor color;
	World& w;

	ShadeRec(World& wr);
	ShadeRec(const ShadeRec& sr);
	~ShadeRec(void);

	ShadeRec operator=(const ShadeRec& rhs);
};

#endif