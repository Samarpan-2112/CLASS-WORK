#include <stdio.h>
void sortArray(int arr[], int n){
    int i, j, temp;
    for(i=0;i<n;i++)
    for(j=i+1;j<n;j++)
    if(arr[i]>arr[j])
    {
    temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
    }
}
int main(){
    int arr[50], n, i;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    printf("Enter %d elements: ", n);
    for(i=0;i<n;i++) scanf("%d",&arr[i]);
    sortArray(arr,n);
    printf("Sorted array: ");
    for(i=0;i<n;i++) printf("%d ",arr[i]);
    printf("\n");
    return 0;
}