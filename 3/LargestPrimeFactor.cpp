#include <iostream>

void factoriseer(uint64_t n)
{
	int deler = 2;
	while (n % deler != 0) deler++;

	int k = 0;
	while(n % deler == 0)
	{
		n /= deler;
		k++;
	}
	if (k > 1)
		std::cout << deler << "^" << k;
	else
		std::cout << deler;

	if (n > 1)
	{
		std::cout << " * ";
		factoriseer(n);
	}
	else
		std::cout << "\n";
}

int main(int argc, char const *argv[])
{
	uint64_t x = 600851475143; // 600,851,475,143
	
	factoriseer(x);
	return 0;
}