//
//  pome.cpp
//  intermediate_works
//
//  Created by OzawaChinatsu on 2021/11/15.
//

#include "pome.hpp"

int dogSize;
int x, y;

//--------------------------------------------------------------
void pome::setup(){
    dogSize = 10;
    x = 475;
    y = 420;
}

//--------------------------------------------------------------
void pome::update(){

}

//--------------------------------------------------------------
void pome::draw(){
    //    左側のもふもふ
    //    頭のほう
        ofSetColor(240, 128, 128);
        ofNoFill();
        ofDrawEllipse(435, 355, 27, 30);
        ofSetColor(255, 255, 255);
        ofFill();
        ofDrawTriangle(475, 360, 435, 345, 395, 385);
    //    さんかくみみ（左）
        ofSetColor(240, 128, 128);
        ofNoFill();
        ofDrawTriangle(420, 365, 400, 370, 400, 345);
        ofSetColor(255, 255, 255);
        ofFill();
        ofDrawTriangle(390, 370, 435, 355, 395, 385);
    //    側面（左）
        ofSetColor(240, 128, 128);
        ofNoFill();
        ofDrawCircle(410, 405, 30);
        ofSetColor(255, 255, 255);
        ofFill();
        ofDrawTriangle(345, 450, 415, 360, 460, 425);
        
        ofSetColor(240, 128, 128);
        ofNoFill();
        ofDrawCircle(400, 445, 28);
        ofSetColor(255, 255, 255);
        ofFill();
        ofDrawTriangle(355, 475, 405, 400, 455, 475);
        ofDrawCircle(390, 420, 10);
        
        ofSetColor(240, 128, 128);
        ofNoFill();
        ofDrawCircle(410, 485, 33);
        ofSetColor(255, 255, 255);
        ofFill();
        ofDrawTriangle(360, 550, 400, 430, 480, 500);
        
        ofSetColor(240, 128, 128);
        ofNoFill();
        ofDrawCircle(430, 500, 28);
        ofSetColor(255, 255, 255);
        ofFill();
        ofDrawTriangle(415, 540, 400, 460, 500, 495);
        
        ofSetColor(240, 128, 128);
        ofNoFill();
        ofDrawCircle(460, 520, 23);
        ofSetColor(255, 255, 255);
        ofFill();
        ofDrawTriangle(440, 550, 440, 480, 520, 530);

    //    さんかくみみ（右）
        ofSetColor(240, 128, 128);
        ofNoFill();
        ofDrawTriangle(530, 360, 550, 370, 550, 345);
        ofSetColor(255, 255, 255);
        ofFill();
        ofDrawTriangle(560, 370, 515, 355, 555, 385);
    //    側面（右）
        ofSetColor(240, 128, 128);
        ofNoFill();
        ofDrawCircle(540, 405, 30);
        ofSetColor(255, 255, 255);
        ofFill();
        ofDrawTriangle(610, 450, 535, 360, 490, 425);
        
        ofSetColor(240, 128, 128);
        ofNoFill();
        ofDrawCircle(550, 445, 28);
        ofSetColor(255, 255, 255);
        ofFill();
        ofDrawTriangle(595, 475, 545, 400, 460, 475);
        ofDrawCircle(555, 420, 10);
        
        ofSetColor(240, 128, 128);
        ofNoFill();
        ofDrawCircle(540, 485, 33);
        ofSetColor(255, 255, 255);
        ofFill();
        ofDrawTriangle(590, 550, 550, 430, 470, 500);
        
        ofSetColor(240, 128, 128);
        ofNoFill();
        ofDrawCircle(520, 500, 28);
        ofSetColor(255, 255, 255);
        ofFill();
        ofDrawTriangle(535, 540, 550, 460, 450, 495);
        
        ofSetColor(240, 128, 128);
        ofNoFill();
        ofDrawCircle(490, 520, 23);
        ofSetColor(255, 255, 255);
        ofFill();
        ofDrawTriangle(510, 550, 510, 480, 425, 530);
        
    //    右もふもふ
        ofSetColor(240, 128, 128);
        ofNoFill();
        ofDrawEllipse(x+dogSize*3.6, y-dogSize*6.5, dogSize*2.7, dogSize*3);
        ofSetColor(255, 255, 255);
        ofFill();
        ofDrawTriangle(x, y-dogSize*6, x+dogSize*3.5, y-dogSize*7.5, x+dogSize*8, y-dogSize*3.5);
     
    //    いろはもふもふいろです
        ofSetColor(128, 128, 128);
    //    かわいいおめめをかきます
        ofFill();
        ofDrawCircle(x-dogSize*4.7, y-dogSize, dogSize);
        ofDrawCircle(x+dogSize*4.3, y-dogSize, dogSize);
    //    かわいいおくちをかきます
        ofNoFill();
        ofDrawEllipse(x-dogSize, y+dogSize, dogSize*2, dogSize*1.5);
        ofDrawEllipse(x+dogSize, y+dogSize, dogSize*2, dogSize*1.5);
        ofSetColor(255, 255, 255);
        ofFill();
        ofDrawEllipse(x-dogSize, y+dogSize*0.5, dogSize*2, dogSize*1.5);
        ofDrawEllipse(x+dogSize, y+dogSize*0.5, dogSize*2, dogSize*1.5);
    //    かわいいおはなをかきます
        ofSetColor(233, 150, 122);
        ofNoFill();
        ofDrawEllipse(x, y, dogSize*1.2, dogSize);

    //    しろぽめの完成！！！！！！
}
