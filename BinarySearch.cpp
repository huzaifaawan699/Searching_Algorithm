#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter Number of Elements in Array:" << endl;
    cin >> n;
    if (n <= 0) {
        cout << "Invalid Choice. Please Enter a Positive Integer." << endl;
        return -1;
    }

    int arr[n];
    cout << "Enter Elements of the Array (in sorted order):" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int search;
    cout << "Enter Element to Search:" << endl;
    cin >> search;

    int left = 0;
    int right = n - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == search) {
            cout << "Element Found At index " << mid << endl;
            return 0;
        } else if (arr[mid] < search) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    cout << "Element Not Found in the array." << endl;

    return 0;
}
