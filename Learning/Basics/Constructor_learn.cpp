#include<iostream>
#include<string>
using namespace std ;
class Student{
    private:
        string name ;
        int id;
        char sex;
        string dob;
    public:
        Student(){                                  // contructor is same as of the class name it is declared inside the public access specifier
              id =0; 
              dob="21/08/2001";              
              cout<<"Default Constructor is called "<<endl;   // This type of Constructor is reffered to as Default Constructor 
        }
        Student(string &s)                                              // This is Reffered  to as copy constructor here you can se that there is an argument passed with the function
        {                                                                          // To call this type of contructor an argument is passed just as an object is created  
            name= s;
            cout<<"Parameterised Constructor is Called"<<endl;
        }
        // Dcelaring constructor with multiple paramerters
        Student(int ID , string &s, char ch){
            cout<<"Multiple Parameterised Constructor is Called"<<endl;
            name=s;
            id=ID;
            sex=ch;
        }
        Student(int id, string &name, char sex , string &dob){
            cout<<"Constructor with this-> keyword is called"<<endl;
            this->id=id;
            this->name=name;
            this->sex= sex;
            this->dob=dob;
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
            cout<<"Date of Birth\t"<<dob<<endl;
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
   // now we wil learn about constructor with multiple arguments  how it works and later we will study about the copy constructor
   char ch='M';
    string dob="21/08/2001";
    Student *s3 =new Student(22,str,ch);
    s3->display();
    cout<<endl;   
    // now we will study about "this" keyword  and how it works
    /* like suppose we want to we have the argument same as the name of data members of the class so we whn we pass it to the member functions of  the class
        it gets confilcted between the data memeber of the class so in order to avoid this mishap what we do is we use "this" key word with and arrow "->" 
        This keyword holds the address of the current object */
    Student *s4 =new Student(22,str,ch,dob);
    s4->display();
    cout<<endl;
return 0;
}