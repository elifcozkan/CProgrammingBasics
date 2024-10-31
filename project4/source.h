#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <ctype.h>
#include <string.h>

// Macro for nonused return values
#define NU (void) 


void swap(int* p1, int* p2);

void displayArray(const int* ptr, size_t size);

double arithmeticMeanArray(const int* ptr, size_t size);

void reverseArray(int* ptr, size_t size);

void arrayMaxMin(const int* ptr, size_t size, int* max, int* min);

void bubbleSortArray(int* ptr, size_t size);

void copyArray(const int* arr, int* destArr, size_t size);

void selectionSort(int* arr, size_t size);
