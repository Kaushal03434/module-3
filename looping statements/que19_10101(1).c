
#include <stdio.h>

int main() {
    int i,j,n;


	printf("Enter row num:");
	scanf("%d",&n);
	
	
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            if (j % 2 == 1) {
                printf("1");
            } else {
                printf("0");
            }
        }
        printf("\n");
    }

    return 0;
}


//step 1: i,j,n variable make...
//step 2: printf & scanf to get user row
// step 3: use for loop to i=1,i <= n,i++;
//step 4: use nested looping to j=1; j<=i;j++;
//step 5: if(j % 2 == 1) then print "1"; neither printf "0";
//and for new line to loop print "n" for new line;;

