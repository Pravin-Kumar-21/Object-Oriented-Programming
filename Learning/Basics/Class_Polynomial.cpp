#include<iostream>
using namespace std;
class Polynomial{
    private:
    int *degCoef;
    int  capacity;

    public:
    // default Constructor 
    Polynomial(){
        degCoef = new int[5];
        capacity =5;
        for (int i=0;i<capacity;i++)
        {
            degCoef[i]=0;
        }
    }

    // Copy constructor 
    Polynomial(Polynomial const &p){
        this->capacity = p.capacity;
        for(int i=0;i<capacity;i++)
        {
            this->degCoef[i]= p.degCoef[i];
        }
    }

    // copy assignment operator
    void  SetCoefficient(int element, int degree){
        this->degCoef[degree]=element;
    }
    void increase_size(int degree){
        capacity= 2*degree;
        int *newdegcoef = new int[capacity];
        for(int i=0 i<capacity;i++)
        {
            newdegcoef[i]= degCoef[i];
        }
        delete [] degCoef ;
        degCoef = newdegcoef;

    }
    // setCoefficient 

};