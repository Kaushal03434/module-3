#include <stdio.h>
#include <stdlib.h>


void main()
{
    char str[100]; /* Declares a string of size 100 */
    int l= 0;
	
       printf("\n\nSeparate the individual characters from a string :\n");
       printf("------------------------------------------------------\n"); 	
       printf("Input the string : ");
       //scanf("%s",&str);
       fgets(str, sizeof str, stdin);
	   printf("The characters of the string are : \n");
    while(str[l]!='\0')
    {
       printf("%c\n", str[l]);
       l++;
    }
    printf("\n");
}

