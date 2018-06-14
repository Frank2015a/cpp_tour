/*
tour: 2.4 union
kp: 
- union similar to enumerate. but saves space;
- saves space;
*/

#include <iostream>
using namespace std;

// usage of enumerate 
enum Type {str, num};
struct Entry {
	char *name; 
	Type t;
	char *s;   // if t==str
	int i;	   // if t==num
};

void f(Entry *p)
{
	if (p->t == str)
		cout << p->s;
	else if(p->t == num)
		cout << p->i;
	else
		cout << "others"; 
}

union Value{
	char *s;
	int i;
};

struct Entry2 {
	char *name; 
	Type t;
	Value v;    // use the union
};

void f2(Entry2 *p)
{
	if (p->t == str)
		cout << p->v.s;
	else if(p->t == num)
		cout << p->v.i;
	else
		cout << "others"; 	
}

