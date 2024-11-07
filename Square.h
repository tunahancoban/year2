#ifndef SQUARE_H_
#define SQUARE_H_
#include "Rectangle.h"
#include "Pen.h"
#include "IncrementalPen.h"
class Square : public Rectangle{
    public:
        Square();                    //Empty constructor
        Square(Pen ip, int edge);    //This constructor takes an incremental pen and the value of edge
        ~Square();                   //Destructor
        void draw() override;        //Draws a rectangle
        void setEdge(int edge);      //Assigns a value to the edge
        int getEdge();               //Returns the integer value of the edge
};
#endif