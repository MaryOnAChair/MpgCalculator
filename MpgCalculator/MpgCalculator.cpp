///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////// This program gets user input of a cars gas usage in liters and distance traveled in miles. ////////////////////////////////////////////////////////
/////// The program then repeats this with another car, converts liters to gallons and compares the MPG of the 2 until the user wishes to stop. ///////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <iostream>
#include <cmath>
using namespace std;
const double LITER = .264179; //global constant

//gets number of liters from user input
double getLiters() {
	double liters;
	std::cout << "Enter Liters of gas used \n";
	std::cin >> liters;
	return liters;
}

//gets number of miles from user input
double getMiles() {
	double miles;
	std::cout << "Enter miles traveled \n";
	std::cin >> miles;
	return miles;
}

//converts liters to gallons and calculates MPG w/ gallons/miles
double getMPG(double liters, double miles) {
	liters = liters * LITER;
	return (miles / liters);





}

//determines which MPG is greater and returns a statement saying so
string calcBestMPG(double car1MPG, double car2MPG) {
	string result;
	if (car1MPG > car2MPG) {
		result = "Car 1 has best MPG!";
	}
	else if (car2MPG > car1MPG) {
		result = "Car 2 has best MPG!";
	}
	return result;
}

int main()
{
	char x = 'y'; //loop control
	double car1Liters, car2Liters, car1Miles, car2Miles, car1MPG, car2MPG; //variables
	while (x == 'y' || x == 'Y') //while the user says y/Y to continue calculations loops
	{
		//gets info about car 1
		std::cout << "Car 1 \n ";
		car1Liters = getLiters();					//gets amount of gas
		car1Miles = getMiles();						//gets number of miles
		car1MPG = getMPG(car1Liters, car1Miles);	//calculates MPG

		//gets info about car 2
		cout << "Car 2 \n ";
		car2Liters = getLiters();					//gets amount of gas
		car2Miles = getMiles();						//gets number of miles
		car2MPG = getMPG(car2Liters, car2Miles);	//calculates MPG


		//outputs results
		std::cout << " car 1 MPG ";
		printf("%.2f", car1MPG); //displays 2 decimal places
		std::cout << "\n car 2 MPG ";
		printf("%.2f", car2MPG);
		std::cout << "\n ";

		std::cout << "would you like to compare more cars? \n enter Y to continue or N to stop \n "; //continue?
		std::cin >> x;

	}

}
