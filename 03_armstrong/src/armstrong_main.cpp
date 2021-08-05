#include <iostream>
#include <string>

bool isArmstrongNumber(int number)
{
	// TODO: implement some functionality to see if this number is an armstrong number

	int temp, rem;
	int sum = 0, n = 0;

//	std::cout << "Enter positive number: ";
//	std::cin >> number;

	temp = number;

	//logic to find the number of digits in a given number
	while (temp != 0)
	{
		temp = temp / 10;
		n++;
	}

	temp = number;

	while (temp != 0)
	{
		rem = temp % 10; //storing individual digit of original number in rem
		sum = sum + pow(rem, n); //computing power of digits of original number
		temp = temp / 10;
	}

	//if condition for comparing sum with original number
	if (number == sum)
	{
//		std::cout << number << " is an Armstrong number" << std::endl;
		return true;
	}
	else
	{
//		std::cout << number << " is not an Armstrong number" << std::endl;
		return false;
	}
}

void printIsArmstrong(int number)
{
	if (isArmstrongNumber(number))
	{
		std::cout << "Armstrong" << std::endl;
	}
	else
	{
		std::cout << "NOT Armstrong" << std::endl;
	}
}

int main(int argc, char* argv[])
//int main()
{
	// What is this program expected to do?
	// - Shows whether an argument is an armstrong number.
	// (what?)
	// -	An Armstrong number is a number that is equal to the sum of cubes of its digits.
	//		For example 0, 1, 153, 370, 371 and 407 are the Armstrong numbers.
	//		Let's try to understand why 153 is an Armstrong number:
	//			1^3 + 5^3 + 3^3 = 1 + 125 + 27 = 153
	//
	// How to launch it?
	// - Execute the binary and pass a parameter to it?
	// - E.g. Open CMD in bin/Debug or bin/Release
	//		  03_armstrong.exe 1		=> Output: Armstrong
	//		  03_armstrong.exe 2		=> Output: NOT Armstrong
	//		  03_armstrong.exe 			=> Output: No program arguments found.
	//		  03_armstrong.exe ABC		=> Undefined output (do whatever).
	//		  03_armstrong.exe 153		=> Output: Armstrong
	//		  03_armstrong.exe 154		=> Output: NOT Armstrong
	//

	// Make sure there are some program arguments available.
	if (argc <= 1)
	{
		std::cout << "No program arguments found." << std::endl;
		return 1;
	}

	//int readNumber = 0;
	int number = 0;
	// Get the first argument
	//	std::string argumentAsString = argv[1];
	
	// TODO: read number / cast to integer
	try
	{
		number = std::stoi(argv[1]);
		printIsArmstrong(number);
	}
	catch (...)
	{
		std::cout << "NAN" << std::endl;
	}
	return 0;
}