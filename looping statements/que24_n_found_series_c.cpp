// 1 + 2 + 3 + 4 + 5 + ... + n
#include <stdio.h>
int main() {
	
    int n,sum;


    printf("Enter the value of n: ");
    scanf("%d", &n);


    printf("Series: ");
    for (int i = 1; i <= n; i++) {
    	sum += i;
        printf("%d",i);
        if (i != n) {
            printf(" + ");
    	}
    }
    printf(" = %d",sum);
    
    return 0;
}

