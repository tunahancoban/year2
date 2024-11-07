#ifndef INCREMENTALPEN_H_
#define INCREMENTALPEN_H_
#include "Pen.h"
class IncrementalPen : public Pen{
    public:
        IncrementalPen();
        IncrementalPen(char ch);
        ~IncrementalPen();
        void write(int count) override; //Prints the character up to count times 
        void setChar(char ch);  //Assigns a value to the ink
        char getChar();         //Returns the value of ink 
    private:
};
#endif