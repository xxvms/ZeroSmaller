// ZeroSmaller.cpp : Defines the entry point for the console application.
//

#include <iostream>

void zeroSmaller(int& numberOne_, int& numberTwo_);

int main()
{
	std::cout << "Please provide two integer numbers: " << std::endl;
	std::cout << "Please type 1st number: ";
	int numberOne;
	std::cin >> numberOne;
	std::cout << "Please type 2nd number: ";
	int numberTwo;
	std::cin >> numberTwo;

	zeroSmaller(numberOne, numberTwo);

	std::cout << "NumberOne: " << numberOne << std::endl;
	std::cout << "NumberTwo: " << numberTwo << std::endl;



	system("pause");
    return 0;
}
void zeroSmaller(int& numberOne_, int& numberTwo_)
{
	if (numberOne_ < numberTwo_)
	{
		numberOne_ = 0;
	}
	else
	{
		numberTwo_ = 0;
	}

}
