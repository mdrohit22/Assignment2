#include<stdio.h>
int main(){
    int number , digit;
    printf("Enter a number\n");
    scanf("%d", &number);
    printf("Enter a digit which you want to append\n");
    scanf("%d", &digit);
    printf("Before the operation the number looks like %d\n",number);
    number = number *10 + digit;
    printf("After the operation the number looks like %d\n",number);






return 0;
}