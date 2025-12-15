// Goal is have users enter a month 1-12, 2 enter a year, and 
// then receive an input how many days are in the month.

#include <iostream>


while True:
	choice = input("""Geometry Calculator
		1. Calculate the Area of a Circle
		2. Calculate the Area of a Rectangle
		3. Calculate the Area of a Triangle
		4. Quit
		Enter your choice(1 - 4): """)

		if choice == "1": 
			radius = float(input("Enter the radius of the circle: "))
			area - 3.1459 * radius ** 2
			print("Area:", area)

		elif choice == "2":
			length = float(input("Enter the length of the rectangle: "))
			width = float(input("Enter the width of the rectangle: "))
			area = length * width
			print("Area:", area)

		elif choice == "3":
			base = float(input("Enter the base of the triangle: "))
			height = float(input("Enter the height of the triangle: "))
			area = 0.5 * base * height
			print("Area:", area)
		elif choice == "4":
			print("Exiting the program.")
			break
		else:
	print("Invalid choice. Please select a valid option (1-4).")
