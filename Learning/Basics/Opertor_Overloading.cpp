// we will study about operator overloading in this program
// operator overloading basically means extending any pre-existing-operator such  that will work for our user defined classes also ..
// let suppose i want to add the objects  f1 and f2 of the class and store it in f3 object  so what we do 
#include<iostream>
#include<algorithm>
using namespace std;
class Fraction{
    private:
        int numerator ;
        int denominator;
    public:
        Fraction(int numerator, int denominator)
        {
            this->numerator=numerator;
            this->denominator=denominator;
        }
        void print(){
            cout<<numerator<<"/"<<denominator<<endl;
        }
        void  simplyfy(){
            int gcd =1;                                                                                                
            int j = min(this->numerator, this->denominator);                
            for(int i=1;i<=j;i++){
                if(this->numerator%i == 0 && this->denominator%i == 0)
                    gcd=i;
            }
            this->numerator=this->numerator/gcd;
            this->denominator=this->denominator/gcd;    
        }
        Fraction add(Fraction const  &f2)                                                                  
        {                                                                                                  
            int lcm = denominator*f2.denominator;
            int x = lcm/denominator;
            int y = lcm/f2.denominator;
            int num = ((x*numerator)+(y*f2.numerator));
           // this->numerator = num;
            //this->denominator =lcm;
            Fraction fnew(num,lcm);                 // here we have created a new object and we will pass the value (num,lcm) to the constructor and we serve the service 
            fnew.simplyfy();                              // but now our task is to add the objects via the add operator '+' so what we will do now   
            return fnew;
        }
        // lets see how we add the objects via  operator overloading   // it works similarly as Fraction F3 =f1.add(f2) where this holds the address of the f1 object and f2 is passed as an argument
        Fraction  const operator+(Fraction const  &f2)       // fraction f4 =f1+f2 the first object holds the value of the first object and f2 holds the value of the second object                                                           
        {                                                                                                  
            int lcm = denominator*f2.denominator;
            int x = lcm/denominator;
            int y = lcm/f2.denominator;
            int num = ((x*numerator)+(y*f2.numerator));
           // this->numerator = num;
            //this->denominator =lcm;
            Fraction fnew(num,lcm);                
            fnew.simplyfy();                             
            return fnew;
        }
        // now i want to make the multiply function with operator overloading method...
        // working fine in case of operator loading method
        Fraction  const operator*(Fraction const &f4)
        {
           int num = this->numerator*f4.numerator;
            int den = this->denominator*f4.denominator;
            Fraction fnew(num,den);
            fnew.simplyfy();
            return fnew;
        }
        bool  const operator==(Fraction const &f){
            if(numerator==f.numerator && denominator==f.denominator)
                return true ;
            else
                return false;
        }
};
int main() {
	Fraction f1(10, 2);
	Fraction f2(15, 4);
	Fraction f3 = f1.add(f2);
	Fraction f4 = f1 + f2;
	f1.print();
	f2.print();
	f3.print();
	f4.print();
    Fraction f5 = f1 *f2;
	f5.print();

	if(f1 == f2) {
		cout << "Equal" << endl;
	}
	else {
		cout << "Not equal " << endl;
		
	}
  }