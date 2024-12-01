#include<stdio.h>
int main(){
    int i,n,a[100],sum=0;
    printf("\nEnter the size of array:");
    scanf("%d", &n);
    a[n];
    printf("\nEnter the elements of array:");
    for(i=0; i<n; i++)
    scanf("%d", &a[i]);
    printf("\nAfter traversing:");
    for(i=0; i<n; i++)
    printf("%4d", a[i]);
    for(i=0; i<n; i++)
    sum = sum+a[i];
    printf("\nsum:%d", sum);
    return 0;

}