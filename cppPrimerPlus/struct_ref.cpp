#include <iostream>
using namespace std;

struct classInfo{
	char name[256];
	int count;
};

   classInfo & queryClass(  classInfo &);

int main(void)
{
	  classInfo test = {
		"cString",
		0		
	};
	queryClass(test);
	queryClass(queryClass(test));
	return 0;
	
}

   classInfo & queryClass(  classInfo & cls)
{
	cls.count++;
	cout<<cls.name<<':'<<cls.count<<endl;
	return cls;
}
