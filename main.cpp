#include <iostream>
#include <cmath>

using namespace std;

int main() {	// Code starts here
	float x;

	cout << "Inserire un numero: ";
	cin >> x;

	cout << "L'area del quadrato è: "<<pow(x, 2)<<"\n";
	cout << "L'area del cerchio è: "<<pow(x, 2)*3.14<<"\n";
	cout << "L'area del triangolo è: "<<sqrt(pow(x,2)-pow((x/2),2))*x/2<<"\n";
}
