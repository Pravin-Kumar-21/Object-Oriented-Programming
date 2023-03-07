/*Write a program  to input  a binary  number and find its complement  */
#include<iostream>
#include<string.h>
using namespace std;
class binary
{
    private:
        char bin[100];
        char binor[100];
    public:
        bool check_binary()
        {
            int i=0;
            while(bin[i]!='\0')
            {
                if(bin[i] != '0' &&  bin[i] != '1')
                    return false;
                    i++;      
            }
            return true;
        }
        void input ()
        {
            cout<<"Enter the Binary Number"<<endl;
            cin.getline(bin,100);
            if(check_binary())
            {
                strcpy(binor,bin);
            }
            else 
            {
                cout<<"Entered Number is not binary"<<endl;
            }
        }
        void complement()
        {
            strcpy(bin,binor);
            int i=0;
            while(bin[i]!='\0')
            {
                if(bin[i]=='0')
                {
                    bin[i]='1';
                }
                else
                {
                    bin[i]='0';
                }
                i++;
            }
        }
        void display()
        {
            cout<<"The Binary Input is "<<binor<<endl;
            cout<<"The Binary Complement is"<<bin<<endl;
        }
};
int main()
{
    binary b;
    b.input();
    b.complement();
    b.display();
    return 0;
}


   