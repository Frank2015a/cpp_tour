/*
tour: 2.5 enum
kp: 
- plain enum vs. class enum
- use :: to get member from enum
- overload ++ and <<, note definition color++ != ++color
- class specifies enum strong typed and member scoped
- enum makes code more readable and less error prone
*/

#include <iostream>
using namespace std;

// class enum, strong typed
enum class Color {red, green, blue};
enum class Traffic_lights {green, yellow, red};

Color col = Color::red;
Traffic_lights light = Traffic_lights::red;  // Color::red != Traffic_light::red

Color& operator++ (Color &t)
	// prefix increment:++
{
	switch (t){
		case Color::red:   return t = Color::green;
		case Color::green:   return t = Color::blue;
		case Color::blue:   return t = Color::red;		
	}
}

Color& operator<< (ostream &mycout, Color &t)
	// overload << 
{
	switch (t){
		case Color::red:   mycout << "red\n";
		case Color::green:   mycout << "green\n";
		case Color::blue:   mycout << "blue\n";		
	}
}

void change_color()
{
	Color mycolor = Color::red;
	for (int i = 1; i != 3; i++)
	{
		++mycolor;         // change color by ++ operator
		cout << mycolor;
	}
}

// plain enum

enum Color2 { red, green, blue};
int col = green;     // plain enum can convert to int, strong typed can't convert

int main()
{
	change_color();
}



