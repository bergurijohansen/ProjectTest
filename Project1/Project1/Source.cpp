#include <iostream>


int main()
{
	std::cout << "=========================================================================" << std::endl;
	std::cout << "= 1  2  3  4  5  6  7  8  9  10  11  12  13  14  15  16  17  18  19  20 =" << std::endl;
	std::cout << "=========================================================================" << std::endl;

	const size_t SIZE = 10;
	int IntArray[SIZE];

	char lcd1[10] = { '1','2','3','4','5','6','7','8','9','0' };
	char lcd2[10] = { 'a','b','c','d','e','f','g','h','i','j' };

	char* lcd[2] = { lcd1, lcd2 };

	for (size_t i = 0; i < SIZE*2; i++)
	{
		std::cout << lcd[i/SIZE][i%SIZE] << std::endl;
	}



	getchar();

	return 0;
}