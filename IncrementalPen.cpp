#include "IncrementalPen.h"
#include "Pen.h"
#include <iostream>

IncrementalPen::IncrementalPen(){
}
IncrementalPen::IncrementalPen(char ink){
    Pen::setChar(ink);
}
IncrementalPen::~IncrementalPen(){}
void IncrementalPen::write(int count){
        for(int i=0;i<count;i++){
            if(getChar() >=122){               //Checks if the ASCII value is between 'a' and 'z'
                printf("%c", Pen::getChar());                
                Pen::setChar((char)(Pen::getChar()-25));    
            }
            else{       
                printf("%c", Pen::getChar());        
                Pen::setChar((char)(Pen::getChar()+1));    
            }                     
        }
}
void IncrementalPen::setChar(char ink){
    Pen::setChar(ink);
}
char IncrementalPen::getChar(){
    return Pen::getChar();
}
