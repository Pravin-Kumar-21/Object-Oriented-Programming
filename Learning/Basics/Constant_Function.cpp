#include<iostream>
using namespace std;
class Fraction {
	private :

		int numerator;
		int denominator;

	public :

		Fraction() {
			
		}

		Fraction(int numerator, int denominator) {
			this -> numerator = numerator;
			this -> denominator = denominator;
		}

		int getNumerator() const {
			return numerator;
		}
		
		int getDenominator() const {
			return denominator;
		}

		void setNumerator(int n) {
			numerator = n;
		}

		void setDenominator(int d) {
			denominator = d;
		}

		void print() const {
			cout << this -> numerator << " / " << denominator << endl;
		}

		void simplify() {
			int gcd = 1;
			int j = min(this -> numerator, this -> denominator);
			for(int i = 1; i <= j; i++) {
				if(this -> numerator % i == 0 && this -> denominator % i == 0) {
					gcd = i;
				}
			}
			this -> numerator = this -> numerator / gcd;
			this -> denominator = this -> denominator / gcd;
		}

		void add(Fraction const &f2) {
			int lcm = denominator * f2.denominator;
			int x = lcm / denominator;
			int y = lcm / f2.denominator;

			int num = x * numerator + (y * f2.numerator);

			numerator = num;
			denominator = lcm;
			simplify();	
		}

		void multiply(Fraction const &f2) {
			numerator = numerator * f2.numerator;
			denominator = denominator * f2.denominator;
			
			simplify();
		}

};
int main() {
	Fraction f1(10, 2);
	Fraction f2(15, 4);

	Fraction const f3;				// we are creating a constant object // The default constructor will initialize the value with some garbage value so

	cout << f3.getNumerator() << " " << f3.getDenominator() << endl;  				// lets have the looks of this statement 
	/* we find out that the  above line of code does not work this is because the compiler plays safely here since the constant object can only read we  cannot write
		so compiler is not awware of the content of the methods/Functions that the class contain so in case if the metthod changes something of a constnt object the 
		its meaning would be invaluable so to avoid this problem */
	

	f3.setNumerator(10);
}