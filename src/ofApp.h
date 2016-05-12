#include "ofMain.h"
#include "Background.hpp"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();
    
        float trails;
        float trailAmount;
        Background evening;
        ofSoundPlayer letter;
		
};
