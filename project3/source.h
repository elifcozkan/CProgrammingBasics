#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <ctype.h>

// Macro for nonused return values
#define NU (void) 


void freeStandardInputBuffer(void);

void stringGets(char* p);

int stringLength(char* ch);

void addExclamation(char* ch);

int characterFind(const char* ch, const char key);

int compareString(const char* str1, const char* str2);

void eraseCharacter(char* strIn, char* strDest, const char ch);

void reverseString(char* str, size_t size);

int numberOfWords(const char* str);
