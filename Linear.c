#include<stdio.h>
int main(){
    int i,a[100],n,found=0;
    printf("\nEnter the size");
    scanf("%d", &n);
    a[n];
    printf("\nenter the elements:");
    for(i=0; i<n; i++)
    scanf("%d", &a[i]);
    for(i=0; i<n; i++)
    printf("%4d", a[i]);
    printf("\nEnter the element want to Search:");
    scanf("%d", &found);
    for(i=0; i<n; i++){
        if(a[i]==found){
        found = 1;
        break;
        }
    }
    if(found == 1)
    printf("%d is found at position %d", found, i+1);
    else
    printf("not found");

}