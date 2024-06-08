#include <iostream>

using namespace std;

int sumArr(int* arr, int size) {
    int sum = 0;
    for (int* i = arr; i < arr + size; i++) {
        sum += *i;
    }
    return sum;
}

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int* arr = new int[size];

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }

    int sum = sumArr(arr, size);
    cout << "The sum of the elements of the array is: " << sum << endl;

    delete[] arr;
    return 0;
}
