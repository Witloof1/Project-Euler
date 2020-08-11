#include <iostream>
#include <sstream>
#include <algorithm>

int main(int argc, char const *argv[])
{
	// largest => begin with 999 * 999
	// reverse string
	// string compare

	int biggest = 0;

	for (int i = 999; i != 99; --i)
	{
		for (int j = 999; j != 99; --j)
		{
			int nNumber =  i * j;
			
			std::stringstream ss;
			std::string sNumber; std::string sReversed;
			ss << nNumber;
			ss >> sNumber;
			sReversed = sNumber;
			reverse(sReversed.begin(), sReversed.end());

			if (sNumber == sReversed)
			{
				if (biggest < nNumber)
					biggest = nNumber;
			}
		}
	}
	std::cout << biggest << "\n";
}