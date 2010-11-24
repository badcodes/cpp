#include <iostream>
using namespace std;

void writeline(int n);
void writeline(const char *line);
void writeline(char c);

int main(void)
{
	int n=12;
	char *line="A line";
	char c='C';
	writeline(n);
	writeline(line);
	writeline(c);
	writeline(112);
	writeline("Another line");
	writeline('c');
	return 0;
}

void writeline(int n)
{
	cout<<n<<endl;
}
void writeline(const char* line)
{
	cout<<line<<endl;
}
void writeline(char c)
{
	cout<<c<<endl;
}
