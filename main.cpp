#include "World.h"
#include <Windows.h>
#include <iostream>


using namespace std;
int main(void)
{
	World w;
	w.build();
	w.render_scene();
	return 0;
}