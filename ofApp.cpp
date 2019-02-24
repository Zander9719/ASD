#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetWindowTitle ( "The Opposite Game" );
    ofBackground (ofColor::white );
    
    // creates a string to test the state of the game and creates an int of the score of the player
    
    string game_state;
    int score = 0;
    int newscore = 0;
    int Sequence = (int) ofRandom(0,3);
    
    
    // Turn counter which counts the number of turns the user has had and then makes the sequence longer as the game progresses
    
    int turncounter = 0;
    
    do
    {
        turncounter++;

    } while ((game_state == "end"));
    
    // Random Sequence Generator generates a random number between 0-3+ depending on the number of turns won
    
   // I need to figure out which loop to use to first loop this to output 4 values then increase the number of values outputted
    
    for ( newscore = 0; newscore > score; newscore++)
    {
    int Sequence = (int) ofRandom(0,3);
    }
    
    
    cout << (Sequence);

}

//--------------------------------------------------------------
void ofApp::update(){
    if (game_state == "start"){
        
    } else if (game_state == "game") {
    } else if (game_state == "game") {
    
    }
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    if (game_state == "start") {
    } else if (game_state == "game"){
    } else if (game_state == "end"){
    
    }
    
    //Bottom Right
    if (toprighttrue == 1){
        ofSetColor(255, 255, 255);
    }
        else{
            ofSetColor(255, 0, 0);
        }
    ofDrawRectangle(512,384,150,150);
    

    //Top Left
    if (toplefttrue == 1){
        ofSetColor(255, 255, 255);
    }
    else{
        ofSetColor(255,0,0);
    }
    ofDrawRectangle(362,234,150,150);
    
    
    //Bottom Right
    if (bottomrighttrue == 1){
        ofSetColor(255, 255, 255);
    }
    else{
       ofSetColor(30,20,40);
    }
    ofDrawRectangle(512,234,150,150);
    
    
    //Top Left
    if (bottomlefttrue == 1){
        ofSetColor(255, 255, 255);
    }
    else{
        ofSetColor(0,0,0);
    }
    ofDrawRectangle(362,384,150,150);


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
void ofApp::mousePressed(int x, int y, int button)

    // Top Left Rectangle

    {
    if (x > 362 && x < 512 && y > 234 && y < 384 && button == 0){
        toplefttrue = 1;
    }
    else if (x > 362 && x < 512 && y > 234 && y < 384 && button == 0){
        toplefttrue = 0;
    }
    
    // Bottom Right Rectangle

    if (x > 512 && x < 662 && y > 384 && y < 618 && button == 0){
        toprighttrue = 1;
    }
    else if (x > 512 && x < 662 && y > 384 && y < 618 && button == 0){
        toprighttrue = 0;
    }
    
    // Top Right Rectangle
    
    if (x > 512 && x < 662 && y > 234 && y < 384 && button == 0){
        bottomrighttrue = 1;
    }
    else if (x > 512 && x < 662 && y > 234 && y < 384 && button == 0){
        bottomrighttrue = 0;
    }
        
    // Bottom Left
        
    if (x > 362 && x < 512 && y > 384 && y < 618 && button == 0){
            bottomlefttrue = 1;
    }
    else if (x > 362 && x < 512 && y > 384 && y < 618 && button == 0){
            bottomlefttrue = 0;
    }

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button)

    //Top Left Rectangle 

    {
    if (x > 362 && x < 512 && y > 234 && y < 384 && button == 0){
        toplefttrue = 0;
    }
    else if (x > 362 && x < 512 && y > 234 && y < 384 && button == 0){
        toplefttrue = 1;
    }
    
    // Top Right Rectangle
    
    if (x > 512 && x < 662 && y > 384 && y < 618 && button == 0){
        toprighttrue = 0;
    }
    else if (x > 512 && x < 662 && y > 384 && y < 618 && button == 0){
        toprighttrue = 1;
    }
    
    //Bottom Right Rectangle
    
    if (x > 512 && x < 662 && y > 234 && y < 384 && button == 0){
        bottomrighttrue = 0;
    }
    else if (x > 512 && x < 662 && y > 234 && y < 384 && button == 0){
        bottomrighttrue = 1;
    }
    
    // Bottom Left
    
    if (x > 362 && x < 512 && y > 384 && y < 618 && button == 0){
        bottomlefttrue = 0;
    }
    else if (x > 362 && x < 512 && y > 384 && y < 618 && button == 0){
        bottomlefttrue = 1;
    }

    
    
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
