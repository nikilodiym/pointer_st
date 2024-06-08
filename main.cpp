#include <iostream>;
#include <string>;

using namespace std;

bool find_the_max_number(int* a, int* b, int* max) {
	if (*a > *b) {
		*max = *a;
		return true;
	}
	else {
		*max = *b;
		return false;
	
	}
}

int main() {
	int num1, num2, max;
	cout << "Enter the first number: ";
	cin >> num1;
	cout << "Enter the second number: ";
	cin >> num2;

	find_the_max_number(&num1, &num2, &max);
	t << "The maximum number is: " << max << endl;


	system("pause");
	return 0;
}