#include "ofApp.h"

//--------------------------------------------------------------

void ofApp::setup(){

    hop.setup();
    Plat.setup();
    levels.setup();
    for(int i=0;i<5;i++)
    {
        Platforms[i].setup();
        
    }


    
    
}

//--------------------------------------------------------------
void ofApp::update(){
    hop.update();
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    hop.draw();
    Plat.draw();
    cout<<(levels.level);
    levels.istouching(&hop);
    
    if(levels.level==1)
    {
        levels.level1(&hop);
    }
    if(levels.level==2)
    {
        levels.level2(&hop);
    }
    if(levels.level==3)
    {
        levels.level3(&hop);
    }
    if(levels.level==4)
    {
        levels.level4(&hop);
    }
    
    
}



//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    hop.keyPressed(key);

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    hop.keyReleased(key);
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
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

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
