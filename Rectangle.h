#ifndef RECTANGLE_H_
#define RECTANGLE_H_
#include "Shape.h"
#include "Pen.h"
class Rectangle : public Shape{
    public:
        Rectangle();                                //Empty constructor
        Rectangle(Pen p, int width, int height);    //This constructor takes a pen length and width
        ~Rectangle();                               //Destructor
        void draw() override;                       //Draws a rectangle
        void setWidth(int width);                   //Assigns a value to the width
        int getWidth();                             //Returns the integer value of the width
        void setHeight(int height);                 //Assigns a value to the height
        int getHeight();                            //Returns the integer value of the height
    private: 
        int width;
        int height;
};

#endif