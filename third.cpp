#include<iostream>
#include<string.h>
using namespace std;
class society
{
    private:
        string name;
       long long int   income;
        int hno, mno;
        char ftype[20];
    public:
        void read()
        {
            cout<<"Enter Name"<<endl;
            getline(cin,name);
            cout<<"Enter  House Number"<<endl;
            cin>>hno;
            cout<<"Enter Number of Members"<<endl;
            cin>>mno;
            cout<<"Enter Income"<<endl;
            cin>>income;
        }
        void allocate()
        {
            if(income>=50000)
            {
                strcpy(ftype,"High Class 5BHK");
            }
            else if(income<50000 && income>=25000)
            {
                strcpy(ftype,"Middle Class 3BHK");
            }
            else
            {
                strcpy(ftype,"Lower Class Society 2BHK");
            }
        }
        void display()
        {
            cout<<"The Name is\t "<<name<<endl;
            cout<<"The House Number is \t"<<hno<<endl;
            cout<<"The Number of Members\t"<<mno<<endl;
            cout<<"The Income is\t "<<income<<endl;
            cout<<"Flat type"<<ftype<<endl;
        }
};
int main()
{
    society s;
    s.read();
    s.allocate();
    s.display();

    return 0;

}