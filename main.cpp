#include <iostream>
#include <cmath>
using namespace std;


void calculate()
{
	float Weight;
	float DiskArea;
	float EfficiencyFactor;
	float HorsePower = 0;
	string answer;

	cout << "Enter total weight in Pounds: \n";
	cin >> Weight;

	cout << "Enter total disk area in square feet: \n";
	cin >> DiskArea;

	cout << "Enter the efficiency factor (Less than 1, typically 0.65):  \n";
	cin >> EfficiencyFactor;
	
	// Calculation goes here
	float Density = 0.002737;
	float WeightCubed = 0;
	float D1 = 0;
	float D2 = 0;
	float D3 = 0;
	float D4 = 0;

	WeightCubed = Weight * Weight * Weight;
	D1 = 2 * Density * DiskArea;
	D2 = WeightCubed / D1;
	D3 = sqrt(D2);
	D4 = D3 / EfficiencyFactor;
	HorsePower = D4 / 550;

	//calculation

	cout << "Amount of Horsepower to hover: ";
	cout << HorsePower;
	cout << "\n";

	cout << "Calculate Again? y / n \n";
	std::cin >> answer;
	if (answer == "y")
	{
		calculate();
	}
	else
	{
    // program closes
	}
}

int main()
{
	calculate();
	return 0;
}
