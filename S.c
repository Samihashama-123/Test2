#include<stdio.h>
int main(){
    int n;
    printf("Enter the value of n:");
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i; j++){
            printf("  ");
        }
        for(int k=0; k<2*i-1; k++){
        printf(" *");
        }
        printf("\n");
    }
}