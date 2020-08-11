#include <iostream>

/*

1, 1, [2], 3, 5, [8], 13, 21, [34], 55, 89, [144], 233, 377, [610], 987, 1597, [2584], ...

odd (1) + odd (1) = even (2)
odd (1) + even (2) = odd (3)
even (2) + odd (3) = odd (5)
odd (3) + odd (5) = even (8)
...

=> every third element will be even, whilst all the other elements will be odd

The even number form the following sequence: 2, 8, 34, 144, 610, 2584, ...
They have the following recursice relation: f(n) = 4*f(n-1) + f(n-2)

*/

int EvenFibo(int n)
{
	if (n == 0) return 0;
	if (n == 1) return 2;
	return 4*EvenFibo(n-1) + EvenFibo(n-2);
}

int main(int argc, char const *argv[])
{
	int sum = 0; int n = 1;
	while (sum < 4000000)
	{
		sum += EvenFibo(n);
		n++;
	}
	std::cout << sum << std::endl;
	return 0;
}