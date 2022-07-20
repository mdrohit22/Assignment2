#include<stdio.h>
int main(){

    int a,b;
    printf("Enter value of a\n");
    scanf("%d", &a);
    printf("Enter value of b\n");
    scanf("%d", &b);
    printf("Before swaping the value of a is %d and b is %d\n", a, b);
    a = a*b; 
    b =a/b; 
    a = a/b;
    printf("After swaping the value of a is %d and b is %d", a, b);



return 0;
}