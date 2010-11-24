#include "mylink.h"

CLink::CLink()
{
	head = new ITEMLINK;
	head->next=NULL;
	count = 0;
}

bool CLink::isFull(void)
{
	return (count >= MAXITEM);
}
bool CLink::isEmpty(void)
{
	return (count <= 0);
}
bool addItem(ITEM &)
{
	if (isFull) return false;
	ITEMLINK *nextItem = new ITEMLINK;
	
}
