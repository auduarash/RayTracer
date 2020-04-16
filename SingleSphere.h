#ifndef __SINGLE_SPHERE__
#define __SINGLE_SPHERE__

#include "Tracer.h"
#include "World.h"

class SingleSphere : public Tracer
{
public:
	SingleSphere(World* world);
	virtual RGBColor trace_ray(const Ray& ray) const;
};

#endif