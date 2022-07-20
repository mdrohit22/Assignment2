#include<stdio.h>


int main()
{

    int num, with_out_last_digit ;
    printf("Enter a number");
    scanf("%d", &num);
    with_out_last_digit= num/10;
    printf("After operation the value of %d is %d ", num, with_out_last_digit); 


    return 0;
}