/*
primer: 6.2 r
kp: 
- not understand ret
- usage of getline
*/


#include <iostream>
using std::cin; using std::cout; using std::endl;

#include <string>
using std::string;

//#include <vector>
//using std::vector;

#include <cstddef>
using std::size_t;

// returns the index of the first occurrence of c in s
// the reference parameter occurs counts how often c occurs
string::size_type find_char(const string &s, char c, 
                           string::size_type &occurs)
{
    auto ret = s.size();   // position of the first occurrence, if any
    cout << "initial ret:" << ret << endl; 
    occurs = 0;            // set the occurrence count parameter 

    for (decltype(ret) i = 0; i != s.size(); ++i) {   // set i the same type as ret
        if (s[i] == c) {
            if (ret == s.size()) 
                ret = i;   // remember the first occurrence of c
            ++occurs;      // increment the occurrence count
         }
	}
    return ret;            // count is returned implicitly in occurs
}

int main() 
{
	string s;
	getline(cin, s);      // get a line of input
	size_t ctr = 0;
	auto index = find_char(s, 'o', ctr);    // find 'o' in s
	cout << index << " " << ctr << endl;

	return 0;
}


