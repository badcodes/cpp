/* Created by Anjuta version 1.2.4a */
/*	This file will not be overwritten */

#include <iostream>
#include "btstring.h"
#include <string>
#define app_usage " BaseString [Start=1] [End=10] [Length=1] [Cmdline=\"echo\"] [Wildcard=\"(*)\"]"

using namespace std;
int main(int argc,char * argv[])
{
	BTString bt;
	if (argc < 2) {
		cout << argv[0] << app_usage <<endl;
		return 0;
	}
	switch (argc) {
		case 2:
			bt = BTString(argv[1]);
			break;
		case 3:
			bt = BTString(argv[1],atol(argv[2]));
			break;
		case 4:
			bt = BTString(argv[1],atol(argv[2]),atol(argv[3]));
			break;
		case 5:
			bt = BTString(argv[1],atol(argv[2]),atol(argv[3]),atol(argv[4]));
			break;
		case 6:
			bt = BTString(argv[1],atol(argv[2]),atol(argv[3]),atol(argv[4]),argv[5]);
			break;			
		default:
			bt = BTString(argv[1],atol(argv[2]),atol(argv[3]),atol(argv[4]),argv[5],argv[6]);
			break;			
	}
	if (bt.batchExec()) 
		return -1;
	else
		return 0;
}
