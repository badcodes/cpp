#include <iostream>
using namespace std;

template <class Any>
 void Swap(Any &a,Any &b);
 
struct job {
	char name[200];
	double salary;
	int floor;
};

template <>
 void Swap<job>(job &,job & );
 
int main(void)
{
	int i=10,j=99;
	double e=23.7,f=168.8;
	job a = {"Mike",2000.0,3};
	job b = {"John",3000.0,4};
	cout<<"i="<<i<<endl;
	cout<<"j="<<j<<endl;
	cout<<"e="<<e<<endl;
	cout<<"f="<<f<<endl;
	cout<<a.name<<endl;
	cout<<"Salary:"<<a.salary<<endl;
	cout<<"Floor:"<<a.floor<<endl;
	cout<<b.name<<endl;
	cout<<"Salary:"<<b.salary<<endl;
	cout<<"Floor:"<<b.floor<<endl;
	Swap(i,j);
	Swap(e,f);
	Swap(a,b);
	cout<<"i="<<i<<endl;
	cout<<"j="<<j<<endl;
	cout<<"e="<<e<<endl;
	cout<<"f="<<f<<endl;
	cout<<a.name<<endl;
	cout<<"Salary:"<<a.salary<<endl;
	cout<<"Floor:"<<a.floor<<endl;
	cout<<b.name<<endl;
	cout<<"Salary:"<<b.salary<<endl;
	cout<<"Floor:"<<b.floor<<endl;
	return 0;	
}
template <class Any>
void Swap(Any &a,Any &b)
{
	Any temp;
	temp=a;
	a=b;
	b=temp;
}
template <>
void Swap<job>(job &a,job &b)
{
	job temp=a;
	a.salary=b.salary;
	a.floor=b.floor;
	b.salary=temp.salary;
	b.floor=temp.floor;
}
