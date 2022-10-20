#include <iostream>
#include <cmath>

using namespace std;

int main()	// Code starts here 
{
	int esp;
	float base, output = 1;

	cout << "Inserire la base: ";
	cin >> base;

	cout << "Inserire un esponente: ";
	cin >> esp;

	while(esp != 0) {	// Assign the result to the output variable
		output *= base;
		--esp;
}
	
	cout << output;

	return 0;
}
