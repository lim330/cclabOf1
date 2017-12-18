#include "ship.h"
void Ship::setup() {
	position.set(ofGetWidth() / 2, ofGetHeight() / 2);

	velocity.set(0, 0);

	angle = 0;
}

void Ship::update() {
	velocity *= 0.99f;
	position += velocity;

	if (position.x > ofGetWidth()) {
		position.x = 0;
	}
	else if (position.x < 0) {
		position.x = ofGetWidth();
	}
	if (position.y > ofGetHeight()) {
		position.y = 0;
	}
	else if (position.y < 0) {
		position.y = ofGetHeight();
	}

}

void Ship::draw() {
	ofPushMatrix();
	//going to take a pic of current settings of position(matrix),Color(style);

	ofTranslate(position.x, position.y);
	ofRotate(ofRadToDeg(angle));
	ofSetColor(ofRandom(10,160), ofRandom(50,200), 200);
	ofDrawCircle(50,50,50);

	ofPopMatrix();
	//going back to the position setting;

}

void Ship::handleMouseDragged(int x, int y) {
	ofPoint thrust = ofPoint(x - ofGetPreviousMouseX(), y - ofGetPreviousMouseY());
	velocity += 0.2 * thrust;

	// Update angle
	angle = atan2(velocity.y, velocity.x) + PI/2;
}

