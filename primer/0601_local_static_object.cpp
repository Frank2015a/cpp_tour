/*  
primer: 6.1
keypoints:
- local staic�������������ڹᴩ�����������ڵ������������Ȼ���ڣ�
- �ʺ���cntͳ�ƣ� 
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


