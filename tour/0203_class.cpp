/*
tour: 2.3 class
kp: operator[](int i) {return elem[i]
- initializer list:
*/

#include <iostream>
using namespace std;

class Vector{
public:
	Vector(int s): elem{new double[s]}, sz{s} {}   //
	double& operator[](int i) {return elem[i];
	}
	int size() { return sz;
	}
private:
	double *elem;
	int sz;
};






