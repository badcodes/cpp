#include <string>
#include "strhandle.h"

using namespace std;

StrHandle::StrHandle (const string & str)
{
	backup=str;
}
StrHandle::~StrHandle()
{
	;
}
string StrHandle::replace(const string& strFind,const string& strReplace)
{
	int pos,lenF,lenR;
	string strOut = backup;
	lenF = strFind.size();
	if (lenF<1) return strOut;
	lenR = strReplace.size();
	pos = strOut.find(strFind);
	while (pos>=0) {
		strOut.replace(pos,lenF,strReplace);
		pos = strOut.find(strFind,pos+lenR+1);
	}
	return strOut;
}
