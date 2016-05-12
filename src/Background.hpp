#include "ofMain.h"

class Background {
public:
    Background();
    void update();
    void draw();
    
    vector <ofPoint> pointList;
    vector <float> brightness;
};
