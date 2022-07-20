#include<stdio.h>
int main(){
    
    double rupee, usd;
    printf("Enter the amount which you want convert in usd\n");
    scanf("%lf", &rupee);
    usd = rupee / 79.99;
    printf("%lf rupee in usd is %lf", rupee , usd);


return 0;
}