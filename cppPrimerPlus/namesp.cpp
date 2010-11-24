#include <iostream>
using namespace std;
#include "namesp.h"

namespace pers
{
	void getPerson(Person & rp)
	{
		cout<<"Enter First Name:";
		cin>>rp.fname;
		cout<<"Enter Last Name:";
		cin>>rp.lname;
	}
	void showPerson(const Person & rp)
	{
		cout<<rp.lname<<", "<<rp.fname;
	}
}

namespace debts
{
	void getDebt(Debt & rd)
	{
		getPerson(rd.name);
		cout<<"Enter Debt:";
		cin>>rd.amount;
	}
	void showDebt(const Debut & rd)
	{
		showPerson(rd.name);
		cout<<": $"<<rd.amount<<endl;
	}
	double sumDebts(const Debt ar[],int n)
	{
		double total = 0;
		for (int i=0;i<n;i++)
			total += ar[i].amount;
		return total;
	}
}

