//mylink.h
//
typedef long ITEM;
struct ITEMLINK {
	ITEM data;
	ITEMLINK *next;
};
class CLink {
	private:
		enum {MAXITEM=100};
		ITEMLINK *head;
		int count;		
	public:
		CLink();
		bool addItem(ITEM &);
		bool isFull(void);
		bool isEmpty(void);
		void visit(void (*pf) (ITEM &));
}

