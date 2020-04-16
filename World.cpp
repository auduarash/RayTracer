#include "World.h"
#include "Constants.h"
#include "SingleSphere.h"

World::World()
{
}

void World::build()
{
	vp.set_hres(200);
	vp.set_vres(200);
	vp.set_pixel_size(1.0);
	vp.set_gamma(1.0);
	background_color = black;
	tracer_ptr = new SingleSphere(this);

	sphere.set_center(0.0);
	sphere.set_radius(85.0);
}

void World::render_scene() const
{
	RGBColor pixel_color;
	Ray ray;
	double zw = 100.0;
	double x, y;
	open_window(vp.hres, vp.vres);
	ray.direction = Vector3D(0, 0, -1);
	
	for (int r = 0; r < vp.vres; r++)
	{
		for (int c = 0; c <= vp.hres; c++)
		{
			x = vp.pixelSize * (c - 0.5 * (vp.hres - 1.0));
			y = vp.pixelSize * (r - 0.5 * (vp.vres - 1.0));

			ray.origin = Point3D(x, y, zw);
			pixel_color = tracer_ptr->trace_ray(ray);
			display_pixel(r, c, pixel_color);
		}
	}
}

void World::open_window(const int hres, const int vres) const
{

}

void World::display_pixel(const int row, const int column, const RGBColor& pixel_color) const
{
}
