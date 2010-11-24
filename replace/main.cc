
#include <iostream>
#include <string>
#include "../strhandle/strhandle.h"
#define app_name "replace"
#define app_version "0.1"
#define app_copyright "xrLin MYPLACE,2006-2007"
#define app_info "use to replace text"
#define app_usage " arg1 arg2\n\targ1 - word to find\n\targ2 - word to replace"
using namespace std;

int getridof(char *,char *);
int main (int argc,char **argv)
{
	switch (argc){
		case 1:
			cout << app_name << " " << app_version << "-" << app_info << endl;
			cout << "Copyright by " << app_copyright << endl;
			cout << "Usage:" << argv[0] << app_usage << endl;
			return 0;
		case 3:
			return getridof(argv[1],argv[2]);
		default:
			cout << "Usage:" << argv[0] << app_usage << endl;
			return 0;
		}

}

int getridof (char * strFind,char * strReplace)
{
	string strText;
	char c;
	while ((c=cin.get())!=EOF) {
		strText += c;}
	StrHandle handle(strText);
	cout <<  handle.replace(string(strFind),string(strReplace));
	return 0;
}
