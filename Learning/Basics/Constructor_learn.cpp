#include<iostream>
#include<string>
using namespace std ;
class Student{
    private:
        string name ;
        int id;
        char sex;
    public:
        Student(){                                  // contructor is same as of the class name it is declared inside the public access specifier
              id =0;               
              cout<<"Default Constructor is called "<<endl;   // This type of Constructor is reffered to as Default Constructor 
        }
        Student(string &s)                                              // This is Reffered  to as copy constructor here you can se that there is an argument passed with the function
        {                                                                          // To call this type of contructor an argument is passed just as an object is created  
            name= s;
            cout<<"Parameterised Constructor is Called"<<endl;
        }
        void input()
        {
            cout<<"Enter the id of the Student"<<endl;
            cin>>id;
            cout<<"Enter Sex"<<endl;
            cin>>sex;
        }
        void display(){
            cout<<"Name\t"<<name<<endl;
            cout<<"ID\t"<<id<<endl;
            cout<<"Sex\t"<<sex<<endl;
        }
};
int main()
{
    Student s1;                             // Just as  the object is created the default constructor is  called ...
    s1. display();
    cout<<endl;
    s1.input();
    s1.display();
   /* when you carefully observe the output you will find out that the you will find out that the the parameterised constructor is being called and you 
   will see that the output will not display the name since it is not initialised anywhere in the code uptill now and you will also see the statement of Default constructor in the output*/
   
 /*Now you will se that i will now use the parameterised constructor */
    cout<<endl;
   string str ="Pravin Kumar";                   //inorder to call the parameterised constructor you need to pass the argument just during the time of object creation as i did  here ..
   Student s2(str);
   s2.input();
   cout<<endl;
   s2.display();
   cout<<endl;
   // so in the above object we saw a parameterised constructor working in the code.
   // now we wil learn about "this ->" key word  how it works and later we will study about the copy constructor
return 0;
}