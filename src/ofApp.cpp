#include "ofApp.h"

//  マクロでシーンを定義してコードを読みやすくしたよ！（工夫1）
#define INTRO 1
#define PIANO 2

//画面はばの検出
int w, h;
//シーン切り替え用変数（マクロで定義したのを代入する想定）
int scene = INTRO;

//ぽめ用変数
int dogSize;
int x, y;

//PIANOで使う変数
int Px;
int Py;

//ぽめを移動させる変数
int move_x, move_y;

//ぽめの色を変える変数
int R, G, B;

//メトロノーム（tempo = 60）
int t;
int frameRate;
int num;


//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(255, 255, 255);
    
    w = ofGetWidth();
    h = ofGetHeight();
    
//    フォントわざわざ指定する（工夫2）
    font_title.load("Avenir Roman.otf", 25);
    font_sub.load("Avenir Roman.otf", 15);
    
//    サウンド読み込み
    do1.load("1do.mp3");
    re2.load("2re.mp3");
    mi3.load("3mi.mp3");
    fa4.load("4fa.mp3");
    so5.load("5so.mp3");
    ra6.load("6ra.mp3");
    shi7.load("7shi.mp3");
    do8.load("8do.mp3");

//    グローバル変数初期化
    t = 0;
    num = 0;
    frameRate = ofGetFrameRate();
    
    R = 240;
    G = 128;
    B = 128;
}

//--------------------------------------------------------------
void ofApp::update(){
    t++;
    if (t%frameRate == 0) {
        num++;
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
//    場面の転換はswichで、映像をスイッチするとか言うからね！（工夫3）
    switch (scene) {
        case INTRO:
            
        //    グローバル変数初期化
            dogSize = 5;
            x = 200;
            y = 480;
            
        //ぽめ**********************************************************************************
        //    左側のもふもふ
        //    頭のほう
            ofSetColor(240, 128, 128);
            ofNoFill();
            ofDrawEllipse(x-dogSize*4, y-dogSize*6.5, dogSize*2.7, dogSize*3);
            ofSetColor(255, 255, 255);
            ofFill();
            ofDrawTriangle(x, y-dogSize*6, x-dogSize*4, y-dogSize*7.5, x-dogSize*8, y-dogSize*3.5);
        //    さんかくみみ（左）
            ofSetColor(240, 128, 128);
            ofNoFill();
            ofDrawTriangle(x-dogSize*5.5, y-dogSize*5.5, x-dogSize*7.5, y-dogSize*5, x-dogSize*7.5, y-dogSize*7.5);
            ofSetColor(255, 255, 255);
            ofFill();
            ofDrawTriangle(x-dogSize*8.5, y-dogSize*5, x-dogSize*4, y-dogSize*6.5, x-dogSize*8, y-dogSize*3.5);
        //    側面（左）
            ofSetColor(240, 128, 128);
            ofNoFill();
            ofDrawCircle(x-dogSize*6.5, y-dogSize*1.5, 3*dogSize);
            ofSetColor(255, 255, 255);
            ofFill();
            ofDrawTriangle(x-dogSize*13, y+dogSize*3, x-dogSize*6, y-dogSize*6, x-dogSize*1.5, y+dogSize*0.5);
            
            ofSetColor(240, 128, 128);
            ofNoFill();
            ofDrawCircle(x-dogSize*7.5, y+dogSize*2.5, 2.8*dogSize);
            ofSetColor(255, 255, 255);
            ofFill();
            ofDrawTriangle(x-dogSize*12, y+dogSize*5.5, x-dogSize*7, y-dogSize*2, x-dogSize*2, y+dogSize*5.5);
            ofDrawCircle(x-dogSize*8.5, y, dogSize);
            
            ofSetColor(240, 128, 128);
            ofNoFill();
            ofDrawCircle(x-dogSize*6.5, y+dogSize*6.5, dogSize*3.3);
            ofSetColor(255, 255, 255);
            ofFill();
            ofDrawTriangle(x-dogSize*11.5, y+dogSize*13, x-dogSize*7.5, y+dogSize, x+dogSize*0.5, y+dogSize*8);
            
            ofSetColor(240, 128, 128);
            ofNoFill();
            ofDrawCircle(x-dogSize*4.5, y+dogSize*8, dogSize*2.8);
            ofSetColor(255, 255, 255);
            ofFill();
            ofDrawTriangle(x-dogSize*6, y+dogSize*12, x-dogSize*7.5, y+dogSize*4, x+dogSize*2.5, y+dogSize*7.5);
            
            ofSetColor(240, 128, 128);
            ofNoFill();
            ofDrawCircle(x-dogSize*1.5, y+dogSize*10, dogSize*2.3);
            ofSetColor(255, 255, 255);
            ofFill();
            ofDrawTriangle(x-dogSize*3.5, y+dogSize*13, x-dogSize*3.5, y+dogSize*6, x+dogSize*4.5, y+dogSize*11);

        //    さんかくみみ（右）
            ofSetColor(240, 128, 128);
            ofNoFill();
            ofDrawTriangle(x+dogSize*5.5, y-dogSize*6, x+dogSize*7.5, y-dogSize*5, x+dogSize*7.5, y-dogSize*7.5);
            ofSetColor(255, 255, 255);
            ofFill();
            ofDrawTriangle(x+dogSize*.5, y-dogSize*5, x+dogSize*4, y-dogSize*6.5, x+dogSize*8, y-dogSize*3.5);
        //    側面（右）
            ofSetColor(240, 128, 128);
            ofNoFill();
            ofDrawCircle(x+dogSize*6.5, y-dogSize*1.5, dogSize*3);
            ofSetColor(255, 255, 255);
            ofFill();
            ofDrawTriangle(x+dogSize*13.5, y+dogSize*3, x+dogSize*6, y-dogSize*6, x+dogSize*1.5, y+dogSize*0.5);
            
            ofSetColor(240, 128, 128);
            ofNoFill();
            ofDrawCircle(x+dogSize*7.5, y+dogSize*2.5, dogSize*2.8);
            ofSetColor(255, 255, 255);
            ofFill();
            ofDrawTriangle(x+dogSize*12, y+dogSize*5.5, x+dogSize*7, y-dogSize*2, x-dogSize*1.5, y+dogSize*5.5);
            ofDrawCircle(x+dogSize*8, y, dogSize);
            
            ofSetColor(240, 128, 128);
            ofNoFill();
            ofDrawCircle(x+dogSize*6.5, y+dogSize*6.5, dogSize*3.3);
            ofSetColor(255, 255, 255);
            ofFill();
            ofDrawTriangle(x+dogSize*11.5, y+dogSize*13, x+dogSize*7.5, y+dogSize, x-dogSize*0.5, y+dogSize*8);
            
            ofSetColor(240, 128, 128);
            ofNoFill();
            ofDrawCircle(x+dogSize*4.5, y+dogSize*8, dogSize*2.8);
            ofSetColor(255, 255, 255);
            ofFill();
            ofDrawTriangle(x+dogSize*6, y+dogSize*12, x+dogSize*8.1, y+dogSize*4, x-dogSize*2.5, y+dogSize*7.5);
            
            ofSetColor(240, 128, 128);
            ofNoFill();
            ofDrawCircle(x+dogSize*1.5, y+dogSize*10, dogSize*2.3);
            ofSetColor(255, 255, 255);
            ofFill();
            ofDrawTriangle(x+dogSize*3.5, y+dogSize*13, x+dogSize*3.5, y+dogSize*6, x-dogSize*5, y+dogSize*11);
            
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
        //ぽめ終わり******************************************************************************
                        
//            草
            ofSetColor(211, 228, 205);
            ofFill();
            ofDrawRectangle(0, 544, 1024, 224);
//            次へボタン
            ofSetColor(255, 255, 255);
            ofFill();
            ofDrawTriangle(925, 673, 945, 688, 925, 703);
//            文字系
            ofSetColor(0, 0, 0);
            font_title.drawString("Let's play the piano with pome!", 379, 312);
            font_sub.drawString("Click to Next", 876, 693);
           
            break;
            
//            画面遷移後
        case PIANO:
            
        //    グローバル変数初期化
            dogSize = 5;
            Px = 275;
            Py = 695;
            x = 475;
            y = 245;
            
            for (int i=0; i<8; i++) {
//                白鍵
                ofSetColor(126, 126, 126);
                ofNoFill();
                ofDrawRectangle(251+66*i, 432, 66, 308);
//                黒鍵
                if (i!=2 && i!=6 && i!=8 && i!=7) {
                    ofFill();
                    ofDrawRectangle(291+66*i, 432, 52, 179);
                }
//                鍵盤に対応する文字の表示
                ofSetColor(0, 0, 0);
                switch (i) {
                    case 0:
                        font_sub.drawString("A", Px, Py);
                        font_sub.drawString("W", Px+30+66*i, Py-100);
                        break;
                    case 1:
                        font_sub.drawString("S", Px+66*i, Py);
                        font_sub.drawString("E", Px+30+66*i, Py-100);
                        break;
                    case 2:
                        font_sub.drawString("D", Px+66*i, Py);
                        break;
                    case 3:
                        font_sub.drawString("F", Px+66*i, Py);
                        font_sub.drawString("T", Px+30+66*i, Py-100);
                        break;
                    case 4:
                        font_sub.drawString("G", Px+66*i, Py);
                        font_sub.drawString("Y", Px+30+66*i, Py-100);
                        break;
                    case 5:
                        font_sub.drawString("H", Px+66*i, Py);
                        font_sub.drawString("U", Px+30+66*i, Py-100);
                        break;
                    case 6:
                        font_sub.drawString("J", Px+66*i, Py);
                        break;
                    case 7:
                        font_sub.drawString("K", Px+66*i, Py);
                        break;
                }
            }
            
//            草
            ofSetColor(211, 228, 205);
            ofFill();
            ofDrawRectangle(0, 319, 1024, 65);
            ofSetColor(250, 200, 200);
//            太陽
            if (num%2 == 0) {
                ofDrawLine(121, 10, 121, 210);
                ofDrawLine(22, 111, 222, 111);
            }else{
                ofDrawLine(49, 41, 192, 184);
                ofDrawLine(49, 184, 192, 41);
            }
            ofSetColor(255, 255, 255);
            ofFill();
            ofDrawCircle(121, 111, 72);
            ofSetColor(250, 200, 200);
            ofFill();
            ofDrawCircle(121, 111, 60);
            
            
            x = x + move_x;
            y = y + move_y;
            
            //ぽめ**********************************************************************************
            //    左側のもふもふ
            //    頭のほう
                ofSetColor(R, G, B);
                ofNoFill();
                ofDrawEllipse(x-dogSize*4, y-dogSize*6.5, dogSize*2.7, dogSize*3);
                ofSetColor(255, 255, 255);
                ofFill();
                ofDrawTriangle(x, y-dogSize*6, x-dogSize*4, y-dogSize*7.5, x-dogSize*8, y-dogSize*3.5);
            //    さんかくみみ（左）
                ofSetColor(R, G, B);
                ofNoFill();
                ofDrawTriangle(x-dogSize*5.5, y-dogSize*5.5, x-dogSize*7.5, y-dogSize*5, x-dogSize*7.5, y-dogSize*7.5);
                ofSetColor(255, 255, 255);
                ofFill();
                ofDrawTriangle(x-dogSize*8.5, y-dogSize*5, x-dogSize*4, y-dogSize*6.5, x-dogSize*8, y-dogSize*3.5);
            //    側面（左）
                ofSetColor(R, G, B);
                ofNoFill();
                ofDrawCircle(x-dogSize*6.5, y-dogSize*1.5, 3*dogSize);
                ofSetColor(255, 255, 255);
                ofFill();
                ofDrawTriangle(x-dogSize*13, y+dogSize*3, x-dogSize*6, y-dogSize*6, x-dogSize*1.5, y+dogSize*0.5);
                
                ofSetColor(R, G, B);
                ofNoFill();
                ofDrawCircle(x-dogSize*7.5, y+dogSize*2.5, 2.8*dogSize);
                ofSetColor(255, 255, 255);
                ofFill();
                ofDrawTriangle(x-dogSize*12, y+dogSize*5.5, x-dogSize*7, y-dogSize*2, x-dogSize*2, y+dogSize*5.5);
                ofDrawCircle(x-dogSize*8.5, y, dogSize);
                
                ofSetColor(R, G, B);
                ofNoFill();
                ofDrawCircle(x-dogSize*6.5, y+dogSize*6.5, dogSize*3.3);
                ofSetColor(255, 255, 255);
                ofFill();
                ofDrawTriangle(x-dogSize*11.5, y+dogSize*13, x-dogSize*7.5, y+dogSize, x+dogSize*0.5, y+dogSize*8);
                
                ofSetColor(R, G, B);
                ofNoFill();
                ofDrawCircle(x-dogSize*4.5, y+dogSize*8, dogSize*2.8);
                ofSetColor(255, 255, 255);
                ofFill();
                ofDrawTriangle(x-dogSize*6, y+dogSize*12, x-dogSize*7.5, y+dogSize*4, x+dogSize*2.5, y+dogSize*7.5);
                
                ofSetColor(R, G, B);
                ofNoFill();
                ofDrawCircle(x-dogSize*1.5, y+dogSize*10, dogSize*2.3);
                ofSetColor(255, 255, 255);
                ofFill();
                ofDrawTriangle(x-dogSize*3.5, y+dogSize*13, x-dogSize*3.5, y+dogSize*6, x+dogSize*4.5, y+dogSize*11);

            //    さんかくみみ（右）
                ofSetColor(R, G, B);
                ofNoFill();
                ofDrawTriangle(x+dogSize*5.5, y-dogSize*6, x+dogSize*7.5, y-dogSize*5, x+dogSize*7.5, y-dogSize*7.5);
                ofSetColor(255, 255, 255);
                ofFill();
                ofDrawTriangle(x+dogSize*.5, y-dogSize*5, x+dogSize*4, y-dogSize*6.5, x+dogSize*8, y-dogSize*3.5);
            //    側面（右）
                ofSetColor(R, G, B);
                ofNoFill();
                ofDrawCircle(x+dogSize*6.5, y-dogSize*1.5, dogSize*3);
                ofSetColor(255, 255, 255);
                ofFill();
                ofDrawTriangle(x+dogSize*13.5, y+dogSize*3, x+dogSize*6, y-dogSize*6, x+dogSize*1.5, y+dogSize*0.5);
                
                ofSetColor(R, G, B);
                ofNoFill();
                ofDrawCircle(x+dogSize*7.5, y+dogSize*2.5, dogSize*2.8);
                ofSetColor(255, 255, 255);
                ofFill();
                ofDrawTriangle(x+dogSize*12, y+dogSize*5.5, x+dogSize*7, y-dogSize*2, x-dogSize*1.5, y+dogSize*5.5);
                ofDrawCircle(x+dogSize*8, y, dogSize);
                
                ofSetColor(R, G, B);
                ofNoFill();
                ofDrawCircle(x+dogSize*6.5, y+dogSize*6.5, dogSize*3.3);
                ofSetColor(255, 255, 255);
                ofFill();
                ofDrawTriangle(x+dogSize*11.5, y+dogSize*13, x+dogSize*7.5, y+dogSize, x-dogSize*0.5, y+dogSize*8);
                
                ofSetColor(R, G, B);
                ofNoFill();
                ofDrawCircle(x+dogSize*4.5, y+dogSize*8, dogSize*2.8);
                ofSetColor(255, 255, 255);
                ofFill();
                ofDrawTriangle(x+dogSize*6, y+dogSize*12, x+dogSize*8.1, y+dogSize*4, x-dogSize*2.5, y+dogSize*7.5);
                
                ofSetColor(R, G, B);
                ofNoFill();
                ofDrawCircle(x+dogSize*1.5, y+dogSize*10, dogSize*2.3);
                ofSetColor(255, 255, 255);
                ofFill();
                ofDrawTriangle(x+dogSize*3.5, y+dogSize*13, x+dogSize*3.5, y+dogSize*6, x-dogSize*5, y+dogSize*11);
                
            //    右もふもふ
                ofSetColor(R, G, B);
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
            //ぽめ終わり******************************************************************************
            
            break;
            
    }
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
    if (scene == PIANO) {
//        ピアノの実装&ぽめの動きなどの実装
        switch(key) {
            case 'a':
                move_x = 50;
                if (y == 195) {
                    move_y = 10;
                }
                R = 240;
                G = 128;
                B = 128;
    //            ドの音が鳴る
                do1.setSpeed(1);
                do1.play();
                break;
            case 'w':
                move_x = 50;
                if (y == 195) {
                    move_y = 10;
                }
                R = 255;
                G = 153;
                B = 0;
    //            ド＃の音が鳴る
                do1.setSpeed(1.06);
                do1.play();
                break;
            case 's':
                move_x = -50;
                move_y = -50;
    //            レの音が鳴る
                re2.setSpeed(1);
                re2.play();
                break;
            case 'e':
                move_x = -50;
                move_y = -50;
                R = 255;
                G = 153;
                B = 0;
    //            レ#の音が鳴る
                re2.setSpeed(1.05);
                re2.play();
                break;
            case 'd':
                move_x = 50;
                move_y = -50;
                R = 240;
                G = 128;
                B = 128;
    //            ミの音が鳴る
                mi3.play();
                break;
            case 'f':
                move_x = -50;
                if (y == 195) {
                    move_y = 10;
                }
                R = 240;
                G = 128;
                B = 128;
    //            ファの音が鳴る
                fa4.setSpeed(1);
                fa4.play();
                break;
            case 't':
                move_x = -50;
                if (y == 195) {
                    move_y = 10;
                }
                R = 255;
                G = 153;
                B = 0;
    //            ファ#の音が鳴る
                fa4.setSpeed(1.06);
                fa4.play();
                break;
            case 'g':
                move_x = 50;
                if (y == 195) {
                    move_y = 10;
                }
                R = 240;
                G = 128;
                B = 128;
    //            ソの音が鳴る
                so5.setSpeed(1);
                so5.play();
                break;
            case 'y':
                move_x = 50;
                if (y == 195) {
                    move_y = 10;
                }
                R = 255;
                G = 153;
                B = 0;
    //            ソ#の音が鳴る
                so5.setSpeed(1.06);
                so5.play();
                break;
            case 'h':
                move_x = -50;
                move_y = -50;
                R = 240;
                G = 128;
                B = 128;
    //            ラの音が鳴る
                ra6.setSpeed(1);
                ra6.play();
                break;
            case 'u':
                R = 255;
                G = 153;
                B = 0;
    //            ラ#の音が鳴る
                ra6.setSpeed(1.06);
                ra6.play();
                break;
            case 'j':
                move_x = 50;
                move_y = -50;
                R = 240;
                G = 128;
                B = 128;
    //            シの音が鳴る
                shi7.play();
                break;
            case 'k':
                move_x = -50;
                if (y == 195) {
                    move_y = 10;
                }
                R = 240;
                G = 128;
                B = 128;
    //            高いドの音が鳴る
                do8.play();
                break;
                
          }
        
    }
    
    
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
    
    if (915 <= x && 935 >= x) {
        if (673 <= y && 703 >= y) {
            scene = PIANO;
        }
    }
    
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
