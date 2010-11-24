#include <iostream>
using namespace std;

//namespace linClass {
	
	class Complex 
	{
	private:
		double real;
		double imaginary;
	public:
		Complex();
		Complex(double,double);
		Complex operator+(const Complex &) const;
		Complex operator-(const Complex &) const;
		Complex operator*(const Complex &) const;
		Complex operator*(const double) const;
		Complex operator~() const;
		friend Complex operator*(const double,const Complex &);
		friend ostream & operator<<(ostream &,const Complex &);
		friend bool operator>>(istream &,Complex &);	
	};

//}
