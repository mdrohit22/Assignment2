#include<stdio.h>
int main(){

    int a,b,temp;
    printf("Enter value of a\n");
    scanf("%d", &a);
    printf("Enter value of b\n");
    scanf("%d", &b);
    printf("The value of a is %d and b is %d\n", a, b);
    temp = a;
    a= b;
    b = temp;
    printf("After swaping the value of a is %d and b is %d", a, b);


return 0;
}