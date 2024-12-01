#include <stdio.h>
int main() {
    int countdown = 10;
       while (countdown > 0) {
        printf("%d\n", countdown);
        countdown--;
        if (countdown == 0) {
            printf("Liftoff!\n");
        }
    }
   return 0;
}