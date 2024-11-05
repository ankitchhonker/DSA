 #include<iostream>
#include<vector>
using namespace std;

void merge(int arr[], int start, int mid, int end) {
    vector<int> temp(end - start + 1);
    int left = start, right = mid + 1, index = 0;
 

    while (left <= mid && right <= end) {
        if (arr[left] <= arr[right]) {
            temp[index] = arr[left];
            index++, left++;
        } else {
            temp[index] = arr[right];
            right++, index++;
        }
    }

    while (left <= mid) {
        temp[index] = arr[left];
        index++, left++;
    }

    while (right <= end) {
        temp[index] = arr[right];
        index++, right++;
    }

    // Copy the sorted values from temp back to the original array
    for (int i = 0; i < temp.size(); i++) {
        arr[start+i] = temp[i];
    }
}

void mergesort(int arr[], int start, int end) {
    if (start == end)
        return;
    int mid = start + (end - start) / 2;

    // Left divide
    mergesort(arr, start, mid);
    // Right divide
    mergesort(arr, mid + 1, end);

    merge(arr, start, mid, end);
}

int main() {
    int arr[] = {3, 2, 5, 4, 3};
    int s = 0;
    int e = sizeof(arr) / sizeof(int) - 1; // Adjusted to get the correct end index
    mergesort(arr, s, e);

    cout << "Sorted array: ";
    for (int i = 0; i <= e; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
