#ifndef _StrHandle_INC_
#define _StrHandle_INC_
using namespace std;
class StrHandle {
	protected:
		string backup;
	public:
		StrHandle(const string &);
		~StrHandle();
		string replace(const string&,const string&);
};
#endif
