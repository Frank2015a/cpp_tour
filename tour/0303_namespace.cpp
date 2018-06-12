// user.cpp
/*
tour: 3.3 namespace
kp: 
- namespace��declare���ⲿͨ�� namespace::name define 
- My_code::main������������÷������class�еķ������� 
*/

namespace My_code{
	class complex{
		// ...
	};
	
	complex sqrt(complex)
	{
		// ...
	}
	
	int main();
}

int My_code::main()
{
	complex z {1, 2};
	auto z2 = sqrt(z);
	std::cout << '{' << z2.real() << ',' << z2.imag() << '}\n';
	// ...
}

int main()
{
	return My_code::main();
}

