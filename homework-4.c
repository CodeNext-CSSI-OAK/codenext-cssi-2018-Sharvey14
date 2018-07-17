/*
Program Name: cis6Summer2018ShannonhHw4Ex1.c
Discussion:   HW #4 Ex #1
Written by:   Shannon Harvey
Date:         2018/07/18
*/

//#include <stdio.h>

void displayAllDigitShannonh(int);

void runMenuHw4(void);

void displayClassInfoShannonh(void);

void displayDigit(int);

int extractDigitCount(int);

int main() {

	displayClassInfoShannonh();

	runMenuHw4();
}

void runMenuHw4() {
	int option;
	int usrValue;
	int digitCount;


	do {
		printf("\n\n******************************************\n");
		printf("*              MENU - HW #4              *\n");
		printf("*  (1) Calling displayAllDigitShannonh() *\n");
		printf("*  (2) Quit                              *\n");
		printf("******************************************\n");
		printf("Enter an integer for option + ENTER: ");
		scanf_s("%d", &option);

		switch (option) {
		case 1:
			printf("\nEnter an integer: ");
			scanf_s("%d", &usrValue);
			printf("calling displayAllDigitShannonh() --");

			if (usrValue == 0) {
				printf("\nThe given value is ZERO!");
			}
			else {
				//printf("calling displayAllDigitShannonh() --");
				displayAllDigitShannonh(usrValue);

				digitCount = extractDigitCount(usrValue);

				displayDigit(usrValue);
			}
			break;
		case 2:
			printf("\nhave fun!\n");
			break;
		default:
			printf("\nwrong option!\n");
		}
	} while (option != 2);
}

void displayAllDigitShannonh(int usrValue) {


	if (usrValue > 0) {
		printf("\n%d is a positive number.", usrValue);
	}
	else if (usrValue < 0) {
		printf("\n%d is a negative number.", usrValue);
	}
	else {
		printf("\nThe given value is ZERO!");
	}
}

int extractDigitCount(int usrValue) {
	int digitCount = 0;
	do {
		digitCount++;

		usrValue /= 10;
	} while (usrValue != 0);
	printf("The digit(s) would be ");
	return digitCount;
}

void displayDigit(int usrValue) {
	int lsd;

	if (usrValue < 0) {
		usrValue = -usrValue;
	}

	printf("\nThe digit(s) would be");

	do {
		lsd = usrValue % 10;

		printf("\n  %d", lsd);

		usrValue /= 10;
	} while (usrValue != 0);
}

void displayClassInfoShannonh() {
	printf("CIS 6 - Introduction to C Programming\n"
		"Laney College\n"
		"Shannon Haryvey\n\n"
		"Assignment Information --\n"
		"	Assignment Number: Homework 4,\n"
		"                           Coding Assignment -- Exercise #1\n"
		"Written by:                Shannon Harvey\n"
		"Submitted Date:            2018/07/118\n\n");
}

/* PROGRAM_OUTPUT

*/

/*Logic_Code_Output_Issues

*/
