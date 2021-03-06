/**
 * @file BillEstimator.c
 * @author Chaitali Rokhade (rokhadechaitali@gmail.com)
 * @brief Estimator to predict the bill 
 * @version 0.1
 * @date 2022-03-03
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"MainBill.h"

void details()
{
    printf("Enter your  area name:\n");
	scanf("%s", B.area);
	printf("Enter your  name:\n");
	scanf("%s", B.name);
	printf("Enter your Meter Number:\n");
	scanf("%d", &B.meternumber);
    printf("Enter units consumed:\n");
	scanf("%d", &B.unitsconsumed);
    printf("Enter email ID :\n");
    scanf("%s", B.email);
    printf("Enter the permanent address :\n");
    scanf("%s", B.address);
    printf("Enter the phone number : \n");
    scanf("%ls", B.phonenumber);
}

void Urban()
{
    int amount=0;
    B.unitsconsumed;
    if(B.unitsconsumed <=20 && B.unitsconsumed >= 0)
    {
        amount = B.unitsconsumed * 4.15; //4.15 rupees
    }
    else if(B.unitsconsumed >= 21 && B.unitsconsumed <= 70)
    {
        amount = B.unitsconsumed * 5.40;
    }
    else if(B.unitsconsumed >= 71 && B.unitsconsumed <= 100)
    {
        amount = B.unitsconsumed * 6.95;
    }
    else
    {
        amount = B.unitsconsumed * 7.80;
    }

    printf("****Electricity Bill****\n\n");
    printf("Name : %s\n", B.name);
    printf("In Urban, your electricity bill is: %d\n", amount);
    printf("Units you consumed per month: %d\n", B.unitsconsumed);
}

void Rural()
{
    int amount=0;
    B.unitsconsumed;
    if(B.unitsconsumed <=20 && B.unitsconsumed >= 0)
    {
        amount = B.unitsconsumed * 4.25; //4.25  rupees
    }
    else if(B.unitsconsumed >= 21 && B.unitsconsumed <= 70)
    {
        amount = B.unitsconsumed * 5.50;
    }
    else if(B.unitsconsumed >= 71 && B.unitsconsumed <= 100)
    {
        amount = B.unitsconsumed * 6.98;
    }
    else
    {
        amount = B.unitsconsumed * 7.95;
    }
    printf("****Electricity Bill****\n\n");
    printf("Name : %s\n", B.name);
    printf("In Urban, your electricity bill is: %d\n", amount);
    printf("Units you consumed per month: %d\n", B.unitsconsumed);
}

void Commercial()
{
    int amount=0;
    B.unitsconsumed;
    if(B.unitsconsumed <=20 && B.unitsconsumed >= 0)
    {
        amount = B.unitsconsumed * 6.15; //6.15 rupees
    }
    else if(B.unitsconsumed >= 21 && B.unitsconsumed <= 70)
    {
        amount = B.unitsconsumed * 8.40;
    }
    else if(B.unitsconsumed >= 71 && B.unitsconsumed <= 100)
    {
        amount = B.unitsconsumed * 10.95;
    }
    else
    {
        amount = B.unitsconsumed * 12.80;
    }
    printf("****Electricity Bill****\n\n");
    printf("Name : %s\n", B.name);
    printf("In Commercial, your electricity bill is: %d\n", amount);
    printf("Units you consumed per month: %d\n", B.unitsconsumed);
}