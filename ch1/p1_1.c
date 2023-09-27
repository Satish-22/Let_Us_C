#include<stdio.h>

int main(){

    float basic ;
    printf("Please enter the basic salary \n");
    scanf("%f",&basic) ;

    float dear_allow = 0.4 * basic ;
    printf("The dearness allowance is %f \n" , dear_allow) ;
    float hra = 0.2 * basic;
    printf("The housing allowance is %f \n" , hra) ;

    float total = basic  + dear_allow + hra ;

    printf("The total salary is %f \n ", total) ;

    return 0 ;
}