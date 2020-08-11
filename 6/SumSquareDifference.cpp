#include <iostream>

/*

(1 + 2 + 3 + 4 + ... + 100)^2 - 1^2 + 2^2 + 3^2 + 4^2 + ... + 100^2

*/

int main(int argc, char const *argv[])
{
	int sum = 100 * (1 + 100) / 2;
	int squareOfTheSum = sum * sum;

	int sumOfTheSquares = 0;
	for (int i = 1; i != 101; ++i)
		sumOfTheSquares += i*i;

	std::cout << squareOfTheSum - sumOfTheSquares << std::endl;

	return 0;
}