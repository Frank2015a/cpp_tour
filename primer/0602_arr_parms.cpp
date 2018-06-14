/*
primer: 6.2 array parameters
kp: 
- initialization of string;
- 3 ways to output all elements from an array
- array is really similar to the usage of pointer
*/

#include <iostream>
#include <cstring>
using std::cout;
using std::endl;
using std::string;

// declare functions
void print(const int*);      
void print(const int[]);
void print(const int[10]);

// define functions

// test if null
void print(const char *cp)
{
	if (cp)            // not nullptr
		while(*cp)     // not point to null char
			cout << *cp++ << "\n";
}

// move point, till end
void print(const int *beg, const int *end)
{
	while (beg != end)     // if not move to end
		cout << *beg++ << endl;   // not cout the end
}
// but how to input the end ptr?

// count length, till sz, loop counting use size_t
void print(const int ia[], size_t sz)
{
	for (size_t i = 0; i < sz; i++)
		cout << ia[i] << endl;
}

int main()
{
	//char *c = {"abcdac"};
	cout << "print(const char *cp)" << endl;
	string s = "abcadkfjha";   // string s("foo");  
	print(&s[1]);              // input the address of first element in s, print from index 1 element
	
	cout << "print(int *beg, int *end)" << endl;
	int ivec[] = {0, 1, 2, 3, 4, 5};
	print(&ivec[0], &ivec[5]);
	
	cout << "print(const int ia[], size_t sz))" << endl;
	print(ivec, 6);
	return 0;
}

