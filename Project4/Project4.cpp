// The code is intended to calculate the area of different geometric shapes based on user input.

#include <iostream>
#include <string>

//Print the lines for chosing the shape and getting the input.

int main()
{
	while (true)
	{
		std::cout << "Geometry Calculator\n";
		std::cout << "1. Calculate the Area of a Circle\n";
		std::cout << "2. Calculate the Area of a Rectangle\n";
		std::cout << "3. Calculate the Area of a Triangle\n";
		std::cout << "4. Quit\n";
	

		std::cout << "Enter your choice (1-4): ";
		std::string choice;
		std::cin >> choice;
		
		//using if else statements to determine which shape the user wants to calculate the area for.


		if (choice == "1")          //circle area calculation
		{
			double radius;
			std::cout << "Enter the radius of the circle: ";
			std::cin >> radius;

			double area = 3.14159 * radius * radius;
			std::cout << "The area of the circle is: " << area << "\n\n";
		}
		else if (choice == "2")      //rectangle area calculation
		{
			double length, width;
			std::cout << "Enter the length: ";
			std::cin >> length;
			std::cout << "Enter the width: ";
			std::cin >> width;

			double area = length * width;
			std::cout << "area of the Rectangle is " << area << "\n\n";
		}
		else if (choice == "3")         //triangle area calculation
		{
			double base, height;
			std::cout << "Enter the base: ";
			std::cin >> base;
			std::cout << "Enter the height: ";
			std::cin >> height;
			double area = 0.5 * base * height;
			std::cout << "The area of the triangle is: " << area << "\n\n";
		}
		else if (choice == "4")             //exit the program
		{
			std::cout << "Exiting the program. Goodbye!\n";
			break;
		}
		else
		{
			std::cout << "Invalid choice. Please try again.\n\n";
		}
	}

	return 0;

}

