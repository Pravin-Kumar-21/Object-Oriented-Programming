 #include<iostream>
#include<string>
using namespace std;
class employee
{
    private:
        long long int id;
        int salary;
        long long int contacts;
        string name;
    public :
        void input()
        {
            cout<<"Enter the name of the Employee"<<endl;
            getline(cin,name);
            cout<<"Enter the id number of the employee"<<endl;
            cin>>id;
            cout<<"Enter the salary of the employee"<<endl;
            cin>>salary;
            cout<<"Enter the contacts of the employee"<<endl;
            cin>>contacts;
        }
        void display()
        {
            cout<<"The Name of the employee is name \t"<<name<<endl;
            cout<<"The id of the employee is \t "<<id<<endl;
            cout<<"The Salary of the employee is \t"<<salary<<endl;
            cout<<"The Contact of the employee is \t"<<contacts<<endl;
        }
};
int main()
{
    employee e1;
    e1.input();
    e1.display();
    return 0;
}