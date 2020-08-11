#include <iostream>

bool isPrime(int n)
{
	int divider = 2;
	while (n % divider != 0) divider++;

	if (divider == n) return true;
	return false;
}

int main(int argc, char const *argv[])
{
	int counter = 0;
	int i = 1;
	while (counter < 10001)
	{
		++i;
		if (isPrime(i))
			counter++;

	}
	std::cout << i << std::endl;

	return 0;
}