#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <ctype.h>
#include <string.h>

// Macro for nonused return values
#define NU (void) 

#define asize(a)	(sizeof(a)/sizeof(a[0]))

void clearBuffer(void);

void stringGets(char* p);

void sputs(const char* p);

void myStrCpy(const char* pSource, char* pDest);

void myStrCat(const char* pFirst, const char* pSecond, char* pFinal);

int myStrCmp(const char* pFirst, const char* pSecond);

int endsWith(const char* pFirst, const char* pSecond);

void genericSwap(void* vp1, void* vp2, size_t size);

void printDoubleArray(const double* p, size_t size);

void genericReverseArray(void* vp, size_t size, size_t sz);

void myMemSet(void* vp, int val, size_t size);

void myMemCpy(void* vpDest, const void* vpSource, size_t size);

void* genericLinearSearch(const void* vp, size_t size, size_t sizeOfMember, const void* vpkey);