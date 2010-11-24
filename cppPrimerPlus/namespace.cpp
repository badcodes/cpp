#include <iostream>
using namespace std;
#include "namesp.h"

void other(void);
void another(void);

int main(void)
{
	using debts::Debt;
	using debts::showDebt;
	Debt gold = {
		{"Benny","Goatsniff"},120.0
	};
	showDebt(gold);
	other();
	another();
}

void other(void)
{
	using namespace debts;
	Person dg = {"Doodles","Glister"};
	showPerson(dg);
	cout<<endl;
	Debt zippy[3];
	int i;
	for (i=0;i<3;i++)
		getDebt(zippy[i]);
	for (i=0;i<3;i++)
		showDebt(zippy[i]);
	cout << "Total debts:$"<< sumDebts(zippy,3) << endl;
	return;
}

void another(void)
{
	using pers::Person;

	Person collector={"Milo","RightShift"};
	pers::showPerson(collector);
	cout << endl;
}

