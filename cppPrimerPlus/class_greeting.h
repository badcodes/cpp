//class_greeting.h
#ifndef GREETING_H_
#define GREETING_H_
class Greeting 
{
	private:
	char name[40];
	void askname(void);
	public:
	Greeting(void);
	Greeting(const char *somebody);
	~Greeting(void);
	void say(void);
	void to(const char *somebody);
};
#endif
