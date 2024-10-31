#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>


// creates random numbers with limits
#define myRand(low, high)  (rand() % ((high)-(low)+1) + (low))
// Macro for nonused return values
#define NU (void) 

/* Function declerations */
void randomize(void);

void randomArray(int* arr, size_t size);
void printArray(const int* arr, size_t size);

int sumArray(const int* arr, size_t size);

double standardDeviationOfArray(const int* arr, size_t size);

int maxOfArray(const int* arr, size_t size);

int runnerUpOfArray(const int* arr, size_t size);

void reverseOfArray(int* arr, size_t size);

int linearSearchArray(const int* arr, size_t size, int key);

void bubbleSortArray(int* arr, size_t size);

void swapPointer(int* num1, int* num2);

void mergeArray(const int* arr1, size_t arr1size, const int* arr2, int* arrMerged);

void bubbleSortOddEven(int* arr, size_t SIZE);