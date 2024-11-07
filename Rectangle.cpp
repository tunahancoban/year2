#include "Rectangle.h"
#include <iostream>
Rectangle::Rectangle(){}
Rectangle::Rectangle(Pen p, int width, int height){
    this->p=p;
    this->width=width;
    this->height=height;
}
Rectangle::~Rectangle(){}
void Rectangle::draw(){
    for(int i=0; i<this->height; i++){
        for(int j=0; j<this->width;j++){
            if(i==0||i==height-1){
                this->p.write(1);
            }
            else if(j==0 || j==width-1){
                this->p.write(1);
            }
            else{
                this->p.space(1);
            }
        }
        printf("\n");
    }
}
void Rectangle::setWidth(int width){
    this->width=width;
}
int Rectangle::getWidth(){
    return this->width;
}
void Rectangle::setHeight(int height){
    this->height=height;
}
int Rectangle::getHeight(){
    return this->height;
}