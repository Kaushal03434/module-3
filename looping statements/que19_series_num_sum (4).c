//1
//2 3
//4 5 6
//7 8 9 10
//11 12 13 14 15

#include <stdio.h>

int main() {
    int i,n=5,j,count=1;

	

     for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d ", count);
            count++;
        }
        printf("\n"); 
    }

    return 0;
}


//step 1: i,j,n,cuurentChar variable make...
// step 3: use for loop to i=1,i <= n,i++;
//step 4: use nested looping to j=1; j<=i;j++;
//step 5: printf cuurent caracter "A";
//step 6: cureent charcter "A" now ++ to n  row in abcd print...



