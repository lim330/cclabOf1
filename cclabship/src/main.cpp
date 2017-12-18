#include "ofMain.h"
#include "ofApp.h"

//========================================================================
int main( ){
	ofSetupOpenGL(3400,2768,OF_WINDOW);			// <-------- setup the GL context

	// this kicks off the running2SCREEN
	// pass in width and height too:
	ofRunApp(new ofApp());

}
