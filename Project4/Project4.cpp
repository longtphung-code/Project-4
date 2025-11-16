// Goal is have users enter a month 1-12, 2 enter a year, and 
// then receive an input how many days are in the month.

#include <iostream>

int main()
{
	std::cout << "What is the month? (1-12): ";
	int month;
	std::cin >> month;

	// take year input
	std::cout << "What is the year?: ";
	int year;
	std::cin >> year;

	// determine number of days in month
	if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
	{
		std::cout << "There are 31 days in this month.\n";
	}
	else if (month == 4 || month == 6 || month == 9 || month == 11)
	{
		std::cout << "There are 30 days in this month.\n";
	}
	else if (month == 2)
	{
		// check for leap year
		if ((static_cast<int>(year) % 4 == 0 && static_cast<int>(year) % 100 != 0) || (static_cast<int>(year) % 400 == 0))
		{
			std::cout << "There are 29 days in this month.\n";
		}
		else
		{
			std::cout << "There are 28 days in this month.\n";
		}
	}
	else
	{
		std::cout << "Invalid month input.\n";
	}
}