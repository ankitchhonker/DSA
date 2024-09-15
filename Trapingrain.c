#include <stdio.h>

int trappingwater(int arr[], int n) {
    int left[n], right[n];
    int ans = 0;
    int i;

    left[0] = arr[0];
    for ( i = 1; i < n; i++) {
        left[i] = (arr[i] > left[i - 1]) ? arr[i] : left[i - 1];
    }

    right[n - 1] = arr[n - 1];
    for (i = n - 2; i >= 0; i--) {
        right[i] = (arr[i] > right[i + 1]) ? arr[i] : right[i + 1];
    }

    for ( i = 0; i < n; i++) {
        ans += (left[i] < right[i]) ? (left[i] - arr[i]) : (right[i] - arr[i]);
    }

    return ans;
}

int main() {
    int arr[] = {0,1,0,2,1,0,1,3,2,1,2,1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int answer = trappingwater(arr, n);
    printf("Trapped rain water in blocks: %d\n", answer);
    return 0;
}
