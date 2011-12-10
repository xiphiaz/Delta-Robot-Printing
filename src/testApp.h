#ifndef _TEST_APP
#define _TEST_APP

#include "ofMain.h"
#include "ofx3DModelLoader.h"
#include "ofxMultiTouchPad.h"

#include "deltaRobot.h"
#include "pathLoader.h"
#include "oscEvents.h"
#include "serialConnection.h"

struct serialMessage; //forward decl

class testApp : public ofBaseApp{
	
	public:
		
		void setup();
		void update();
		void draw();
		
		void keyPressed  (int key);
		void keyReleased (int key);
		
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
        
        ofxMultiTouchPad pad;
    
        void padUpdates(int & t);
        void newTouch(int & n);
        void removedTouch(int & r);
        
        float distanceBetweenTouches(MTouch t1, MTouch t2);
    
        void addDial(int x, int y, float rotation, string label);

//		ofx3DModelLoader squirrelModel;
    
        vector<MTouch> touches;
        
        //added class instances
    
        PathLoader pathLoader;
        
        ofTrueTypeFont  franklinBook;
    
        oscEvents oscListen;
    
        bool textEntryMode, serialHUDvisible;
        string textEntryBuffer;
    
        void drawConsole(int idNum, bool active, int x, int y, int width, int height);
    
        float effectorCursorX, effectorCursorY, effectorCursorZ;
        
		
};



#endif
	
