/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int main()
{
    int i,j,k;
    for(i=1;i<=5;i++){
         for(j=1;j<=i;j++){
                printf("*");
        }
        printf("\n");
}
    return 0;
}