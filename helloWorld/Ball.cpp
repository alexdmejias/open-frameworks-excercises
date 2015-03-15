//
//  Ball.cpp
//  emptyExample
//
//  Created by Alex Mejias on 3/14/15.
//
//

#include <stdio.h>
#include "ball.h"

Ball::Ball() {
    color.set(ofRandom(255), ofRandom(255), ofRandom(255));
    
    x = ofRandom(ofGetWindowWidth());
    y = ofRandom(ofGetWindowHeight());
}

void Ball::moveTo(int _xDestiny, int _yDestiny) {
    x += (_xDestiny - x) * 0.1;
    y += (_yDestiny - y) * 0.1;
    
};

void Ball::draw() {
    ofSetColor(color);
    ofFill();
    ofCircle(x, y, 30);
};
