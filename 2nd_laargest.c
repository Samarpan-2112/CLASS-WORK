#include <stdio.h>
int secondLargest(int arr[], int n) {
    int i, largest, second;
    if(n < 2) return -1;  
    largest = second = -99999;  
    for(i=0; i<n; i++) {
    if(arr[i] > largest) {
    second = largest;
    largest = arr[i];
    }
    else if(arr[i] > second && arr[i] != largest) {
    second = arr[i];
    }
    }
    return second;
}
int main() {
    int arr[50], n, i, ans;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for(i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    ans = secondLargest(arr, n);
    if(ans == -1)
    printf("Not enough elements\n");
    else
    printf("Second largest element = %d\n", ans);
    return 0;
}