#include<stdio.h>
int main(){
    int i,n,arr[100];
    printf("Enter array size:");
    scanf("%d", &n);
    arr[n];
    printf("Enter array elements:");
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    for(i=0; i<n; i++){
        printf("%d", arr[i]);
    }
    int max,min;
    for(i=0; i<n; i++){
        if(max<arr[i]){
            max= arr[i];
        }
        if(min>arr[i]){
            min = arr[i];
        }
    }
    printf("%d", max);
    printf("%d", min);
    return 0;
}