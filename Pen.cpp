#include "Pen.h"
#include <iostream>

Pen::Pen(){}
Pen::Pen(char ink){             //Checks if the ASCII value is between 'a' and 'z'.
    if(ink>=97 && ink<=122){
        this->ink=ink;
    }
}
Pen::~Pen(){}
void Pen::write(int count){
    this->count=count;
    for(int i=0;i<this->count;i++){     
        if(this->isBold){
            printf("%c", this->ink-32); //Prints in bold if isBold is set to true.
        }
        else{
            printf("%c", this->ink);
        }
    }
}
void Pen::space(int n){     
    for(int i=0; i<n;i++){
        printf(" ");        
    }
}
void Pen::setBold(bool isBold){
    this->isBold=isBold;
}
bool Pen::getBold(){
    return this->isBold;
}
void Pen::setChar(char ink){
    if(ink>=97 && ink<=122){
        this->ink=ink;
    }
}
char Pen::getChar(){
    return this->ink;
}
void Pen::setCount(int count){
    this->count=count;
}
int Pen::getCount(){
    return this->count;
}