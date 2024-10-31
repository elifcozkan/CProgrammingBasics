#ifndef SOURCE_H
#define SOURCE_H

#define NU (void) // Macro for nonused return values


#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>
#include <conio.h>


/* Functional Macros */
// Swap two numbers
#define SWAPM(x,y)	do{int temp=x; x=y; y=temp;}while(0)
// Prints the expression in iprint (meaning a)
#define iprint(a) printf(#a"=%d\n", a)
// pasting
#define pasting(a,b) a##b
// find max of three numbers int, float and double
#define gmf(T) T max3_##T(T a, T b, T c)\
{\
 T max = a;\
 if(b>max) \
	max =b; \
	if(c>max) \
	max=c; \
return max;\
}
gmf(int)
gmf(float)
gmf(double)
// macro for random number between the limits
#define myrand(low, high)  (rand() % ((high)-(low)+1) + (low))
// macro for calculating array size
#define aSize(a)	(sizeof(a)/sizeof(a[0]))

/* Function declerations */
int digitnum(int num);
void comparisons(int a, int b);
void dayHourMinSecCalc(int* day, int* hour, int* min, int* sec);
void userInputMinMaxMeanCalc(int* sum, int* min, int* max, int* mean);
int digitInverse(int num);
int sumOfDigits(int num);
void flushBuffer(void);
int isEven(int num);
void CollatzConjecture(int* number);
int factorialNumber(int* number);
double seqConverge(int* number);
void putStars(int* number);
void primesOfNumbers(int* number);
int isLeap(int year);
int dayOfTheYear(int day, int month, int year);

void randomize(void);
void print_random_psw(void);
int random_char(void);




#endif // SOURCE_H


