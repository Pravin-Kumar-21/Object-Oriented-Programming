#include<iostream>
using namespace std;
void test();
class Bus{
    public:
    void print();    // this function is a friend of class truck so it can access its private property
    
};
class truck{
    private :
    int x;
    protected:
    int y;
    public:
    int z;
    friend void Bus :: print();  // here we decalared a freind function which can access the private data members of class 
    // so with the help this "friend" keyword we can access the private property of class truck
    friend void test(); // creating a freind function which is globally declared
};  
// so whenever we are creating a friend function we cannot implement it inside the class we have to declare it outside the class
void Bus ::print(){
    // so now in this function we can access the private property of class truck
    truck t ;
    t.x=10;
    t.y=20;
    cout<<"x = "<<t.x<< " y ="<<t.y<<endl;
} 
// now lets check if we can access private property of the class by using friend function which is globally declared 
void test()
{
    truck t;
    cout<<"x = "<<t.x<< " y ="<<t.y<<endl;
}
int main()
{
    Bus b;
    b.print();
    test();
}
/* 
I. Friend Functions do not have the accces to this pointer since friend functions are not a part of the class
II. Freind functions can be declared under any access specifier i.e is private, public  or protected
*/
// so the above friend functions we created using friend keyword everytime ... what if we want to create multiple friend functions the 
// efficient way to do this is by creating friend class.