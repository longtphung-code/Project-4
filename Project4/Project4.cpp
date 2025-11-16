// Goal is to have users inputs the weight of a object being shipped and the distance it is being shipped to calculate the shipping cost based on predefined rates.

#include <iostream>

int main()
{
	// take weight input
	std::cout << "What is the weight of the item in Kilograms?: ";
	int weight;
	std::cin >> weight;

	// take distance item needs to be shipped
	std::cout << "How far will this item be shipped?: ";
	int distance;
	std::cin >> distance;

	// determine the shipping cost based on weight and distance
	if (weight == 1 || weight == 2 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
	{
		std::cout << "There are 31 days in this month.\n";
	}
	else if (month == 4 || month == 6 || month == 9 || month == 11)
	{
		std::cout << "There are 30 days in this month.\n";
	}
	else if (month == 2)
	{
		// check for leap year.
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