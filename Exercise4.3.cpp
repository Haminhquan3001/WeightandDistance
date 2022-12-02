#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	double weight;
	double distance, charge;

	cout << "Weight of the package in kilograms (max 20Kg): ";
	cin >> weight;
	if (weight == 0) {
		cout << "Weight must be greater than zero." << endl;
	}
	else {
		cout << "Distance the package is to be shipped (min 10 Mi, Max 3000 Mi):";
		cin >> distance;
		if ((distance >= 10) && (distance <= 3000)) {
			if (weight <= 2) {
				charge = (distance / 200) * 1.10;
				cout << fixed << setprecision(2);
				cout << "The shipping charge is $" << charge;
			}
			if ((weight > 2) && (weight <= 6)) {
				charge = (distance / 200) * 2.20;
				cout << fixed << setprecision(2);
				cout << "The shipping charge is $" << charge;
			}
			if ((weight > 6 && weight <= 10)) {
				charge = (distance / 200) * 3.70;
				cout << fixed << setprecision(2);
				cout << "The shipping charge is $" << charge;
			}
			if ((weight > 10) && (weight <= 20)) {
				charge = (distance / 200) * 4.80;
				cout << fixed << setprecision(2);
				cout << "The shipping charge is $" << charge;
			}
		}
		else {
				cout << "We do not ship less than 10 miles or more than 3000 miles" << endl;
			}
		}

	return 0;
}