#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetCircleResolution(100);
    ofBackground(255, 255, 255);
    ofSetVerticalSync(true);
    
    fillColor.set(255, 0, 0);
}

//--------------------------------------------------------------
void ofApp::update(){
    fillColor.setHue(fillColor.getHue() + 1);
    if(fillColor.getHue() > 254) {
        fillColor.setHue(0);
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(255, 255, 255);
    ofSetColor(fillColor);
    ofFill();
    ofCircle(100, 400, 100);
    
    ofNoFill();
    ofSetLineWidth(10);
    ofSetColor(fillColor);
    ofCircle(400, 400, 200);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
