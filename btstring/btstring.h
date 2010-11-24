//
// File: btstring.h
// Created by: User <Email>
// Created on: Wed Aug 16 15:22:02 2006
//

#ifndef _BTSTRING_H_
#define _BTSTRING_H_
#include <string>

using namespace std;

class BTString
{
	public:
		BTString();
		~BTString();
		BTString(
			string strBase,
			long lngStart = 1L,
			long lngEnd = 10L,
			long lngLength = 1L,
			string strCmdline = string("echo"),
			string strWildcard = string("(*)"));
		bool setWildcard(string &strWildcard);
		bool setBaseString(string &strBase);
		bool setStartNum(long &lngStart);
		bool setEndNum(long &lngEnd);
		bool setNumLength(long &lngLength);
		bool setCmdline(string &strCmdline);
		bool fileExec(string &filename);
		bool batchExec();
		//string result() const;
	
	protected:
		string baseString;
		long startNum;
		long endNum;
		long numLength;
		string cmdline;
		string wildcard;
};
string itoa (int value, int base);

#endif	//_BTSTRING_H_
