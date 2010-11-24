#include <iostream>
#include "complex0.h"
using namespace std;
//using namespace linClass;

Complex::Complex()
{
	real=0.0;
	imaginary=0.0;
}
Complex::Complex(double r,double i)
{
	real=r;
	imaginary=i;
}
Complex Complex::operator+(const Complex & c) const
{
	return Complex(real + c.real,imaginary + c.imaginary);
}
Complex Complex::operator-(const Complex & c) const
{
	return Complex(real - c.real,imaginary - c.imaginary);
}
Complex Complex::operator*(const Complex & c) const
{
	return Complex(real*c.real - imaginary*c.imaginary,real*c.imaginary + imaginary*c.real);
}
Complex Complex::operator*(const double d) const
{
	return Complex(real*d,imaginary*d);
}
Complex Complex::operator~() const
{
	return Complex(real,-imaginary);
}
Complex operator*(const double d,const Complex & c)
{
	return c*d;
}
ostream & operator<<(ostream & os,const Complex & c)
{
	os<<'('<<c.real<<','<<c.imaginary<<"i)";
	return os;			
}
bool operator>>(istream & is,Complex & c)
{
	cout<<"real:";
	if (!(is>>c.real)) return false;
	cout<<"imaginary:";
	if (!(is>>c.imaginary)) return false;
	return true;
}
