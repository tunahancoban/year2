#include "Rectangle.h"
#include "Square.h"
#include <iostream>


Square::Square(){
}
Square::Square(Pen p,int edge){
    setEdge(edge);
    this->p=p;
}
Square::~Square(){}
void Square::draw(){
    Rectangle::draw();
}
void Square::setEdge(int edge){
    this->setHeight(edge);
    this->setWidth(edge);
}
int Square::getEdge(){
    return this->getHeight();
}
