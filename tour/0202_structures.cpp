/*  
tour: 2.2 structures
keypoints:
- usage of new and pointer;
- note the semicolon ; after struct and class definition
- pass ref to initialize : Vector& v
*/

#include <iostream>
using namespace std;

struct Vector
{
	int sz;        // number of elements
	double *elem;  // pointer to elements
};    // care for the ;

Vector v;      // define a variable v

// initialize vector
void vector_init(Vector& v, int s)
{
	// remember that new returns a pointer
	v.elem = new double[s];    // allocation an array of double
	v.sz = s;
}

double read_and_sum(int s)
	// read integer from cin and return their sum
	// s assumed to be positive
{
	Vector v;
	vector_init(v, s);     // do not need &v?
	
	cout << "input " << s << "integers " << endl;
	for (int i = 0; i < s ; i++)  // i<s vs i!=s, which is better?
	{
		cin >> v.elem[i];   // error: v[i], elem is the array part of v
	}
	
	double sum = 0;
	for ( int i = 0; i < s ; i++)  // range type for loop not ok?
		sum += v.elem[i];
	
	return sum;
}

int main()
{
	int s = 3;
	read_and_sum(s);
}

