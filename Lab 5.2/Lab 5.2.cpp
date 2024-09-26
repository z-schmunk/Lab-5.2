#include <iostream>

using namespace std;

int main() {

	int num, sumEven = 0, sumOdd = 0, larVal = 0, smalVal = 99999;

	for (int i = 0; i <= 99999; i++) {
	}
	
	int i = 0;
	while (true) {
		cout << "Enter a number  (Q to exit): \n";
		cin >> num;

		if (cin.fail()) {

			cout << "You finished entering numbers.\n";

			break;
		}
		
		if (num % 2 != 0) {
			
			sumOdd++;
		}
	
		if (num % 2 == 0) {
			
			sumEven++;
		}

		if (num > larVal) {

			larVal = num;
		}
		
		if (num < smalVal) {

			smalVal = num;
		}
	}
	
	cout << "There are " << sumOdd << " odd numbers.\n";

	cout << "There are " << sumEven << " even numbers.\n";
	
	cout << "The largest value is: " << larVal << endl;

	cout << "The smallest value is: " << smalVal << endl;
}