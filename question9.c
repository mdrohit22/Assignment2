#include<stdio.h>
int main(){

    int a;
    char b;
    double c;
    float d;
    a = sizeof(int);
    b = sizeof(char);
    c = sizeof(double);
    d = sizeof(float);

    printf("%d\n", a);
    printf("%d\n", b);
    printf("%lf\n", c);
    printf("%f", d);
    



return 0;
}