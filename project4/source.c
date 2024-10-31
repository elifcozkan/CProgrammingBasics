#define _CRT_SECURE_NO_WARNINGS
/*
Author	:	ELIF OZKAN
Contact	:	elifcozkan@gmail.com
About	:	This project is about arrays and some pointer operations.
*/

/* Contents
1.	Write a code that displays arrays with pointers.
2.	Write a function that calculates the arithmetic mean of an array whose elements are of type int.
3.	Write a function that reverses the elements of an array whose elements are of type int.
4.	Write the code that will give the min and max of the given array.
5.	Write the code that Bubble sort an integer array.
6.	Write the code that copies an array to another array.
7.	Write the selection sort algorithm for an array.	
*/

#include "source.h"

#define SIZE 5

char ans[] = "";


void main(void) {

	NU printf("Write the example you want to see: \n");
	int exNum = 0;
	NU scanf("%d", &exNum);
	int arr[SIZE] = { 8,7,3,5,2 };

	switch (exNum)
	{
	case 1:
		NU printf("Write a code that displays arrays with pointers.\n");
		NU printf("Do you want to test it? If yes, write (y)\n");
		NU scanf("%s", &ans);
		
		if (ans[0] == 'y') {			
			displayArray(arr, SIZE);
			NU printf("\n");
			break;
		}
		else {
			break;
		}
	case 2:
		NU printf("Write a function that calculates the arithmetic mean of an array whose elements are of type int.\n");
		NU printf("Do you want to test it? If yes, write (y)\n");
		NU scanf("%s", &ans);
		
		if (ans[0] == 'y') {
			printf("mean is %f",arithmeticMeanArray(arr, SIZE));
			NU printf("\n");
			break;
		}
		else {
			break;
		}
	case 3:
		NU printf("Write a function that reverses the elements of an array whose elements are of type int.\n");
		NU printf("Do you want to test it? If yes, write (y)\n");
		NU scanf("%s", &ans);

		if (ans[0] == 'y') {
			reverseArray(arr, SIZE);
			displayArray(arr, SIZE);
			NU printf("\n");
			break;
		}
		else {
			break;
		}

	case 4:
		NU printf("Write the code that will give the min and max of the given array.\n");
		NU printf("Do you want to test it? If yes, write (y)\n");
		NU scanf("%s", &ans);

		if (ans[0] == 'y') {
			int max = 0;
			int min = 0;
			arrayMaxMin(arr, SIZE,&max,&min);
			NU printf("Max is %d and min is %d\n", max, min);
			displayArray(arr, SIZE);
			NU printf("\n");
			break;
		}
		else {
			break;
		}

	case 5:
		NU printf("Write the code that Bubble sort an integer array.\n");
		NU printf("Do you want to test it? If yes, write (y)\n");
		NU scanf("%s", &ans);

		if (ans[0] == 'y') {
			bubbleSortArray(arr, SIZE);
			displayArray(arr, SIZE);
			NU printf("\n");
			break;
		}
		else {
			break;
		}

	case 6:
		NU printf("Write the code that copies an array to another array.\n");
		NU printf("Do you want to test it? If yes, write (y)\n");
		NU scanf("%s", &ans);

		if (ans[0] == 'y') {
			int destArr[SIZE] = {0};
			NU printf("Array is ");
			displayArray(arr, SIZE);
			copyArray(arr, destArr ,SIZE);
			NU printf("Copied array is ");
			displayArray(destArr, SIZE);
			NU printf("\n");
			break;
		}
		else {
			break;
		}

	case 7:
		NU printf("Write the selection sort algorithm for an array.\n");
		NU printf("Do you want to test it? If yes, write (y)\n");
		NU scanf("%s", &ans);

		if (ans[0] == 'y') {
			selectionSort(arr, SIZE);
			displayArray(arr, SIZE);
			NU printf("\n");
			break;
		}
		else {
			break;
		}

	} // End of switch

}

void swap(int* p1, int* p2) {
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}

void displayArray(const int* ptr, size_t size){
	while (size--) {
		printf("%d ", *ptr);
		ptr++;
	}
	printf("\n-----------------\n");
}

double arithmeticMeanArray(const int* ptr, size_t size) {
	double mean = 0;
	for (int i = 0; i < size; i++) {
		mean += *ptr;
		ptr++;
	}
	return mean / (double)size;
}

void reverseArray(int* ptr, size_t size) {
	//int a = ptr;
	//int* c = &ptr;
	//int* d = &ptr[0];
	for (int i = 0; i < (size / 2); i++) {
		swap(&ptr[i], &ptr[size -1 -i]);
	}
}

void arrayMaxMin(const int* ptr, size_t size, int* max, int* min) {
	*max = ptr[0];
	*min = ptr[0];
	for (int i = 0; i < size; i++) {
		if (*ptr >= *max) {
			*max = *ptr;
		}
		if (*ptr < *min) {
			*min = *ptr;
		}
		ptr++;
	}
}

void bubbleSortArray(int* ptr, size_t size) {
	for (int i = 0; i < size - 1; i++) {
		for (int j = 0; j < size - 1; j++) {
			if (ptr[j] > ptr[j+1]) {
				swap(&ptr[j], &ptr[j+1]);
			}
		}
	}
}

void copyArray(const int* arr, int* destArr, size_t size) {
	while (size--) {
		*destArr = *arr;
		++destArr;
		++arr;
	}
}

int* arrayMin(const int* p, size_t size) {

	// ilk elemanýn adresini degiskende tut, diziyi dolas
	int* pmin = p; // dizinin ilk elemaninin adresiyle ilk deger verild,
	for (size_t i = 1; i < size; i++)
	{
		if (p[i] < *pmin) {
			pmin = (int*)&p[i];
		}
	}
	return pmin;
}

void selectionSort(int* arr, size_t size) {
	for (int i = 0; i < size-1; i++) {
		swap(arr + i, arrayMin(arr + i, size - i));
	}
	
}