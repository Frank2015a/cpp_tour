/*
primer: 7.1
kp: 
- friend member function, defined outside the class
- constructor
*/
//  declare member and function in Sales_data, interface

#include <iostream>
#include <string>

class Sales_data{
// why use friend?

// declare add, print, read
friend Sales_data add(const Sales_data&, const Sales_data&)
friend std::ostream &print(std::ostream&, const Sales_data&)
friend std::istream &read(std::istream&, const Sales_data&)

public:
	// constructor
	Sales_data() = default;                  // ? what is the default
	Sales_data(const std::string &s) : bookNo(s) { 	}
	Sales_data(const std::string &s, unsigned n, double p):
		bookNo(s), units_sold(n), revenue(n*p) { }
	Sales_data(std::istream &);
	
	// operation on Sales_data object
	std::string isbn() const { return bookNo; }       // what is the usage of const here
	Sales_data& combine(const Sales_data&);
	double avg_price() const;
private:
	std::string bookNo;
	unsigned units_sold = 0;  // initialize
	double revenue = 0.0;
};

// nonmember Sales_data interface functions
Sales_data add(const Sales_data&, const Sales_data&);  // not belong to the class, dont need the ::
std::ostream &print(std::ostream&, const Sales_data&);
std::istream &read(std::istream&, const Sales_data&);

