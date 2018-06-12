// Vector.cpp
/*
tour: 2.4 sperate compilation
kp: 
- include the h file, donot need to include what existed in h file;
- provide implementation of interface;
- put class:: before the method name;
- be careful about the return type of method;
*/
#include "Vector.h"     // get the interface

Vector::Vector(int s)
	: elem{new double[s]}, sz{s}   // initialize member
{
}

double& Vector::operator[] (int i)  // why &
{
	return elem[i];
}

int Vector::size() 
{
	return sz;
}

