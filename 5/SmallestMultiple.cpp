#include <iostream>

/*

1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20

-> shortened: 11, 12, 13, 14, 15, 16, 17, 18, 19, 20

*/

int main(int argc, char const *argv[])
{
	uint64_t biggestMultiple = 11*12*13*14*15*16*17*18*19*20;

	for (uint64_t i = biggestMultiple; i != 0; --i)
	{
		bool divisible = true;
		for (int j = 11; j != 21; ++j)
		{
			if (i % j != 0)
			{
				divisible = false;
				break;
			}

		}

		if (divisible)
		{
			std::cout << i << std::endl;
			break;
		}
	}

	return 0;
}