//
//  ball.h
//  emptyExample
//
//  Created by Alex Mejias on 3/14/15.
//
//

#ifndef emptyExample_ball_h
#define emptyExample_ball_h

#include "ofMain.h"

class Ball {
    public:
        Ball();
    
        void moveTo(int _xDestiny, int _yDestiny);
        void draw();
        ofColor color;
    private:
        int x;
        int y;
};

#endif
