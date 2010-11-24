#include "mytime.h"
#include <iostream>
using namespace std;

TIME::TIME()
{
	hour=0;
	minute=0;
}
TIME::TIME(const int h,const int m)
{
	hour=h;
	minute=m;
	normalize();
}
void TIME::show(void) const
{
	cout<<hour<<":"<<minute;
}
TIME TIME::operator+(const TIME & tt) const
{
	TIME sum(hour + tt.hour,minute + tt.minute);
	return sum;
}
void TIME::normalize(void)
{
	while(minute<0 && hour>0)
	{
		minute += 60;
		hour--;
	}
	while(minute>60)
	{
		minute -= 60;
		hour++;
	}
	
}
char * TIME::tostring(void)
{
	return strcpy(text,"Not implemented.");
}
TIME TIME::operator*(const double by) const
{
	TIME result(hour*by,minute*by);
	return result;
}
TIME operator*(const double by,const TIME & tt)
{
	return tt * by;
}
ostream & operator<<(ostream & os,const TIME & tt)
{
	os<<tt.hour<<":"<<tt.minute;
	return os;
}
