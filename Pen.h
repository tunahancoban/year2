#ifndef PEN_H_
#define PEN_H_
class Pen{
    public:
        Pen();
        Pen(char c);
        ~Pen();
        virtual void write(int count);      //Prints the character up to count times 
        void space(int n);          //Prints the " " up to n times 
        void setBold(bool isBold);  //Assigns a value to the isBold boolean
        bool getBold();             //Returns the value of the isBold variable
        void setChar(char ink);     //Assigns a value to the ink
        char getChar();             //Returns the value of ink  
        void setCount(int count);   //Assigns a value to the count
        int getCount();             //Returns the value of count

    private:
        char ink='a';
        int count=1;
        bool isBold=false;
};
#endif