#include <iostream>
using namespace std;


int main() {
	float mon, tue, wed, thu, fri, sat, sun;
	float fahrenheit;
	float allTemps[7];
	cout << "Please enter temperatures for each day in celcius.\n";
		cin >> mon >> tue >> wed >> thu >> fri >> sat >> sun;
	fahrenheit = mon * 9 / 5 + 32;
	allTemps[0] = fahrenheit;
	fahrenheit = tue * 9 / 5 + 32;
	allTemps[1] = fahrenheit;
	fahrenheit = wed * 9 / 5 + 32;
	allTemps[2] = fahrenheit;
	fahrenheit = thu * 9 / 5 + 32;
	allTemps[3] = fahrenheit;
	fahrenheit = fri * 9 / 5 + 32;
	allTemps[4] = fahrenheit;
	fahrenheit = sat * 9 / 5 + 32;
	allTemps[5] = fahrenheit;
	fahrenheit = sun * 9 / 5 + 32;
	allTemps[6] = fahrenheit;
	// Print out temperatures in fahrenheit
	cout << "Temperatures for the week in fahrenheit: \n";
		cout << "Mon: " << allTemps[0] << endl;
	cout << "Tues: " << allTemps[1] << endl;
	cout << "Wed: " << allTemps[2] << endl;
	cout << "Thur: " << allTemps[3] << endl;
	cout << "Fri: " << allTemps[4] << endl;
	cout << "Sat: " << allTemps[5] << endl;
	cout << "Sun: " << allTemps[6] << endl;
	return 0;
}