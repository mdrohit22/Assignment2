#include<stdio.h>
int main(){

    int number , last_digit; 
    printf("Enter a number\n");
    scanf("%d", &number);
    if((number%10)!= 0)
    {
        last_digit = number%10;
        number = number - last_digit;
        printf("After given operation the value is %d\n",number);

    }
    else
        printf("%d", number);
    




return 0;
}