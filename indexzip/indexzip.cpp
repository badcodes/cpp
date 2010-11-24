#include <iostream>
#include <string>
using namespace std;

const int countWanted = 4;
const string strWanted[]={"cover","index","aaa","content"};
int testWanted(const string &);

int main(void)
{
	string c;
	int row=0;
	int min=1024;
	int len=0;
	string result = "";
	while (cin>>c){
		row++;
		if (row==4) {
			row=0;
			len=testWanted(c);
			if (len>0 && len<min) {
				min=len;
				result=c;
			}
		}
	}
	if (result!="") cout<<result<<endl;
	return 0;
}

int testWanted(const string & strTest)
{
	int i=0;
	for (;i<countWanted;i++){
//		cout << "tmp :" << strWanted[i]<<endl;
//		cout << "test:" << strTest << endl;

		string tmp = strWanted[i] + ".htm";
		if (strTest.size()<tmp.size())
			return -1;
		if (!strTest.compare(strTest.size()-tmp.size(),tmp.size(),tmp))
			return strTest.size();
		tmp = strWanted[i] + ".html";
		if (!strTest.compare(strTest.size()-tmp.size(),tmp.size(),tmp))
			return strTest.size();
	}
	return -1;
}


