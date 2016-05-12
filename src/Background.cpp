#include "Background.hpp"

Background::Background(){
    
    for (int i = 0; i < 325; i++){
        
        ofPoint tmp;
        tmp.x = ofRandom(ofGetWidth());
        tmp.y = ofRandom(ofGetHeight());
        
        pointList.push_back( tmp );
        
        float tmp2 = ofRandom(46, 101);
        brightness.push_back( tmp2 );
    }
    
}

void Background::update(){
    
    for (int i = 0; i < brightness.size(); i++){
        
        brightness[i] += ofRandom(-10,10);
    }
}

void Background::draw(){
    
    for (int i = 0; i < pointList.size(); i++){
        ofSetColor( brightness[i], brightness[i], brightness[i] + 10 );
        ofFill();
        ofDrawRectangle(pointList[i], 2, 2);
    }
}
