/*
	See license terms, project description, and project scope in "traffic_controller.cpp".
	Copyright (C) 2017 David Green at Launchpad Technical Solutions LLC.
*/

class Light {
	public:
		char type; //r(ed), y(ellow), g(reen)
		char direction; //l(eft), s(traight), g(eneral), r(ight)
		bool activated; //True: light on; False: light off
		int id;
		int port;
};
