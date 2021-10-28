/*

Project: Payroll system
Author: Purity
Date: 28/10/2021
Compiler: GCC
Language: C99
License: MIT

*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    //variable declaration
    char name[1000], pin[10];
    int emp_no, hours;
    int normal_pay;
    float overtime_pay, tax, gross, net;
    const int rate = 1000;

    printf("\tGitonga\'s Factory Payroll\n");

    //capture input
    printf("Employee name:");
    gets(name);
    printf("KRA PIN:");
    gets(pin);
    printf("Employment number:");
    scanf("%d", &emp_no);
    printf("Hours worked:");
    scanf("%d", &hours);

    //computations
    if(hours> 40){
        normal_pay = rate*40;
        overtime_pay = (hours - 40)*1.5*rate;
    }
    else{
         normal_pay = rate*hours;
         overtime_pay =0;
        }
         gross = normal_pay*overtime_pay;
    tax = 0.3*gross;
    net = gross - tax;

    //output
    printf("Employment Number: %d\n",emp_no);
    printf("Employment Name:   %d\n",name);
    printf("KRA PIN:           %d\n",pin);
    printf("Normal pay:        %d\n",normal_pay);
    printf("Overtime pay:      %d\n",overtime_pay);
    printf("Tax paid:          %d\n",tax);
    printf("Net income:        %d\n",net);
    return 0;
}
