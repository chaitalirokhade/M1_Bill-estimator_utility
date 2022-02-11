#include <stdio.h>
#include <stdlib.h>
/*#include <conio.h>*/
#include <string.h>
/*#include <Windows.h>*/
#include "MainBill.h"
#include "BillEstimator.h"
void Urban();
void Rural();
void Commercial();
void main()
{ 
	char details();
	int option;
	do
	{
		printf("****Bill Estimator****\n");
		printf("Please enter your choice from below (1-2):\n");
		printf("1. Urban\n");
		printf("2. Rural\n");
		printf("3. Commercial\n");
        printf("4. EXIT\n");
		printf("Electricity Helpline Board: 0836 2747\n");
		printf("Enter your choice :\n");
		scanf("%d", &option);
		system("cls");
		switch (option)
		{
		case 1:
			Urban();
			break;
		case 2:
			Rural();
			break;
        case 3:
            Commercial();
            break;    
		default:
			printf("SORRY INVALID CHOICE!\n");
			printf("PLEASE CHOOSE FROM 1 or 2\n");
		}
		getc;
	} while (option != 4);
}