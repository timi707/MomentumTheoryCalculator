//made by Timi707 2024

#include <iostream>
#include <cmath>
#include <limits>
using namespace std;

void calculate(const string& calcmessage);
void MainMenu(const string& message1);


void MainMenu(const string& message)
{
	int selection;
	system("cls");
	cout << message;
	cout << "\n";
	cout << "\n";
	cout << "Choose calculator: \n";
	cout << "[1]: Power required to hover \n";
	cout << "[2]: Something \n";
	cout << "[3]: Something \n";
	cout << "[4]: Something \n";
	cout << "[5]: Exit \n";
	cin >> selection;

	if (cin.fail()) {
		// Input was not a float
		cin.clear();  
		cin.ignore(numeric_limits<streamsize>::max(), '\n');  
		MainMenu("Invalid selection");  // Retry input
		return;
	}


	switch (selection)
	{
	case 1:
		calculate("Power required to hover");
		break;
	case 2:
		break;
	case 3:
		break;
	case 4:
		break;
	case 5:
		break;
	default:
		cout << "Invalid selection \n";
		cout << "\n";
		MainMenu("Invalid selection");
		break;
	}
}

void calculate(const string& calcmessage)
{
	float Weight;
	float DiskArea;
	float EfficiencyFactor;
	float HorsePower = 0;
	string answer;

	system("cls");
	cout << calcmessage;
	cout << "\n";
	cout << "\n";
	cout << "Enter total weight in Pounds: \n";
	cin >> Weight;

	if (cin.fail()) {
		// Input was not a float
		cin.clear();  
		cin.ignore(numeric_limits<streamsize>::max(), '\n');  
		calculate("Invalid entry");
		return;
	}

	cout << "Enter total disk area in square feet: \n";
	cin >> DiskArea;

	if (cin.fail()) {
		// Input was not a float
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		calculate("Invalid entry");
		return;
	}

	cout << "Enter the efficiency factor (Less than 1, typically 0.65):  \n";
	cin >> EfficiencyFactor;

	if (cin.fail()) {
		// Input was not a float
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		calculate("Invalid entry");
		return;
	}
	
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
		calculate("Power required to hover");
	}
	else
	{
		MainMenu("Aero Calc made by Timi707");
	}
}

int main()
{
	MainMenu("Aero Calc made by Timi707");
	return 0;
}
