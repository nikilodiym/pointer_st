#include <iostream>;
#include <string>;

using namespace std;

void reverseCopyArray(int* source, int* destination, int size) {
    int* src = source;
    int* dest = destination + size - 1;

    while (src < source + size) {
        *dest = *src;
        src++;
        dest--;
    }
}

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int* sourceArray = new int[size];
    int* destinationArray = new int[size];

    cout << "Enter the elements of the source array: ";
    for (int i = 0; i < size; ++i) {
        cin >> sourceArray[i];
    }

    reverseCopyArray(sourceArray, destinationArray, size);

    cout << "Reversed array: ";
    for (int i = 0; i < size; ++i) {
        cout << destinationArray[i] << " ";
    }
    cout << endl;

    delete[] sourceArray;
    delete[] destinationArray;

	system("pause");
	return 0;
}