// user.cpp
/*
tour: 3.3 namespace
kp: 
- namespace中declare，外部通过 namespace::name define 
- My_code::main，域操作符的用法与调用class中的方法类似 
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

