#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp{
    
    private:
        ofTrueTypeFont font_title, font_sub, font_main;

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
    
        ofSoundPlayer do1, re2, mi3, fa4, so5, ra6, shi7, do8;  
		
};
