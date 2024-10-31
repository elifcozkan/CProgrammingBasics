#define _CRT_SECURE_NO_WARNINGS
/*
Author	:	ELIF OZKAN
Contact	:	elifcozkan@gmail.com
About	:	This project is about arrays and some basic algorithms
*/

/* Contents
1.	Write a code that creates random arrays and prints them.
2.	Write a code that gives the sum of random array.
3.	Write a code that calculates standard deviation of an array.
4.	Write a code that finds the maximum number of an array.
5.	Write a code that finds runner-up of an array. (Second maximum)
6.	Write a code that reverses the array.
7.	Write a linear search algorithm that takes key from the user.
8.	Write a Bubble sort algorithm.
9.	Write a swap function for the array. (pointer)
10.	Write a Merge array algorithm.
11.	Wrtie a code with Bubble sort which shows odd numbers first then evens.
*/

#include "source.h"
#define SIZE 10
char ans[] = "";

void main(void) {


	NU printf("Write the example you want to see: \n");
	int exNum = 0;
	NU scanf("%d", &exNum);

	switch (exNum)
	{
	case 1:
		NU printf("Write a code that creates random arrays.\n");
		NU printf("Do you want to test it? If yes, write (y)\n");
		NU scanf("%s", &ans);

		randomize();
		int arr[SIZE] = { 0 };

		if (ans[0] == 'y') {
			NU printf("Array with size %d is \n", SIZE);
			randomArray(arr, SIZE);
			printArray(arr, SIZE);
			break;
		}
		else {
			break;
		}

	case 2:
		NU printf("Write a code that gives the sum of random array.\n");
		NU printf("Do you want to test it? If yes, write (y)\n");
		NU scanf("%s", &ans);

		if (ans[0] == 'y') {
			randomArray(arr, SIZE);
			printArray(arr, SIZE);
			NU printf("Sum of array is %d\n", sumArray(arr, SIZE));
			break;
		}
		else {
			break;
		}

	case 3:
		NU printf("Write a code that calculates standard deviation of an array.\n");
		NU printf("Do you want to test it? If yes, write (y)\n");
		NU scanf("%s", &ans);

		if (ans[0] == 'y') {
			randomArray(arr, SIZE);
			printArray(arr, SIZE);
			NU printf("Standard deviation of array is %f\n", standardDeviationOfArray(arr, SIZE));
			break;
		}
		else {
			break;
		}

	case 4:
		NU printf("Write a code that finds the maximum number of an array.\n");
		NU printf("Do you want to test it? If yes, write (y)\n");
		NU scanf("%s", &ans);

		if (ans[0] == 'y') {
			randomArray(arr, SIZE);
			printArray(arr, SIZE);
			NU printf("Maximum of the array is %d\n", maxOfArray(arr, SIZE));
			break;
		}
		else {
			break;
		}

	case 5:
		NU printf("Write a code that finds runner-up of an array. (Second maximum)\n");
		NU printf("Do you want to test it? If yes, write (y)\n");
		NU scanf("%s", &ans);

		if (ans[0] == 'y') {
			randomArray(arr, SIZE);
			printArray(arr, SIZE);
			NU printf("Runner-up of the array is %d\n", runnerUpOfArray(arr, SIZE));
			break;
		}
		else {
			break;
		}

	case 6:
		NU printf("Write a code that reverses the array.\n");
		NU printf("Do you want to test it? If yes, write (y)\n");
		NU scanf("%s", &ans);

		if (ans[0] == 'y') {
			randomArray(arr, SIZE);
			printArray(arr, SIZE);
			NU printf("Reverse of the array is\n");
			reverseOfArray(arr, SIZE);
			printArray(arr, SIZE);
			break;
		}
		else {
			break;
		}

	case 7:
		NU printf("Write a linear search algorithm code that takes key from the user.\n");
		NU printf("Do you want to test it? If yes, write (y)\n");
		NU scanf("%s", &ans);

		if (ans[0] == 'y') {
			NU printf("Write the number you want to find.\n");
			int key = 0;
			randomArray(arr, SIZE);
			printArray(arr, SIZE);
			NU scanf("%d", &key);
			int result = linearSearchArray(arr, SIZE, key);
			if (linearSearchArray(arr, SIZE, key) == 0) {
				printf("The array doesnt contain %d\n", key);
			}
			else {
				printf("The array contains %d at position %d\n", key, result);
			}
			break;
		}
		else {
			break;
		}

	case 8:
		NU printf("Write a Bubble sort algorithm.\n");
		NU printf("Do you want to test it? If yes, write (y)\n");
		NU scanf("%s", &ans);

		if (ans[0] == 'y') {
			randomArray(arr, SIZE);
			printArray(arr, SIZE);
			NU printf("Sorted array is: \n");
			bubbleSortArray(arr, SIZE);
			printArray(arr, SIZE);

		}
		else {
			break;
		}

	case 9:
		NU printf("Write a swap function for the array. (pointer).\n");
		NU printf("Do you want to test it? If yes, write (y)\n");
		NU scanf("%s", &ans);

		if (ans[0] == 'y') {
			randomArray(arr, SIZE);
			printArray(arr, SIZE);
			NU printf("Which positions should change?\n");
			int idx1 = 0, idx2 = 0;
			NU scanf("%d%d", &idx1, &idx2);
			swapPointer(&arr[idx1], &arr[idx2]);
			printArray(arr, SIZE);

		}
		else {
			break;
		}

	case 10:
		NU printf("Write a Merge sort algorithm.\n");
		NU printf("Do you want to test it? If yes, write (y)\n");
		NU scanf("%s", &ans);
		int arr2[SIZE] = { 0 };
		if (ans[0] == 'y') {
			printf("First array is:\n");
			randomArray(arr, SIZE);
			bubbleSortArray(arr, SIZE);
			printArray(arr, SIZE);
			randomArray(arr2, SIZE);
			bubbleSortArray(arr2, SIZE);
			printf("Second array is:\n");
			printArray(arr2, SIZE);
			int arrMerged[2 * SIZE] = { 0 };
			mergeArray(arr, SIZE, arr2, arrMerged);
			printArray(arrMerged, 2 * SIZE);
		}
		else {
			break;
		}

	case 11:
		NU printf("Wrtie a code with Bubble sort which shows odd numbers first then evens.\n");
		NU printf("Do you want to test it? If yes, write (y)\n");
		NU scanf("%s", &ans);

		if (ans[0] == 'y') {
			printf("First array is:\n");
			randomArray(arr, SIZE);
			printArray(arr, SIZE);
			bubbleSortOddEven(arr, SIZE);
			printArray(arr, SIZE);
		}
		else {
			break;
		}
	} // end of switch
}


void randomize(void) {
	srand((unsigned)time(NULL));
}

void randomArray(int* arr, size_t size) {
	for (int i = 0; i < size; i++) {
		arr[i] = myRand(1, 999);
	}
}

void printArray(const int* arr, size_t size) {
	for (int i = 0; i < size; i++) {
		if (i % 5 == 0) {
			printf("\n");
		}
		printf("%d\t", arr[i]);
	}
	printf("\n");
}

int sumArray(const int* arr, size_t size) {
	int sum = 0;
	for (int i = 0; i < size; i++) {
		sum += arr[i];
	}
	return sum;
}

double standardDeviationOfArray(const int* arr, size_t size) {
	int sum = sumArray(arr, size);
	double mean = (double)sum / size;
	double sqrsum = 0;
	for (int i = 0; i < size; i++) {
		sqrsum += ((arr[i] - mean) * (arr[i] - mean));
	}
	return sqrt(sqrsum / (size - 1));
}

int maxOfArray(const int* arr, size_t size) {
	int max = arr[0];
	for (int i = 1; i < size; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	return max;
}

int runnerUpOfArray(const int* arr, size_t size) {
	int max = arr[0];
	int runnerUp = arr[1];
	if (runnerUp > max) {
		max = arr[1];
		runnerUp = arr[0];
	}
	for (int i = 2; i < size; i++) {
		if (arr[i] > max) {
			runnerUp = max;
			max = arr[i];
		}
		else if (arr[i] > runnerUp) {
			runnerUp = arr[i];
		}
	}
	return runnerUp;
}

void reverseOfArray(int* arr, size_t size) {
	for (int i = 0; i < size / 2; i++) {
		int temp = arr[i];
		arr[i] = arr[size - 1 - i];
		arr[size - 1 - i] = temp;
	}
}

int linearSearchArray(const int* arr, size_t size, int key) {
	for (int i = 0; i < size; i++) {
		if (arr[i] == key) {
			return i;
		}
	}
	return 0;
}

void bubbleSortArray(int* arr, size_t size) {
	for (int i = 0; i < size - 1; i++) {
		for (int j = 0; j < size - 1 - i; j++) {
			if (arr[j + 1] < arr[j]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

void swapPointer(int* num1, int* num2) {
	int temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}


void mergeArray(const int* arr1, size_t size, const int* arr2, int* arrMerged) {
	int idx_a = 0;
	int idx_b = 0;

	for (int i = 0; i < 2 * SIZE; i++)
	{
		if (idx_a == SIZE) {
			arrMerged[i] = arr2[idx_b++];
		}
		else if (idx_b == SIZE) {
			arrMerged[i] = arr1[idx_a++];
		}
		else if (arr1[idx_a] < arr2[idx_b]) {
			arrMerged[i] = arr1[idx_a];
			++idx_a;
		}
		else {
			arrMerged[i] = arr2[idx_b++];
		}
	}
}

void bubbleSortOddEven(int* arr, size_t size) {
	for (int i = 0; i < size - 1; i++) {
		for (int j = 0; j < size - 1 - i; j++) {

			if (((arr[j] % 2 == 0) && arr[j + 1] % 2 != 0) ||
				(arr[j] % 2 == arr[j + 1] % 2 && arr[j] > arr[j + 1])) {
				swapPointer(&arr[j], &arr[j + 1]);
			}

		}
	}
}