#ifndef __VIEWPLANE_H__
#define __VIEWPLANE_H__

class ViewPlane
{
public:
	int hres;
	int vres;
	float pixelSize;
	float gamma;
	float inv_gamma;

	void set_hres(int hr) { hres = hr; }
	void set_vres(int vr) { vres = vr; }
	void set_pixel_size(float pS) { pixelSize = pS; }
	void set_gamma(float gm) { gamma = gm; }

};

#endif