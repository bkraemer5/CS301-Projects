// Simple array reverse program using linux vim
#include <iostream>

using namespace std;

void reverseArray(int arr[], int n) {

int temp;
for (int i = 0; i < n/2; ++i) {
arr[i] = temp;
temp = arr[n-i-1];
arr[n-i-1] = arr[i];
arr[i] = temp;
}
}

int main() {

int size = 4;
int array[size] = {1, 2, 3, 4};

cout << "Before: ";
for (int i = 0; i < size; i++) {
cout << array[i] << " ";
}

reverseArray(array, size);

cout << "\nAfter: ";
for (int i = 0; i < size; i++) {
cout << array[i] << " ";
}

return 0;
}
