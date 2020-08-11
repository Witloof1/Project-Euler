#include <iostream>
#include <math.h>

/*

1, 1, [2], 3, 5, [8], 13, 21, [34], 55, 89, [144], 233, 377, [610], 987, 1597, [2584], ...

odd (1) + odd (1) = even (2)
odd (1) + even (2) = odd (3)
even (2) + odd (3) = odd (5)
odd (3) + odd (5) = even (8)
...

=> every third element will be even, whilst all the other elements will be odd

*/

int main(int argc, char const *argv[])
{

	auto ClosedFormFibonacci = [](int n)
	{
		return (pow(1 + sqrt(5), n) - pow(1 - sqrt(5), n)) / (pow(2, n) * sqrt(5));
	};

	int sum = 0; int fibo = 0; int i = 0;
	while (fibo < 4000000)
	{
		sum += fibo;
		fibo = ClosedFormFibonacci(i);
		i+=3;
	}
	
	std::cout << sum << std::endl;
	return 0;
}