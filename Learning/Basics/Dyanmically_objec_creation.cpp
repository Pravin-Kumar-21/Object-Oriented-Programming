#include<iostream>
using namespace std;
#include<string>
class Student{
    public:
      //string name
        int roll;                           // 4 bytes
        int age;                        // 4bytes
        void get_details()
        {
        //    cout<<"Enter the name"<<endl;
          //  getline(cin,name);
            cout<<"Enter the Roll Number"<<endl;
            cin>>roll;
            cout<<"Enter the Age"<<endl;
            cin>>age;
        }
        void display()
        {
            //cout<<"Name\t"<<name<<endl;
            cout<<"Roll Number\t"<<roll<<endl;
            cout<<"Age\t"<<age<<endl;
        }    
};
//dynamic object creation of  
int main()
{
  Student  *s3 = new Student;
  (*s3).age=21;
  (*s3).roll=22;
  (*s3).display();
  return 0;
}