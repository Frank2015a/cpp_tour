/*  
primer: 6.1
keypoints:
- local staic变量的生命周期贯穿整个程序，所在的语句块结束后依然存在；
- 适合做cnt统计； 
*/

#include <iostream>
using namespace std;

size_t static_count_call()
{
	static size_t ctr = 0;
	return ++ctr;
}

size_t count_call()
{
	size_t ctr = 0;
	return ++ctr;
}

int main()
{
	for (size_t i = 0; i != 10; i++)
	{
		cout << "non static:";
		cout << count_call() << endl;
	}
	
	for (size_t i = 0; i != 10; i++)
	{
		cout << "static:";
		cout << static_count_call() << endl;		
	}
	
	return 0;
}


