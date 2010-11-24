//lString.h
#ifndef _INC_lSTRING_LIN
#define _INC_LSTRING_LIN
#include <iostream>
using namespace std;
class lString {
	private:
		char * pStart;
		char * pMem;
		long memSize;
		char *newmem(long l);
		bool freemem();
		void copy_from_char(const char *);
		static long objCount;
	public:
		lString();
		~lString();
		lString(const char *);
		lString(const lString &);
		lString & operator=(const lString &);
		void operator=(const char *);
		bool resize(const long);
		operator char* ();
		operator char * () const;
		friend ostream & operator<<(ostream &,const lString &);
		friend bool operator>> (istream &,const lString &);
};
#endif


