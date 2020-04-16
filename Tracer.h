#ifndef __tracer_h__
#define __tracer_h__

#include "World.h"
#include "RGBColor.h"
#include "Ray.h"

class Tracer
{
public:
	World *world_ptr;
	Tracer(World* w);

	RGBColor trace_ray(const Ray& ray);
};

#endif