#include <iostream>
#include <string>
using namespace std;

int main() {
	string num_a;
	string num_b;

	cout << "Enter 3-digit number a: ";
	cin >> num_a;
	cout << endl;
	cout << "Enter 3-digit number b: ";
	cin >> num_b;

	cout << endl;
	string reversed_a;
	string reversed_b;

	for (int i = num_a.size() - 1; i > -1; i--) {
		reversed_a += num_a[i];
		reversed_b += num_b[i];
	}

	if (reversed_a > reversed_b) {
		cout << reversed_a;
	}
	else {
		cout << reversed_b;
	}

	return 0;

}