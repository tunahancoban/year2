#ifndef CIRCLE_H_
#define CIRCLE_H_
#include "Shape.h"
#include "Pen.h"
class Circle : public Shape{
    public:
        Circle();                   //Empty constructor
        Circle(Pen p, int radius);  //This constructor takes a pen and radius
        ~Circle();                  //Destructor
        void draw() override;       //Draws a circle
        void setRadius(int radius); //Assigns a value to the radius
        int getRadius();            //Returns the integer value of the radius
    private:
        int radius=1;

};

#endif