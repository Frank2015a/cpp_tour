// Vector.h
/*
tour: 2.4 sperate compilation
kp: 
- h file just contain the interface;
*/

#include <iostream>
using namespace std;

class Vector{
public:
	Vector(int s);   // just declaration
	double& operator[](int i);
	int size() ;
private:
	double *elem;
	int sz;
};

