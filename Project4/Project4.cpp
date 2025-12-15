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

	double rate;

	if (weight > 0 && weight <= 2)
		rate = 1.10;
	else if (weight > 2 && weight <= 6)
		rate = 2.20;
	else if (weight > 6 && weight <= 10)
		rate = 3.70;
	else if (weight > 10 && weight <= 20)
		rate = 4.80;
	else
	{
		std::cout << "Invalid weight input." << std::endl;
		return 0;
	}
	int segments = (distance + 499) / 500; // round up to the nearest 500 mile segment
	double totalcost = rate * segments;
	std::cout << "The total shipping cost is: $" << totalcost << std::endl;
	return 0;
}