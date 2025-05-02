#include"ComplexPlane.h"
#include <iostream>


ComplexPlane::ComplexPlane(int pixelWidth, int pixelHeight) {
	m_pixel_size()
}
/*
Assign m_pixel_size with the parameter values
Calculate and assign the aspect ratio of the monitor, m_aspectRatio
height / width
Be careful of integer divide
Our object needs to know this so the plane is not distorted
Assign m_plane_center with{ 0,0 }
Assign m_plane_size with{ BASE_WIDTH, BASE_HEIGHT * m_aspectRatio }
Assign m_zoomCount with 0
Assign m_State with State::CALCULATING to be ready for the initial screen
Initialize VertexArray
We will use this to draw a color for each pixel
Set its primitive type to Points
Resize it to pixelWidth* pixelHeight
*/