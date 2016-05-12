#include "ofApp.h"

void ofApp::setup(){
    
    ofBackground(0);
    ofHideCursor();
    
    letter.load( "The Letter.mp3" );
    letter.setLoop( true );
    letter.play();
    
    ofSetVerticalSync(true);
    ofSetBackgroundAuto(false);
    ofEnableAlphaBlending();
    

}


void ofApp::update(){
    
     ofSoundUpdate();
     evening.update();

}


void ofApp::draw(){
    
    ofSetRectMode(OF_RECTMODE_CORNER);
    ofSetColor(10, 10, 30, trails);
    ofDrawRectangle(0, 0, ofGetWidth(), ofGetHeight());
    trails = 255 * ((109 - trailAmount) * 0.019);
    evening.draw();

}