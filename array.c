// array traversing
#include<stdio.h>
int main (){
    int i,n;
    int arr[50];
    printf("Enter array size\n:");
    scanf("%d", &n);
    arr[n];
    printf("Enter array elements:");
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    printf("After traversing:\n");
    for(i=0; i<n; i++){
        printf("%4d", arr[i]);
    }
    return 0;
    
}