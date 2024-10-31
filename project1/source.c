#define _CRT_SECURE_NO_WARNINGS
/*
Author:		ELIF OZKAN
Contact:	elifcozkan@gmail.com
*/

/* This project consists of examples of C Programming course
If you want to see the specific example write it's number. */

/* Contents
1.	Write a code that return digit number. .
2.	We have only !, &&, || and <. Write >, >=, <=, == and != comparisons.
3.	User writes day, hour, min and sec. Prepare it for order.
4.	Use a function that controls if the number is even.
5.	Find the sum of digits of a number given by user.
6.	Write a code that converts number to its invers. Ex: 1234 to 4321
7.	Write a code that takes input numbers from user until user says no. After, code writes total number, min, max, mean.
8.	Write a code that flushs standard input buffer until takes new line.
9.	Write a code that shows Collatz. If the number is even, num/2. If the number is odd, 3num +1.
10.	Write a code that calculates factorial of a number.
11.	Write a code that calculates user defined terms converge to in 1 -1/3 +1/5 -1/7... series.
12.	Write a code that prints starts to standard input as number entered by user.
13.	Write a code that prints the prime factors of a number.
14.	Write a code that calculates given year is leap.
15.	Write a code that to find the day of the year on the given date.
16.	Write a code that generates random passwords with 6 - 10 characters.
*/

#include "source.h"

char ans[] = "";

void main(void) {
	time_t start = clock();

	NU printf("Write the example you want to see: \n");
	int exNum = 0;
	NU scanf("%d", &exNum);

	switch (exNum)
	{
	case 1:
		NU printf("Write a code that returns digits of a number.\n");
		NU printf("Do you want to test it? If yes, write (y)\n");
		NU scanf("%s", &ans);

		if (ans[0] == 'y') {
			int userNum = 0;
			NU printf("Write a number to calculate its digits\n");
			NU scanf("%d", &userNum);
			NU printf("%d has %d digits.\n", userNum, digitnum(userNum));
			break;
		}
		else {
			break;
		}

	case 2:
		NU printf("Write >, >=, <=, == and != comparisons using onyle &&, ||, < and !.\n");
		NU printf("Here is the code: \n");
		NU printf("Do you want to test it? If yes, write (y)\n");
		NU scanf("%s", &ans);
		if (ans[0] == 'y') {
			int userNum1, userNum2 = 0;
			NU printf("Write two numbers to compare\n");
			NU scanf("%d%d", &userNum1, &userNum2);
			NU printf("Result is shown below.\n");
			NU comparisons(userNum1, userNum2);
			break;
		}
		else {
			break;
		}
	case 3:
		NU printf("User writes day, hour, min and sec. You should order it.\n");
		NU printf("Here is the code: \n");
		NU printf("Do you want to test it? If yes, write (y)\n");
		NU scanf("%s", &ans);
		if (ans[0] == 'y') {
			int userDay, userHour, userMin, userSec = 0;
			NU printf("Write day hour min sec with order.\n");
			NU scanf("%d%d%d%d", &userDay, &userHour, &userMin, &userSec);
			NU printf("Result is shown below.\n");
			NU dayHourMinSecCalc(&userDay, &userHour, &userMin, &userSec);
			break;
		}
		else {
			break;
		}
	case 4:
		NU printf("Use a function that controls if the number is even.\n");
		NU printf("Do you want to test it? If yes, write (y)\n");
		NU scanf("%s", &ans);
		if (ans[0] == 'y') {
			int userNum;
			NU printf("Write a number to test even or odd.\n");
			NU scanf("%d", &userNum);
			NU printf("Result is shown below.\n");

			if (isEven(userNum) == 1) {
				printf("%d is even.\n", userNum);
			}
			else {
				printf("%d is odd.\n", userNum);
			}
			break;
		}
		else {
			break;
		}

	case 5:
		NU printf("Find the sum of digits of a number given by user.\n");
		NU printf("Do you want to test it? If yes, write (y)\n");
		NU scanf("%s", &ans);
		if (ans[0] == 'y') {
			int userNum;
			NU printf("Write a number to sum its digits.\n");
			NU scanf("%d", &userNum);
			NU printf("The result is %d.\n", sumOfDigits(userNum));

			break;
		}
		else {
			break;
		}
	case 6:
		NU printf("Write a code that converts number to its invers. Ex: 1234 to 4321.\n");
		NU printf("Do you want to test it? If yes, write (y)\n");
		NU scanf("%s", &ans);
		if (ans[0] == 'y') {
			int userNum;
			NU printf("Write a number to inverse its digits.\n");
			NU scanf("%d", &userNum);
			NU printf("The result is %d.\n", digitInverse(userNum));

			break;
		}
		else {
			break;
		}
	case 7:
		NU printf("Write a code that takes input numbers from user until user says no. After, code writes total number, min, max, mean.\n");
		NU printf("Do you want to test it? If yes, write (y)\n");
		NU scanf("%s", &ans);
		if (ans[0] == 'y') {
			int a, b, c, d = 0;
			userInputMinMaxMeanCalc(&a, &b, &c, &d);
			break;
		}
		else {
			break;
		}
	case 8:
		NU printf("Write a code that flushs standard input buffer until takes new line.\n");
		NU printf("Do you want to test it? If yes, write (y)\n");
		NU scanf("%s", &ans);
		if (ans[0] == 'y') {
			flushBuffer();
			break;
		}
		else {
			break;
		}
	case 9:
		NU printf("Write a code that shows Collatz Conjecture.\n");
		NU printf("Do you want to test it? If yes, write (y)\n");
		NU scanf("%s", &ans);
		if (ans[0] == 'y') {
			NU printf("Write a number\n");
			int num = 0;
			NU scanf("%d", &num);
			CollatzConjecture(&num);
			break;
		}
		else {
			break;
		}
	case 10:
		NU printf("Write a code that calculates factorial of a number.\n");
		NU printf("Do you want to test it? If yes, write (y)\n");
		NU scanf("%s", &ans);
		if (ans[0] == 'y') {
			NU printf("Write a number\n");
			int num = 0;
			NU scanf("%d", &num);
			printf("factorial of %d is %d\n", num, factorialNumber(&num));
			break;
		}
		else {
			break;
		}
	case 11:
		NU printf("Write a code that calculates user defined terms converge to in 1 -1/3 +1/5 -1/7... series.\n");
		NU printf("Do you want to test it? If yes, write (y)\n");
		NU scanf("%s", &ans);
		if (ans[0] == 'y') {
			NU printf("Write a number\n");
			int num = 0;
			NU scanf("%d", &num);
			printf("Sum of %d term is %f\n", num, seqConverge(&num));
			break;
		}
		else {
			break;
		}
	case 12:
		NU printf("Write a code that prints starts to standard input as number entered by user.\n");
		NU printf("Do you want to test it? If yes, write (y)\n");
		NU scanf("%s", &ans);
		if (ans[0] == 'y') {
			NU printf("Write a number\n");
			int num = 0;
			NU scanf("%d", &num);
			putStars(&num);
			break;
		}
		else {
			break;
		}
	case 13:
		NU printf("Write a code that prints the prime factors of a number.\n");
		NU printf("Do you want to test it? If yes, write (y)\n");
		NU scanf("%s", &ans);
		if (ans[0] == 'y') {
			NU printf("Write a number\n");
			int num = 0;
			NU scanf("%d", &num);
			primesOfNumbers(&num);
			break;
		}
		else {
			break;
		}
	case 14:
		NU printf("Write a code that calculates given year is leap.\n");
		NU printf("Do you want to test it? If yes, write (y)\n");
		NU scanf("%s", &ans);
		if (ans[0] == 'y') {
			NU printf("Write the year\n");
			int userYear = 0;
			NU scanf("%d", &userYear);
			if (isLeap(userYear)) {
				printf("%d is leap year.\n", userYear);
			}
			else {
				printf("%d is not leap year.\n", userYear);
			}

			break;
		}
		else {
			break;
		}

	case 15:
		NU printf("Write a code that to find the day of the year on the given date.\n");
		NU printf("Do you want to test it? If yes, write (y)\n");
		NU scanf("%s", &ans);
		if (ans[0] == 'y') {
			NU printf("Write the day month and year with order.\n");
			int userDay = 0, userMonth = 0, userYear = 0;
			NU scanf("%d%d%d", &userDay, &userMonth, &userYear);
			printf("The day of the year is %d\n", dayOfTheYear(userDay, userMonth, userYear));

			break;
		}
		else {
			break;
		}
	case 16:
		NU printf("Write a code that generates random passwords with 6 - 10 characters.\n");
		NU printf("Do you want to test it? If yes, write (y)\n");
		NU scanf("%s", &ans);
		if (ans[0] == 'y') {
			NU printf("Your password is");
			randomize();
			print_random_psw();;
			break;
		}
		else {
			break;
		}


	} // End of switch

	time_t end = clock();
	printf("time spent is %f seconds \n", (double)(end - start) / CLOCKS_PER_SEC);

} // End of main



/* Function definitions */
// Example 1 function beginning
int digitnum(int num) {
	int digitcount = 0;
	if (num == 0)
		return 1;

	while (num != 0) {
		++digitcount;
		num /= 10;
	}
	return digitcount;
}
// Example 1 function end


// Example 2 function beginning
void comparisons(int a, int b) {
	// a>b 
	NU printf("for a > b expression => %d > %d is %d \n", a, b, (b < a));
	// a >= b
	NU printf("for a >= b expression => %d >= %d is %d \n", a, b, !(a < b));
	// a <= b
	NU printf("for a <= b expression => %d <= %d is %d \n", a, b, !(b < a));
	// a == b
	NU printf("for a == b expression => %d == %d is %d \n", a, b, !(a < b) && !(b < a));
	// a != b
	NU printf("for a != b expression => %d != %d is %d \n", a, b, (a < b) || (b < a));
}
// Example 2 function end

// Example 3 function beginning
void dayHourMinSecCalc(int* day, int* hour, int* min, int* sec) {
	*min = *min + *sec / 60;
	*sec = *sec % 60;
	*hour = *hour + *min / 60;
	*min = *min % 60;
	*day = *day + *hour / 24;
	*hour = *hour % 24;
	printf("You wrote %d days %d hours %d mins %d seconds\n", *day, *hour, *min, *sec);
}
// Example 3 function end

// Example 4 function beginning
int isEven(int num) {
	if (num == 0)
		return 1;

	if ((num % 2) == 0)
		return 1;
	else
		return 0;
}
// Example 4 function end

// Example 5 function beginning
int sumOfDigits(int num) {
	int sumDigits = 0;
	if (num == 0)
		return sumDigits;

	while ((num % 10) != 0) {
		sumDigits = sumDigits + (num % 10);
		num = (num / 10);
	}
	return sumDigits;
}
// Example 5 function end

// Example 6 function beginning
int digitInverse(int num) {
	int digitInv = 0;
	if (num == 0)
		return 1;

	while ((num % 10) != 0) {
		digitInv = digitInv * 10 + num % 10;
		num /= 10;
	}
	return digitInv;
}
// Example 6 function end

// Example 7 function beginning
void userInputMinMaxMeanCalc(int* sum, int* min, int* max, int* mean) {

	int userNum = 0;
	int cnt = 0;
	int ch = 0;
	*sum = 0;
	*mean = 0;
	while (1) {

		printf("Bir sayi girecek misiniz?\t(e) ya da (h)\n");

		while ((ch = _getch()) != 'e' && (ch != 'h'))
			;

		if (ch == 'e') {
			printf("Write a number and press enter.\n");
			NU scanf("%d", &userNum);
			if (isdigit(userNum) == 0) {
				if (cnt == 0) {
					*min = *max = userNum;
				}
				cnt++;
				*sum += userNum;
				if (*min > userNum) {
					*min = userNum;
				}
				if (*max < userNum) {
					*max = userNum;
				}
			}
		}
		else {
			*mean = *sum / cnt;
			printf("max is %d, min is %d, sum is %d and mean is %d\n\n", *max, *min, *sum, *mean);
			break;
		}
	}

}
// Example 7 function end

// Example 8 function beginning
void flushBuffer(void) {
	for (int bufC = getchar(); bufC != '\n'; bufC = getchar()) {
		printf("buffer character is %c", bufC);
	}
}
// Example 8 function end

// Example 9 function beginning
void CollatzConjecture(int* number) {
	if (iswdigit(*number) == 0) {
		while (*number) {
			if (*number == 1)
				break;

			if ((*number % 2) == 0) {
				*number /= 2;
				printf("%d\n", *number);
			}
			else {
				*number = *number * 3 + 1;
				printf("%d", *number);
			}
		}
	}
	else {
		printf("You dont write a number!\n");
	}
}
// Example 9 function end

// Example 10 function beginning
int factorialNumber(int* number) {
	if (*number == 1)
		return 1;
	int fact = 1;
	while (*number != 1) {
		fact = *number * fact;
		*number = *number - 1;
	}
	return fact;
}
// Example 10 function end

// Example 11 function beginning
double seqConverge(int* number) {
	double sum = 0;
	double num = 0;
	int cnt = 1;
	for (int i = 1; i < (*number + 1); i++) {

		if (i % 2 == 0) { // cnt is even
			num = -1. / cnt;
			sum += num;
		}
		else {
			num = 1. / cnt;
			sum += num;
		}
		cnt += 2;;
	}
	return sum;
}
// Example 11 function end


// Example 12 function beginning
void putStars(int* number) {
	for (int i = 1; i <= *number; i++)
	{
		for (int j = 0; j < i; ++j) {
			putchar('*');
		}
		putchar('\n');
	}
}
// Example 12 function end

// Example 13 function beginning
void primesOfNumbers(int* number) {
	int temp = *number;
	int div = 2;
	while (temp != 1) {
		while (temp % div == 0) {
			printf("%d \n", div);
			temp /= div;
		}
		++div;
	}

}
// Example 13 function end


// Example 14 function beginning
// returns 1 if the year is leap, returns 0 otherwise.
int isLeap(int year) {
	return ((year % 4 == 0) || (year % 400 == 0));
}
// Example 14 function end

// Example 15 function beginning
int dayOfTheYear(int day, int month, int year) {
	int sum = 0;
	sum = day;
	switch (month - 1) {
	case 11: sum += 30;
	case 10: sum += 31;
	case 9:	sum += 30;
	case 8: sum += 31;
	case 7: sum += 31;
	case 6: sum += 30;
	case 5: sum += 31;
	case 4: sum += 30;
	case 3: sum += 31;
	case 2: if (isLeap(year)) { sum += 29; }
		  else { sum += 28; };
	case 1: sum += 31;
	}
	return sum;
}
// Example 15 function end

// Example 16 functions beginning
void randomize(void) {
	srand((unsigned)time(NULL));
}


int random_char(void) {
	int c;
	while (!isalnum(c = rand() % 128))
		;
	return c;
}

void print_random_psw(void) {
	int len = myrand(6, 10);

	for (int i = 0; i < len; ++i)
	{
		putchar(random_char());
	}
	putchar('\n');
}
// Example 16 functions end