#include<iostream>
#include<string>
using namespace std;
class student{
    protected:
    string name;
    long long int roll_no;
    string city;
    public:
    void accept()
    {
        cout<<"Enter the name"<<endl;
        getline(cin,name);
        cout<<"Enter the Roll Number"<<endl;
        cin>>roll_no;
        cout<<"Enter the City"<<endl;
        getline(cin,city);
    }
    void display()
    {
        cout<<"The Name is "<<name<<endl;
        cout<<"The Roll Number is"<<roll_no<<endl;
        cout<<"The City is"<<city<<endl;
    }
    
};