/*
Program Name: cis6Summer2018ShannonhHw4Ex1.c
Discussion:   HW #4 Ex #1
Written by:   Shannon Harvey
Date:         2018/07/18
*/

#include <stdio.h>

void displayAllDigitShannonh(int);

void runMenuHw4(void);

void displayClassInfoShannonh(void);

void displayDigit(int);

int extractDigitCount(int);

int main() {

	displayClassInfoShannonh();

	runMenuHw4();

	return 0;
}

void runMenuHw4() {
	int option;
	int usrValue;


	do {

		printf("\n\n******************************************\n"
					 "*              MENU - HW #4              *\n"
				   "*  (2) Quit                              *\n"
				   "******************************************\n"
				   "Enter an integer for option + ENTER: ");
		scanf_s("%d", &option);

		switch (option) {
		case 1:
			printf("\nEnter an integer: ");
			scanf_s("%d", &usrValue);
			printf("\ncalling displayAllDigitShannonh() --\n");

			if (usrValue == 0) {
				printf("\nThe given value is ZERO!");
			}
			else {
				displayAllDigitShannonh(usrValue);

				extractDigitCount(usrValue);

				displayDigit(usrValue);
			}
			break;
		case 2:
			printf("\nhave fun!\n\n");
			break;
		default:
			printf("\nwrong option!");
		}
	} while (option != 2);
}

void displayAllDigitShannonh(int usrValue) {


	if (usrValue > 0) {
		printf("\n  %d is a positive number.\n", usrValue);
	}
	else if (usrValue < 0) {
		printf("\n  %d is a negative number.\n", usrValue);
	}
	else {
		printf("\nThe given value is ZERO!\n");
	}
}

int extractDigitCount(int usrValue) {
	int digitCount = 0;
	do {
		digitCount++;

		usrValue /= 10;
	} while (usrValue != 0);
	printf("  There is/are %d digit(s)", digitCount);
	return digitCount;
}

void displayDigit(int usrValue) {
	int lsd;

	if (usrValue < 0) {
		usrValue = -usrValue;
	}

	printf("\n  The digit(s) would be");

	do {
		lsd = usrValue % 10;

		printf("\n    %d", lsd);

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
		"Submitted Date:            2018/07/18\n");
}

/* OUTPUT - Sample Run
CIS 6 - Introduction to C Programming
Laney College
Shannon Haryvey

Assignment Information --
  Assignment Number: Homework 4,
                     Coding Assignment -- Exercise #1
  Written by:        Shannon Harvey
  Submitted Date:    2018/07/18


******************************************
*              MENU - HW #4              *
*  (1) Calling displayAllDigitShannonh() *
*  (2) Quit                              *
******************************************
Enter an integer for option + ENTER: 6

wrong option!

******************************************
*              MENU - HW #4              *
*  (1) Calling displayAllDigitShannonh() *
*  (2) Quit                              *
******************************************
Enter an integer for option + ENTER: 1

Enter an integer: -9

calling displayAllDigitShannonh() --

  -9 is a negative number.
  There is/are 1 digit(s)
  The digit(s) would be
    9

******************************************
*              MENU - HW #4              *
*  (1) Calling displayAllDigitShannonh() *
*  (2) Quit                              *
******************************************
Enter an integer for option + ENTER: 1

Enter an integer: -13454

calling displayAllDigitShannonh() --

  -13454 is a negative number.
  There is/are 5 digit(s)
  The digit(s) would be
    4
    5
    4
    3
    1

******************************************
*              MENU - HW #4              *
*  (1) Calling displayAllDigitShannonh() *
*  (2) Quit                              *
******************************************
Enter an integer for option + ENTER: 1

Enter an integer: 3450406

calling displayAllDigitShannonh() --

  3450406 is a positive number.
  There is/are 7 digit(s)
  The digit(s) would be
    6
    0
    4
    0
    5
    4
    3

******************************************
*              MENU - HW #4              *
*  (1) Calling displayAllDigitShannonh() *
*  (2) Quit                              *
******************************************
Enter an integer for option + ENTER: 1

Enter an integer: -3450406

calling displayAllDigitShannonh() --

  -3450406 is a negative number.
  There is/are 7 digit(s)
  The digit(s) would be
    6
    0
    4
    0
    5
    4
    3

******************************************
*              MENU - HW #4              *
*  (1) Calling displayAllDigitShannonh() *
*  (2) Quit                              *
******************************************
Enter an integer for option + ENTER: 1

Enter an integer: 0

calling displayAllDigitShannonh() --

  The given value is ZERO!

******************************************
*              MENU - HW #4              *
*  (1) Calling displayAllDigitShannonh() *
*  (2) Quit                              *
******************************************
Enter an integer for option + ENTER: 2

have fun!

*/

/*Logic_Code_Output_Issues
	no comment
*/
