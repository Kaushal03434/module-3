//patten : 1
//     *
//   * * *
//  * * * * *
// * * * * * * *
//* * * * * * * * *


#include <stdio.h>
int main() {
    int n = 5,i,k,j; 

    for (i= 0; i < n; i++) {
        for (j = 0; j < n - i - 1; j++) {
            printf("  ");
        }

        for (k = 0; k < 2 * i + 1; k++) {
            printf("*");
            if (k < 2 * i) {
                printf(" ");
            }
        }

        printf("\n"); // Move to the next line after printing each row
    }
    

    return 0;
}


//step 1: i,j,n,cuurentChar variable make...
// step 3: use for loop to i=1,i <= n,i++;
//step 4: use nested looping to j=1; j<=i;j++;
//step 5: printf cuurent caracter "A";
//step 6: cureent charcter "A" now ++ to n  row in abcd print...



