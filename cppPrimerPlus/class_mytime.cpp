#include "mytime.h"
#include <iostreAm>
using namespace std;

int main(void)
{
	TIME A(12,30);
	TIME B(5,40);
	cout<<"A = "<<A<<endl;
	cout<<"B = "<<B<<endl;
	cout<<"Add B to A"<<endl;
	A = A + B;
	cout<<"A = "<<A<<endl;
	cout<<"Mulitply A By 2.34"<<endl;
	A = 2.34 * A;
	cout<<"A = "<<A<<endl;
	cout<<"Mulitply B By 2.34"<<endl;
	B = B * 2.34;
	cout<<"B = "<<B<<endl;
	return 0;
}
