#include<stdio.h>
int main(){
    int i,n,p;
    int a[100];
    printf("Enter array size\n:");
    scanf("%d", &n);
    a[n];
    printf("Enter array elements:");
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    printf("After traversing:\n");
    for(i=0; i<n; i++){
        printf("%4d", a[i]);
    }
    printf("Enter the position to insert:");
    scanf("%d", &p);
    if(p<0 || p>n)
    {
        printf("insert is not possible");
    }
    else{
    for(i=n-1; i>=p; i--)
    a[i+1]= a[i];
    printf("\nenter the element to insert:");
    scanf("%d", &a[p]);
    n++;
    }
    printf("\nafter traversing:");
        for(i=0; i<n; i++)
        printf("%4d", a[i]);
        return 0;
}