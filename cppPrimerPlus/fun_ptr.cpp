#include <iostream>
using namespace std;
double xrlin(int);
double xiaoranzzz(int);
double lin(int);
void estimate(int code,double (*)(int));

int main()
{
	cout<< "Estimate from xrlin:\n";
	estimate(15,xrlin);
	cout<< "From xiaoranzzz:\n";
	estimate(30,xiaoranzzz);
	cout<< "From lin:\n";
	estimate(60,lin);
}

void estimate(int code,double (*pf)(int))
{
	cout << code << " lines will take ";
	cout << (*pf)(code) << " hour(s)." << endl;
}

double xrlin(int line)
{
	return 0.1*line;
}

double xiaoranzzz(int line)
{
	return 0.24*line;
}

double lin(int line)
{
	return xrlin(line)+xiaoranzzz(line);
}
