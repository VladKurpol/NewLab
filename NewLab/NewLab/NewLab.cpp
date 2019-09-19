
#include "pch.h"
#include <iostream>
#include <fstream>
#include <cmath>

void final(int number)
{
	std::ofstream file2;
	file2.open("file2.txt", std::ios_base::app);
	if (number == 0)
	{
		std::cout << "0";
		file2 << "0";
	}
	if (number == 1)
	{
		std::cout << "1";
		file2 << "1";
	}
	if (number == 2)
	{
		std::cout << "2";
		file2 << "2";
	}
	if (number == 3)
	{
		std::cout << "3";
		file2 << "3";
	}
	if (number == 4)
	{
		std::cout << "4";
		file2 << "4";
	}
	if (number == 5)
	{
		std::cout << "5";
		file2 << "5";
	}
	if (number == 6)
	{
		std::cout << "6";
		file2 << "6";
	}
	if (number == 7)
	{
		std::cout << "7";
		file2 << "7";
	}
	if (number == 8)
	{
		std::cout << "8";
		file2 << "8";
	}
	if (number == 9)
	{
		std::cout << "9";
		file2 << "9";
	}
	if (number == 10)
	{
		std::cout << "A";
		file2 << "A";
	}
	if (number == 11)
	{
		std::cout << "B";
		file2 << "B";
	}
	if (number == 12)
	{
		std::cout << "C";
		file2 << "C";
	}
	if (number == 13)
	{
		std::cout << "D";
		file2 << "D";
	}
	if (number == 14)
	{
		std::cout << "E";
		file2 << "E";
	}
	if (number == 15)
	{
		std::cout << "F";
		file2 << "F";
	}
	file2.close();
}

int main()
{
	int result1 = 0;
	std::ifstream file;
	file.open("file.txt");
	int massive[4];

	for (size_t i = 0; i <= 3; i++)
	{
		file >> massive[i];
		std::cout << massive[i] << "\n";
	}
	std::cout << "\n";
	for (size_t i = 0; i <= 3; i++)
	{
		std::cout << massive[i];
	}
	std::cout << "\n";
	file.close();

	result1 = pow(8, 3)*massive[0] + pow(8, 2)*massive[1] + pow(8, 1)*massive[2] + pow(8, 0)*massive[3];
	std::cout << "\n";
	std::cout << "RESULT" << "\n";
	std::cout << result1 << "\n";

	int number = 16;
	int incr = 1;
	while (number < result1)
	{
		number = 16;
		incr++;
		number = number * incr;
		std::cout << "Incr" << incr << "\n";
		std::cout << "Number" << number << "\n";
		if (number > result1)
		{
			incr = incr - 1;
			std::cout << "Last incr " << incr;
		}
	}

	int res1 = result1 - incr * 16;
	std::cout << "Razn " << res1 << "\n";

	std::cout << "=============================" << "\n";

	int number1 = 16;
	int incr1 = 1;
	while (number1 < incr)
	{
		number1 = 16;
		incr1++;
		number1 = number1 * incr1;
		std::cout << "Incr" << incr1 << "\n";
		std::cout << "Number" << number1 << "\n";
		if (number1 > incr)
		{
			incr1 = incr1 - 1;
			std::cout << "Last incr " << incr1;
		}
	}

	int res2 = incr - incr1 * 16;
	std::cout << "Razn " << res2 << "\n";

	final(incr1);
	final(res2);
	final(res1);

	file.close();
	return 0;
}

