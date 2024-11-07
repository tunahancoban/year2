#ifndef SHAPE_H_
#define SHAPE_H_
#include "Pen.h"
#include "IncrementalPen.h"
class Shape{
    public:
       virtual void draw();       //Draws a shape              
    protected:
        Pen p;        
};
#endif