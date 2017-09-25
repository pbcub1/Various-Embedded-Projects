/*
	See license terms, project description, and project scope in "traffic_controller.cpp".
	Copyright (C) 2017 David Green at Launchpad Technical Solutions LLC.
*/

#include <string>

class TrafficCamera {
	public:
		int dataStream[1280][720][4];
		int id;
		string name;

	private:
		int captureStream[1280][720][4];
		//20x20 pixelated blocks
		int pixelatedStream[64][36][4];
};
