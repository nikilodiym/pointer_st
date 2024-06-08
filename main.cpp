#include <iostream>;
#include <string>;

using namespace std;

bool fS(int* num, int* sign) {
	if (*num > 0) {
		*sign = 1;
		return true;
	}
	else if (*num < 0) {
		*sign = -1;
		return true;
	}
	else {
		*sign = 0;
		return false;
	}
}

int main() {
	int number, sign;
	cout << "Enter a number: ";
	cin >> number;

	fS(&number, &sign);

	if (sign == 0) {
		cout << "The number is zero." << endl;
	}
	else if (sign > 0) {
		cout << "The number is positive." << endl;
	}
	else {
		cout << "The number is negative." << endl;
	}

	system("pause");
	return 0;
}