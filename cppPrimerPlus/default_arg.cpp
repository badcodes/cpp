#include <iostream>
using namespace std;
void yourname(const char * name = "xrLiN");

int main(void)
{
	yourname();
	yourname("Jacky");
	yourname();
	return 0;
}

void yourname(const char *name)
{
	cout<<name<<endl;
	return;
}
