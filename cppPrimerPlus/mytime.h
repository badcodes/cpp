#ifndef MYTIME_H
#define MYTIME_H
#include <iostream>
using namespace std;
class TIME
{
	private:
		int hour;
		int minute;
		char text[40];
		void normalize(void);
	public:
		TIME();
		TIME(const int h=0,const int m=0);
		char * tostring(void) ;
		void show(void) const;
		void add(const int h,const int m);
		TIME operator+(const TIME & tt) const;
		TIME operator*(const double by) const;
		friend TIME operator*(const double by,const TIME & tt);
		friend ostream & operator<<(ostream & os,const TIME & tt);
};
#endif
