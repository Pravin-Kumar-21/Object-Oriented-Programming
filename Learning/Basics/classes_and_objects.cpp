#include<iostream>
#include<string >
using namespace std;
class Student{
    private:
        string name;
        int roll;
        int age;
    public:
        void get_details()
        {
            cout<<"Enter the name"<<endl;
            getline(cin,name);
            cout<<"Enter the Roll Number"<<endl;
            cin>>roll;
            cout<<"Enter the Age"<<endl;
            cin>>age;
        }
        void display()
        {
            cout<<"Name\t"<<name<<endl;
            cout<<"Roll Number\t"<<roll<<endl;
            cout<<"Age\t"<<age<<endl;
        }    
};
int main()
{
    Student s;
    s.get_details();
    s.display();
    return 0;
}
