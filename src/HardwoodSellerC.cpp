//============================================================================
// Name        : HardwoodSellerC.cpp
// Author      : Esteban Parra
// Version     : 1
// Copyright   : It's free
// Description : Main class for the Hardwood Seller
//============================================================================

#include <iostream>
#include "WoodItem.cpp"
using namespace std;

Cherry = new WoodItem("Cherry", 2.5, 5.95);
Maple = new WoodItem("Curly Maple", 1.5, 6.00);
Mahogany = new WoodItem("Genuine Mahogany", 3, 9.60);
Wenge = new WoodItem("Wenge", 5, 22.35);
Oak = new WoodItem("White Oak", 2.3, 6.70);
Sawdust = new WoodItem("Sawdust", 1, 1.5);




int main() {
	cout
			<< "This is an empty main method"
			<< endl;
	return 0;
}

/*
 * Method to read the input file
 */
void readInputFile(string inputFilePath) 
{
	ifstream file;
	
	string name;
	string address;
	string date;
	int i = 0;
	
	string* type = new string[6];
	string* amount = new string[6];

	
	if(file.is_open())
	{
		getline(file, name, ';');
		getline(file, address, ';');
		getline(file, date, '\n')
		
		while (!EOF)
		{
			getline(file, type[i], ':');
			getline(file, amount[i], ';');
		}
	}
	else
		cerr << "Error";
}

/*
 * Method to compute the deliveryTime
 */
double deliveryTime() {
	double deliveryETA = 0.0;
	return deliveryETA;
}
