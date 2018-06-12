// user.cpp
/*
tour: 2.4 sperate compilation
kp: 
- include the head file, don't care the cpp implmentation;
- compilation failed???
*/
#include "Vector.h"     // get the interface
#include <cmath>        // note the diff "" vs <>

using namespace std;	// make std member visible

double sqrt_num(Vector &v)
{
	double sum = 0;
	for (int i = 0; i != v.size(); i++) 
		sum += sqrt(v[i]);
	
	return sum;
}

int main()
{
	return 0;
}


