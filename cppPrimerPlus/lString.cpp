//lString.cpp
#include "lString.h"
#include <iostream>
#include <string>
using namespace std;
long lString::objCount=0;
char * lString::newmem (long l)
{
	memSize=l+1;
	pMem = new char[memSize];
	cout<<"Memory allocated for "<<memSize<<" chars."<<endl;
	return pMem;
}
bool lString::freemem()
{
	cout<<"Memory be free for "<< memSize << " chars: " << "\"" << pMem << "\"" <<endl;
	delete [] pMem;
	return true;
}
void lString::copy_from_char(const char *s)
{
	pStart = newmem(strlen(s));
	strcpy(pStart,s);
}
lString::lString()
{
	objCount++;
	copy_from_char("");
}
lString::lString(const char * s)
{
	objCount++;
	copy_from_char(s);
}
lString::lString(const lString & lstr)
{
	objCount++;
	copy_from_char(lstr.pStart);
}
lString & lString::operator=(const lString & lstr)
{
	if (this == &lstr) {
		return *this;
	}
	freemem();
	copy_from_char(lstr.pStart);
	return *this;
}
ostream & operator<< (ostream & os ,const lString & lstr) 
{
	os<<(char*)lstr;
	return os;	
}
void lString::operator= (const char *s)
{
	freemem();
	copy_from_char(s);
}
lString::~lString()
{
	freemem();
}
lString::operator char*()
{
	return pStart;
}
lString::operator char*() const
{
	return pStart;
}
bool lString::resize(const long newSize)
{
	char * tmpStr = strdup(pStart);
	freemem();
	pStart=newmem(newSize);
	strncpy(pStart,tmpStr,newSize);
	pStart[newSize]='\0';
	return true;
}
bool operator>> (istream & is,const lString & lstr)
{
	return (is >> lstr.pStart);
}
