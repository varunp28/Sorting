#include <iostream>
using namespace std;
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pivot = arr[high]; 
        int i = low - 1;

        for (int j = low; j < high; j++) {
            if (arr[j] < pivot) {
                i++;
                swap(arr[i], arr[j]);
            }
        }
        swap(arr[i + 1], arr[high]);
        int pi = i + 1;

        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}
int main() {
    int size;
    cout << "Enter the number of elements in the array: ";
    cin >> size;
    int arr[size];
    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    quickSort(arr, 0, size - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
/*
Output:
Enter the number of elements in the array: 6
Enter 6 elements: 10 7 8 9 1 5
Sorted array: 1 5 7 8 9 10
*/
