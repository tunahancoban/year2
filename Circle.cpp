#include "Circle.h"
#include <math.h>
#include <iostream>

Circle::Circle(){}
Circle::Circle(Pen p,int radius){
    this->p=p;
    this->radius=radius;
}
Circle::~Circle(){}
void Circle::draw(){
    for (int i = -(this->radius); i <= this->radius; i++) {
        for (int j = -(this->radius); j <= this->radius; j++) {
            int dist = round(sqrt(i * i + j * j));
            if (dist == radius) {
                this->p.write(1);
            } else {
                this->p.space(1);
            }
        }
        printf("\n");
    }
}
void Circle::setRadius(int radius){
    this->radius=radius;
}
int Circle::getRadius(){
    return this->radius;
}
