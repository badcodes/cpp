// 
// File: btstring.cc
// Created by: User <Email>
// Created on: Wed Aug 16 15:22:02 2006
// 

#include "btstring.h"
#include <string>
#include <iostream>
using namespace std;

BTString::BTString()
{
	;
}
BTString::~BTString() {
	;
}
BTString::BTString (
		string strBase,
		long lngStart, 
		long lngEnd, 
		long lngLength,
		string strCmdline,
		string strWildcard)
{
	setBaseString (strBase);
	setWildcard(strWildcard);
	setCmdline (strCmdline);
	setStartNum (lngStart);
	setEndNum (lngEnd);
	setNumLength (lngLength);
}

bool BTString::setBaseString (string & strBase)
{
	baseString = strBase;
	return true;
}

bool BTString::setStartNum (long &lngStart)
{
	startNum = lngStart;
	return true;
}

bool BTString::setEndNum (long &lngEnd)
{
	endNum = lngEnd;
	return true;
}

bool BTString::setNumLength (long &lngLength)
{
	numLength = lngLength;
	return true;
}

bool BTString::setCmdline (string & strCmdline)
{
	cmdline = strCmdline;
	return true;
}

bool BTString::setWildcard(string &strWildcard)
{
	wildcard = strWildcard;
	return true;
}
bool BTString::fileExec (string & filename)
{
	return true;
}

bool BTString::batchExec ()
{
	size_t	wPosStart;
	size_t	lenStr;
	string strExec = cmdline;
	wPosStart = baseString.find (wildcard);
//	cout << wPosStart << ":" << string::npos << endl;
	if (wPosStart == string::npos)
	{
		strExec = strExec + " \"" +  baseString +"\"";
		system (strExec.c_str());
		return true;
	}
	lenStr = wildcard.size ();
	for (long i = startNum; i <= endNum; i++)
	{
		string strReal = baseString;
		string strNumber = string(itoa(i,10));;
		int numSize = strNumber.size();
		if (numSize<numLength) 
			strNumber = string(numLength-numSize,'0') + strNumber;
		strReal.replace (wPosStart, lenStr, strNumber);
		strExec = cmdline +  " \"" + strReal + '\"';
		//cout << strExec << endl;
		if ( system (strExec.c_str()) !=0 ) {
			cerr << "btstring exit!" << endl;
			return false;
		}
	}
	return true;
}

string itoa (int value, int base)
{
	enum
	{
		kMaxDigits = 35
	};
	std::string buf;
	/* Pre-allocate enough space. */
	buf.reserve (kMaxDigits);	
	// check that the base if valid
	if (base < 2 || base > 16)
		return buf;
	int
		quotient = value;
	// Translating number to string with base:
	do
	{
		buf += "0123456789abcdef"[std::abs (quotient % base)];
		quotient /= base;
	}
	while (quotient);
	// Append the negative sign for base 10
	if (value < 0 && base == 10)
		buf += '-';
	std::reverse (buf.begin (), buf.end ());
	return buf;
}
