/*
primer: 2.4 const
kp: 
- ri can change, but ci not change
*/
#include <iostream>
using namespace std;

int main()
{
	
	int i = 12;
	int &ri = i;
	const int ci = i;
	
	cout << "ri = " << ri << endl;
	cout << "ci = " << ci << endl;

	ri = 13;
	cout << "ri = " << ri << endl;
	cout << "ci = " << ci << endl;
}
