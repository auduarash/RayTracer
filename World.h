#ifndef __world_h__
#define __world_h__

#include "Sphere.h"
#include "RGBColor.h"
#include "ViewPlane.h"
class Tracer;

class World
{
public:
	ViewPlane vp;
	RGBColor background_color;
	Sphere sphere;
	Tracer* tracer_ptr;

	World();
	void build();

	void render_scene() const;
	void open_window(const int hres, const int vres) const;

	void display_pixel(const int row, const int column, const RGBColor& pixel_color) const;

};

#endif