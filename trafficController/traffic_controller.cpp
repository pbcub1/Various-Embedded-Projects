/*
	Copyright (C) 2017 David Green at Launchpad Technical Solutions LLC.

	This is a software program written by David Green at Launchpad Technical Solutions LLC.
	This program is written as a controller for David's hypothetical traffic control system.
	This program is not intended to control any actual traffic control system, as we are not
	a contractor for any traffic controller companies. This is simply a challenge.

	The way this traffic control system works is by a control box that has various ports,
	each port is numbered. Lights that are used to direct traffic are controlled through ports
	1-150. Cameras used for traffic detection are on ports 150-160. Any pressure plate data is
	sent through ports 160-180. Any ports after 180 can be used up to 360 if a catagory runs out
	of free ports. A traffic light controller is setup using a USB that has to connect to a
	propriatary traffic controller setup tool. Setup using this tool is required in order to
	connect to the centralized traffic control server, otherwise the traffic light will flash
	all lights red.

	This software can be redistributed, modified without publishing, and used in commercial or
	private applications, all I ask is that you do not patent it, as it is copyright (c) of David M Green
	of Launchpad Technical Solutions LLC <david.green@launchpadtechnial.com>, and that you give
	proper attribution when using it in your own projects.
*/
