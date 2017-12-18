 #pragma once//need this on top
#include "ofMain.h"

class Ship {

public:
	void setup();
	void update();
	void draw();

	void handleMouseDragged(int x, int y);

	ofPoint position;
	ofPoint velocity;
	float angle;
}; 
