#define _CRT_SECURE_NO_WARNINGS
/*
Author	:	ELIF OZKAN
Contact	:	elifcozkan@gmail.com
About	:	This project is about some pointer operations and string.h functions.
*/

/* Contents
1.	Write a code that prints the text at the address it receives to the standard output stream.
2.	Write a code that calculates how many identical characters there are in a text.
3.	Write a code that works like strlen.
4.	Write a code that works like strcpy.
5.	Write a code that works like strcat.
6.	Write a code that works like strcmp.	
7.	Write a code that finds is there a specific text at the end of another text. 
8.	Write a code that swap without looking the types. (Generic swap)
9.	Write a code that reverses array without looking the types. (Generic reverse)
10.	Write a code that resets (0) the desired number of elements starting from a specific index.
11.	Write a code that works like memset.
12. Write a code that works like memcpy.
13. Write generic linear search algorithm.
*/

#include "source.h"

#define SIZE 100

char ans[] = "";
char inputString[SIZE];



void main(void) {
	
	NU printf("Write the example you want to see: \n");
	int exNum = 0;
	NU scanf("%d", &exNum);
	int arr[SIZE] = { 8,7,3,5,2 };

	switch (exNum)
	{
	case 1:
		NU printf("Write a code that prints the text at the address it receives to the standard output stream.\n");
		NU printf("Do you want to test it? If yes, write (y)\n");
		NU scanf("%s", &ans);
		
		if (ans[0] == 'y') {
			clearBuffer();
			
			NU printf("Please write your input:\n");
			stringGets(inputString);
			sputs(inputString);
			NU printf("\n");
			break;
		}
		else {
			break;
		}
	case 2:
		NU printf("Write a code that calculates how many identical characters there are in a text.\n");
		NU printf("Do you want to test it? If yes, write (y)\n");
		NU scanf("%s", &ans);

		if (ans[0] == 'y') {
			clearBuffer();			
			NU printf("Please write your input:\n");
			stringGets(inputString);
			NU printf("Please write the character you want to count:\n");
			char key;
			key = getchar();
			NU printf("Text have %d character you wrote.\n", stringKeyCounter(inputString, &key));			
			NU printf("\n");
			break;
		}
		else {
			break;
		}
	case 3:
		NU printf("Write a code that works like strlen.\n");
		NU printf("Do you want to test it? If yes, write (y)\n");
		NU scanf("%s", &ans);

		if (ans[0] == 'y') {
			clearBuffer();			
			NU printf("Please write your input:\n");
			stringGets(inputString);
			NU printf("Input size is %zu\n", myStrLen(inputString));			
			NU printf("\n");
			break;
		}
		else {
			break;
		}

	case 4:
		NU printf("Write a code that works like strcpy.\n");
		NU printf("Do you want to test it? If yes, write (y)\n");
		NU scanf("%s", &ans);

		if (ans[0] == 'y') {
			clearBuffer();
			NU printf("Please write your input:\n");
			stringGets(inputString);
			char outString[SIZE];
			myStrCpy(inputString, &outString);
			NU printf("%s copied to %s", inputString ,outString);
			NU printf("\n");
			break;
		}
		else {
			break;
		}

	case 5:
		NU printf("Write a code that works like strcat.\n");
		NU printf("Do you want to test it? If yes, write (y)\n");
		NU scanf("%s", &ans);

		if (ans[0] == 'y') {
			clearBuffer();
			NU printf("Please write your input:\n");
			stringGets(inputString);
			char secondString[SIZE];
			NU printf("Please write your second input:\n");
			stringGets(secondString);
			char outString[2 * SIZE];
			myStrCat(inputString, secondString, outString);
			NU printf("Now string is %s ", outString);
			NU printf("\n");
			break;
		}
		else {
			break;
		}

	case 6:
		NU printf("Write a code that works like strcmp.\n");
		NU printf("Do you want to test it? If yes, write (y)\n");
		NU scanf("%s", &ans);

		if (ans[0] == 'y') {
			clearBuffer();
			NU printf("Please write your input:\n");
			stringGets(inputString);
			char secondString[SIZE];
			NU printf("Please write your second input:\n");
			stringGets(secondString);
			int val = myStrCmp(inputString, secondString);
			if (val == 0) {
				printf("[%s] and [%s] are the same.", inputString, secondString);
			}
			else if (val < 0) {
				printf("[%s] is greater than [%s].", inputString, secondString);
			}
			else {
				printf("[%s] is less than [%s].", inputString, secondString);
			}
			break;
		}
		else {
			break;
		}

	case 7:
		NU printf("Write a code that finds is there a specific text at the end of another text.\n");
		NU printf("Do you want to test it? If yes, write (y)\n");
		NU scanf("%s", &ans);

		if (ans[0] == 'y') {
			clearBuffer();
			NU printf("Please write your input:\n");
			stringGets(inputString);
			char secondString[SIZE];
			NU printf("Please write your second input:\n");
			stringGets(secondString);
			if (endsWith(inputString, secondString)) {
				printf("Yes there is [%s] in [%s]\n", secondString, inputString);
			}
			else {
				printf("No there is not [%s] in [%s]\n", secondString, inputString);
			}
			NU printf("\n");
			break;
		}
		else {
			break;
		}

	case 8:
		NU printf("Write a code that swap without looking the types. (Generic swap).\n");
		NU printf("Do you want to test it? If yes, write (y)\n");
		NU scanf("%s", &ans);

		if (ans[0] == 'y') {
			clearBuffer();
			NU printf("Please write your first input:\n");
			double in1, in2;
			NU scanf("%lf", &in1);
			NU printf("Please write your second input:\n");
			NU scanf("%lf", &in2);		
			NU printf("You wrote %f and %f,", in1, in2); 
			genericSwap(&in1, &in2, sizeof(double));
			NU printf("now it is% fand% f\n", in1, in2); 
			NU printf("\n");
			break;
		}
		else {
			break;
		}

	case 9:
		NU printf("Write a code that reverses array without looking the types. (Generic reverse).\n");
		NU printf("Do you want to test it? If yes, write (y)\n");
		NU scanf("%s", &ans);

		if (ans[0] == 'y') {
			clearBuffer();
			double ar1[5] = { 1.2, 2.4, 3.7, 4.5, 5.6 };
			printDoubleArray(ar1, 5);
			genericReverseArray(ar1, asize(ar1), sizeof(*ar1));
			printDoubleArray(ar1, 5);
			NU printf("\n");
			break;
		}
		else {
			break;
		}

	case 10:
		NU printf("Write a code that resets (0) the desired number of elements starting from a specific index.\n");
		NU printf("Do you want to test it? If yes, write (y)\n");
		NU scanf("%s", &ans);

		if (ans[0] == 'y') {
			clearBuffer();
			double ar[8] = { 1.5,2.3,3.8,4.7,5.4,6.3,7.2,8.8 };
			printDoubleArray(ar, 8);
			int item, idx = 0;
			NU printf("How many items will be reset starting from which index?");
			NU scanf("%d%d", &item, &idx);
			memset(ar + idx, 0,  item* sizeof(double));
			printDoubleArray(ar, 8);
			NU printf("\n");
			break;
		}
		else {
			break;
		}

	case 11:
		NU printf("Write a code that works like memset.\n");
		NU printf("Do you want to test it? If yes, write (y)\n");
		NU scanf("%s", &ans);

		if (ans[0] == 'y') {
			clearBuffer();
			double ar[8] = { 1.5,2.3,3.8,4.7,5.4,6.3,7.2,8.8 };
			printDoubleArray(ar, 8);
			int item, idx = 0;
			NU printf("How many items will be reset starting from which index?");
			NU scanf("%d%d", &item, &idx);
			myMemSet(ar + idx, 0, item * sizeof(double));
			printDoubleArray(ar, 8);
			NU printf("\n");
			break;
		}
		else {
			break;
		}

	case 12:
		NU printf("Write a code that works like memcpy.\n");
		NU printf("Do you want to test it? If yes, write (y)\n");
		NU scanf("%s", &ans);

		if (ans[0] == 'y') {
			clearBuffer();
			double ar[8] = { 1.5, 2.3, 3.8, 4.7, 5.4, 6.3, 7.2, 8.8};
			double ar2[2] = { 55.1, 46.2 };
			printDoubleArray(ar, 8);
			myMemCpy(ar, ar2, 2 * sizeof(double));
			printDoubleArray(ar, 8);
			NU printf("\n");
			break;
		}
		else {
			break;
		}

	case 13:
		NU printf("Write generic linear search algorithm.\n");
		NU printf("Do you want to test it? If yes, write (y)\n");
		NU scanf("%s", &ans);

		if (ans[0] == 'y') {
			clearBuffer();
			double ar[8] = { 1.5, 2.3, 3.8, 4.7, 5.4, 6.3, 7.2, 8.8 };
			printDoubleArray(ar, 8);
			double key;
			NU printf("Write the key to search: ");
			NU scanf("%lf", &key);
			int* p = (int*)genericLinearSearch(ar, asize(ar), sizeof(double), &key);
			if (p) {
				printf("Found at index %d\n", p - ar);
			}
			else {
				printf("Not found\n");
			}
			NU printf("\n");
			break;
		}
		else {
			break;
		}

	} // End of switch

}


void clearBuffer(void) {
	for (int bufC = getchar(); bufC != '\n'; bufC = getchar()) {
		;
	}
}

void stringGets(char* p) {
	int ch;
	while ((ch = getchar()) != '\n' && ch != EOF) {
		*p++ = (char)ch;
	}
	*p = '\0';
}


void sputs(const char* p) {
	while (*p != '\0') {
		putchar(*p);
		p++;
	}
}

int stringKeyCounter(const char* p, char* key) {
	int cnt = 0;
	while (*p != '\0') {
		if (*p == *key) {
			cnt++;
		}
		p++;
	}

	return cnt;
}

size_t myStrLen(const char* p) {
	size_t len = 0;
	while (*p) {
		len++;
		p++;
	}
	return len;
}

void myStrCpy(const char* pSource, char* pDest) {
	while (*pSource) {
		*pDest++ = *pSource++;
	}
	*pDest = '\0';
}

void myStrCat(const char* pFirst, const char* pSecond, char* pFinal ) {
	while (*pFirst) {
		*pFinal++ = *pFirst++;
	}
	while (*pSecond) {
		*pFinal++ = *pSecond++;
	}
	*pFinal = '\0';
		
}

int myStrCmp(const char* pFirst, const char* pSecond) {
	while (*pFirst == *pSecond) {
		if (*pFirst == '\0') {
			return 0;
		}
		++pFirst;
		++pSecond;
	}
	return *pFirst - *pSecond;
}

int endsWith(const char* pFirst, const char* pSecond) {
	int len1 = strlen(pFirst);
	int len2 = strlen(pSecond);

	if (len2 > len1) {
		return 0;
	}
	return !strcmp(pFirst + len1 - len2, pSecond);
}

void genericSwap(void* vp1, void* vp2, size_t size) {
	char* p1 = (char*)vp1;
	char* p2 = (char*)vp2;
	while (size--) {
		char temp = *p1;
		*p1++ = *p2;
		*p2++ = temp;
	}
}

void printDoubleArray(const double* p, size_t size) {
	while (size--) {
		NU printf("%f ", *p);
		p++;
	}
	printf("\n");
}

void genericReverseArray(void* vp, size_t size, size_t sz) {
	char* p = (char*)vp;
	for (size_t i = 0; i < size / 2; ++i) {
		genericSwap(p + i * sz, p + (size - 1 - i) * sz, sz);
	}
}

void myMemSet(void* vp, int val, size_t size) {
	char* p = (char*)vp;
	while (size--) {
		*p = val;
		p++;
	}
}

void myMemCpy(void* vpDest, const void* vpSource, size_t size) {
	char* pDest = (char*)vpDest;
	const char* pSource = (const char*)vpSource;
	while (size--) {
		*pDest++ = *pSource++;
	}
}

void* genericLinearSearch(const void* vp, size_t size, size_t sizeOfMember, const void* vpkey) {
	const char* p = (const char*)vp;
	for (size_t i = 0; i < size; ++i) {
		if (!memcmp(p + i * sizeOfMember, vpkey, sizeOfMember)) {
			return (void*)(p + i * sizeOfMember);
		}
	}
	return NULL;
}