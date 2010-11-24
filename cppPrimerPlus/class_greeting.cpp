//class_greeting.cpp

#include "class_greeting.h"
#include <iostream>
#include <cstring>
using namespace std;

void Greeting::askname(void) 
{
	cout<<"Who you'll send greeting to?";
	cin.getline(name,40);
	return;
}
void Greeting::say(void)
{
	while (!name[0])
		askname();
	cout<<"You says:\"Hello,"<<name<<"!\""<<endl;
	return;
}
Greeting::Greeting(void)
{
	name[0]='\0';
}
void Greeting::to(const char* somebody)
{
	strncpy(name,somebody,39);
	name[39]='\0';
}
Greeting::Greeting(const char* somebody)
{
	to(somebody);
}
Greeting::~Greeting()
{
	if (name[0])
		cout<<"You says:\"Goodbye "<<name<<"!\""<<endl;
}
