#include <iostream>;
#include <string>;

using namespace std;

bool add(int* a, int* b, int* result) {
	*result = *a + *b;
	return true;
}

bool subtract(int* a, int* b, int* result) {
	*result = *a - *b;
	return true;
}

bool multiply(int* a, int* b, int* result) {
	*result = *a * *b;
	return true;
}

bool divide(int* a, int* b, int* result) {
	if (*b == 0) {
		return false;
	}
	*result = *a / *b;
	return true;
}

int main() {
	int num1, num2, result, operation;
	cout << "Enter first number: ";
	cin >> num1;

	cout << "Enter second number: ";
	cin >> num2;

	cout << "------Choose operation------" << endl;
	cout << "-- 1 - add(+) --" << endl;
	cout << "-- 2 - subtract(-) --" << endl;
	cout << "-- 3 - multiply(*) --" << endl;
	cout << "-- 4 - divide(/) --" << endl;

	cout << "Enter operation: ";
	cin >> operation;

	bool success = false;

	switch (operation) {
		case 1:
			success = add(&num1, &num2, &result);
			break;
		case 2:
			success = subtract(&num1, &num2, &result);
			break;
		case 3:
			success = multiply(&num1, &num2, &result);
			break;
		case 4:
			success = divide(&num1, &num2, &result);
			break;
		default:
			cout << "Invalid operation!";
			break;
	}

	cout << "Result: " << result << endl;


	system("pause");
	return 0;
}