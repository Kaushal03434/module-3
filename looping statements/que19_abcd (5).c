//A
//A B 
//A B C
//A B C D 
//A B C D E

#include <stdio.h>

int main() {
    int i,n=5,j;
	char currentChar = 'A'; 

	

    for (i = 1; i <= n; i++) {
        for (j = 0; j < i; j++) {
            printf("%c ", 'A' + j);
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



