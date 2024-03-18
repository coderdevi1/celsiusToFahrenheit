#include <iostream>
using namespace std;
float celsiusToFahrenheit(float day);
 
int main() {
	float day;
	float allTemps[7];
	for (int x = 0; x < 7; x++)
	{
		cout << "Please enter temperatures for each day in celcius.\n";
		cin >> day;
		allTemps[x] = celsiusToFahrenheit(day);
	}

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
float celsiusToFahrenheit(float day) {
	/*float day;*/
	float fahrenheit;
	float allTemps[7];
	fahrenheit = day * 9 / 5 + 32;
	return fahrenheit;
}