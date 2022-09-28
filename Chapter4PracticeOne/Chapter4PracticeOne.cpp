// Your Name: Brian Henson
// Date: 9-23-2022
// Program Title: Best price evaluator
// Program Description: Outputs the cost per square foot of a house based on the entire price and area

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

// Named constants

int main()
{

	// Variable declaration

	int area, choice;
	double totalPrice, price;

	//Program title and description for the user

	cout << "Program Title : Best price evaluator" << endl;
	cout << "Program Description: Outputs the cost per square foot of a house based on the entire price and area" << endl << endl;

	// User input

	cout << "Which model of house will be chosen?" << endl;
	cout << "1 - Colonial" << endl;
	cout << "2 - Split-entry" << endl;
	cout << "3 - Single story" << endl;
	cout << "Enter selected number here: ";
	cin >> choice;
	cout << endl;

	// Output to the screen
	cout << setprecision(2);
	cout << fixed << showpoint;

	// Calculations

	switch (choice)
	{
	case 1:
		cout << "What is the total price of the house?" << endl;
		cin >> totalPrice;
		cout << "What is the house's area, in square feet?" << endl;
		cin >> area;
		cout << endl;

		price = totalPrice / area;

		cout << setw(15) << left << "Model" << setw(25) << right << "Price per square foot" << endl;
		cout << setw(15) << left << "Colonial" << setw(19) << right << "$" << setw (6) << right << price << endl;
		break;

	case 2:
		cout << "What is the total price of the house?" << endl;
		cin >> totalPrice;
		cout << "What is the house's area, in square feet?" << endl;
		cin >> area;
		cout << endl;

		price = totalPrice / area;

		cout << setw(15) << left << "Model" << setw(25) << right << "Price per square foot" << endl;
		cout << setw(15) << left << "Split-entry" << setw(19) << right << "$" << setw(6) << right << price << endl;
		break;

	case 3:
		cout << "What is the total price of the house?" << endl;
		cin >> totalPrice;
		cout << "What is the house's area, in square feet?" << endl;
		cin >> area;
		cout << endl;

		price = totalPrice / area;

		cout << setw(15) << left << "Model" << setw(25) << right << "Price per square foot" << endl;
		cout << setw(15) << left << "Single story" << setw(19) << right << "$" << setw(6) << right << price << endl;
		break;

	default:
		cout << "Input error; program is terminating" << endl;
	}
	return 0;
}