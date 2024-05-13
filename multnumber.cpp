#include <iostream>


void MultNum(int num)
{
	for (int i = 1; i <= num; ++i)
	{
		std::cout << i;
		for (int j = 1; j <= num; ++j)
		{
			std::cout << "\t" << i * j;
		}
		std::cout << std::endl;
	}
}

int main()
{
	int num;
	std::cin >> num;
	MultNum(num);
	return 0;
}


