#include<stdio.h>
int BinarySearch(int arr[], int n, int key) {
    int left = 0, right = n - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == key)
            return mid;
        if (arr[mid] < key)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1;
}
int main() {
    int arr[] = {10, 25, 30, 45, 50};
    int key = 45;
    int result = BinarySearch(arr, 5, key);
    if (result != -1)
        printf("Element at index %d\n", result);
    else
        printf("Element not found\n");
    return 0;
}