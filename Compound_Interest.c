#include<stdio.h>
#include<math.h>
int main()
{
    float p,r,t,ci;
    scanf("%f%f%f",&p,&r,&t);
    ci=p*(pow(1.0+r/100,t)-1);
    printf("%.2f",ci);
}