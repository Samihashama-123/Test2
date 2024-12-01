#include<stdio.h>
int main(){
    int i, a[100],n;
    printf("\nEnter the size of array:");
    scanf("%d", &n);
    a[n];
    printf("\nEnter the elements of array:");
    for(i=0; i<n; i++)
    scanf("%d", &a[i]);
    printf("\nAfter traversing:");
    for(i=0; i<n; i++)
    printf("%4d", a[i]);
    return 0;
    
}