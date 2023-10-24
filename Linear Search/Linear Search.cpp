#include <iostream>
using namespace std;

int linearsearch(int arr[], int n, int k) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == k) {
            return i;
        }
    }
    return -1;
}

int main()
{
    cout << "Enter size of array: ";
    int n;
    cin >> n;
    int* arr = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Enter k as the number to find: ";
    int k;
    cin >> k;

    int pos = linearsearch(arr, n, k);

    if (pos == -1) {
        cout << "Number not found";
    }
    else
        cout << "Number found at index " << pos;
}
