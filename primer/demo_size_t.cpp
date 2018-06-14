/*
kp:
- size_t is the unsigned integer type of the result of the sizeof operator
- use for array indexing and loop counting
- string and vecotor are containers, 
- usage of new and delete
*/

#include <cstddef>    // size_t
#include <iostream>   // cout
using std::size_t;
using std::cout;

int main()
{
    const size_t N = 10;
    int* a = new int[N];   // get int array pointer
 
    for (size_t n = 0; n < N; ++n)   // loop counting
        a[n] = n;                    // array indexing
    for (size_t n = N; n-- > 0;) // Reverse cycles are tricky for unsigned types.
        cout << a[n] << " ";
 
    delete[] a;          // new + delete
}
