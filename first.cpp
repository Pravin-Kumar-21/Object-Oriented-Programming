/* Create a class student with the following details 
    Data Members 
    name, rollno,marks
    Member functions
    input() -> to take input details of any student
    display() -> to show student details 
*/
#include<iostream>
#include<string>
using namespace std;
class student
{
    private:
        string name;
        long long int rollno=0;
        float marks=0;
    public:
        void input()
        {
            cout<<"Enter the name of the Student"<<endl;
            //gets(name);           ->this Does not work in the Latest version of C++
            // instead use getline (input stream,output string ,Delimeter)
            getline(cin,name);
            cout<<"Enter the Roll Number of "<<name<<endl;
            cin>>rollno;
            cout<<"Enter the marks of "<<name<<endl;
            cin>>marks;
        }
        void display()
        {
            cout<<"The Name of the of the student is \t"<<name<<endl;
            cout<<"The Roll Number of the student is \t"<<rollno<<endl;
            cout<<"The Marks of the student is \t"<<marks<<endl;
        }
};
int main()
{
    student s1;
    s1.input();
    s1.display();
    student s2;
    cout<<endl;
    cout<<endl;
    s2.input();
    s2.display();    
    return 0;
}
