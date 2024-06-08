#include <iostream>;
#include <string>;

using namespace std;

bool change(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
	return true;
}

int main() {
	int num1, num2;
	cout << "Enter the first number: ";
	cin >> num1;

	cout << "Enter the second number: ";
	cin >> num2;

	cout << "Before changing: " << num1 << " " << num2 << endl;

	change(&num1, &num2);

	cout << "After changing: " << num1 << " " << num2 << endl;

	system("pause");
	return 0;
}