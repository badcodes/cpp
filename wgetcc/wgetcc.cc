#include <iostream>
#include <string>
using namespace std;
#define app_info "Use wget to download photo albums from \"celebscentral.net\""
#define app_version "0.1"
#define app_copyright "xrLiN,MYPLACE 2006-2007"
#define app_usage "wgetcc url"
#define wgetcmd "wget -nd -nH -nv -U \"Mozilla/5.0\" -r -l 4 "
#define QUOTE_AROUND(x) ("\"" + (x) + "\"") 
int main (int argc,char *argv[])
{
	if (argc<2) {
		cout << argv[0] << ' ' << app_version << " copyright " << app_copyright << endl;
		cout << "Info:  " << app_info << endl;
		cout << "Usage: " << app_usage << endl;
		return 0;
	}
	
	//Clear screen
	//system ("clear");
	cout << endl;	

	string url(argv[1]);

	cout << "########Url:[" << url << ']' << endl;

	//Get domain from url
	int i = url.find("://");
	if (i<0) 
		i=0;
	else
		i += 3;
	int j = url.find("/",i)-1;
	if (j<0) j=url.length()-1;
	string domain = url.substr(i,j-i+1);
	cout << "#####Domain:[" << domain << ']' << endl;

	//Get filename from domain
	string filename = domain.substr(0,5) + string("*.jpg");
	cout << "###Filename:[" << filename << ']' << endl;

	//Add quote around string
	url = QUOTE_AROUND(url);
	domain = QUOTE_AROUND(domain);
	filename = QUOTE_AROUND(filename) + ",\"*1024.jpg\"";
	
	//Make cmdline to be execute
	string cmdExec = string(wgetcmd) + " -D " + domain + " -A " + filename + " - " + url ;
	cout << "###Execute [" << cmdExec << "]" << endl;;

	//Call it 
	return system (cmdExec.c_str());
}
