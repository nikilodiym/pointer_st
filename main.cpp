#include <iostream>;
#include <string>;

using namespace std;

int main() {
	const int SIZE = 5;
	int sourceArray[SIZE] = { 1, 2, 3, 4, 5 };
	int destinationArray[SIZE];
	int* sourcePtr = sourceArray;
	int* destinationPtr = destinationArray;

	for (int i = 0; i < SIZE; i++) {
		*destinationPtr = *sourcePtr;
		sourcePtr++;
		destinationPtr++;
	}
	
	cout << "Copy arr: ";
	for (int i = 0; i < SIZE; i++) {
		cout << destinationArray[i] << " ";
	}

	system("pause");
	return 0;

}