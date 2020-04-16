#include "Tracer.h"
#include "Constants.h"

Tracer::Tracer(World* wr)
	:world_ptr(wr)
{
}

RGBColor Tracer::trace_ray(const Ray& ray)
{
	return black;
}
