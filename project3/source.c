#define _CRT_SECURE_NO_WARNINGS
/*
Author	:	ELIF OZKAN
Contact	:	elifcozkan@gmail.com
About	:	This project is about arrays and some basic algorithms
*/

/* Contents
1.	Write a code that takes all the input lines till the new line comes.
2.	Write a code that calculates the length of input string.
3.	Write a code that add exclamation at the end of the string and writes it to standard input.
4.	Write a code that counts the specific character.
5.	Write a code that compares two given strings like strcmp.
6.	Write a code that takes string from user and deletes specified character from that string.
7.	Write a code that reverses the taken string.
8.	Write a code that gives the number of words given.
*/

#include "source.h"
#define SIZE 10
#define SIZESTRING 1000

char ans[] = "";
char userInput[SIZESTRING];

void main(void) {


	NU printf("Write the example you want to see: \n");
	int exNum = 0;
	NU scanf("%d", &exNum);

	switch (exNum)
	{
	case 1:
		NU printf("Write a code that takes all the input lines till the new line.\n");
		NU printf("Do you want to test it? If yes, write (y)\n");
		NU scanf("%s", &ans);

		if (ans[0] == 'y') {
			freeStandardInputBuffer();			
			stringGets(userInput);
			NU printf("You wrote [%s]\n", userInput);

			NU printf("\n");
			break;
		}
		else {
			break;
		}

	case 2:
		NU printf("Write a code that calculates the length of input string.\n");
		NU printf("Do you want to test it? If yes, write (y)\n");
		NU scanf("%s", &ans);

		if (ans[0] == 'y') {
			freeStandardInputBuffer();
			stringGets(userInput);
			NU printf("You wrote [%s]\n", userInput);
			NU printf("String length is %d\n", stringLength(userInput));	
			break;
		}
		else {
			break;
		}

	case 3:
		NU printf("Write a code that add exclamation at the end of the string and writes it to standard input.\n");
		NU printf("Do you want to test it? If yes, write (y)\n");
		NU scanf("%s", &ans);

		if (ans[0] == 'y') {
			freeStandardInputBuffer();
			stringGets(userInput);
			NU printf("You wrote [%s]\n", userInput);
			addExclamation(userInput);
			NU printf("Output is [%s]\n", userInput);
			break;
		}
		else {
			break;
		}

	case 4:
		NU printf("Write a code that counts the specific character.\n");
		NU printf("Do you want to test it? If yes, write (y)\n");
		NU scanf("%s", &ans);

		if (ans[0] == 'y') {
			freeStandardInputBuffer();
			stringGets(userInput);
			NU printf("You wrote [%s]\n", userInput);
			NU printf("Which character you want to count?\n");
			char userCh;
			NU scanf("%c", &userCh);
			NU printf("[%s] has %d %c's\n", userInput, characterFind(userInput, userCh),userCh);
			break;
		}
		else {
			break;
		}

	case 5:
		NU printf("Write a code that compares two given strings like strcmp.\n");
		NU printf("Do you want to test it? If yes, write (y)\n");
		NU scanf("%s", &ans);

		if (ans[0] == 'y') {
			freeStandardInputBuffer();
			stringGets(userInput);
			NU printf("You wrote [%s]\n", userInput);
			char userInput2[SIZESTRING];
			stringGets(userInput2);
			
			if (compareString(userInput, userInput2)) {
				printf("Strings are the same!\n");
			}
			else {
				printf("Strings are not the same!\n");
			}
			
			break;
		}
		else {
			break;
		}

	case 6:
		NU printf("Write a code that takes string from user and deletes specified character from that string.\n");
		NU printf("Do you want to test it? If yes, write (y)\n");
		NU scanf("%s", &ans);

		if (ans[0] == 'y') {
			freeStandardInputBuffer();
			stringGets(userInput);
			NU printf("You wrote [%s]\n", userInput);
			char ch;
			NU printf("Which character you want to remove?\n Please write: ");
			NU scanf("%c", &ch);
			char strDest[SIZESTRING];
			eraseCharacter(userInput, strDest, ch);
			NU printf("%c is erased and now it is [%s]\n", ch, strDest);
			
			break;
		}
		else {
			break;
		}

	case 7:
		NU printf("Write a code that reverses the taken string.\n");
		NU printf("Do you want to test it? If yes, write (y)\n");
		NU scanf("%s", &ans);

		if (ans[0] == 'y') {
			freeStandardInputBuffer();
			stringGets(userInput);
			NU printf("You wrote [%s]\n", userInput);			
			reverseString(userInput, SIZESTRING);
			NU printf("Now it is [%s]\n", userInput);

			break;
		}
		else {
			break;
		}

	case 8:
		NU printf("Write a code that gives the number of words given.\n");
		NU printf("Do you want to test it? If yes, write (y)\n");
		NU scanf("%s", &ans);

		if (ans[0] == 'y') {
			freeStandardInputBuffer();
			stringGets(userInput);
			NU printf("You wrote [%s]\n", userInput);
			NU printf("You wrote %d words.\n",numberOfWords(userInput));

			break;
		}
		else {
			break;
		}

	} // END OF SWITCH
}

/*	Function freeStandardInputBuffer
	empties the standard buffer
	parameters void
	returns void
*/
void freeStandardInputBuffer(void) {
	for (int ch = getchar(); ch != '\n'; ch = getchar()) {
		;
	}
}

/*	Function stringGets
	gets strings from standard input
	parameters address of string
	returns void
*/
void stringGets(char* p) {
	NU printf("Please write something \n");
	int ch;
	while ((ch = getchar()) != '\n' && ch != EOF) {
		*p++ = (char)ch;
	}
	*p = '\0';
}

/*	Function stringLength
	calculates length of string
	parameters address of string
	returns length (int)
*/
int stringLength(char* ch) {
	NU printf("Please write a string to calculate its length\n");
	int length = 0;
	for (int i = 0; ch[i] != '\0'; i++) {
		length++;		
	}
	return length;
}

/*	Function addExclamation
	add exclamation (!) to the end of the string
	parameters address of string
	returns void
*/
void addExclamation(char* ch) {
	int i;
	for (i = 0; ch[i] != '\0'; i++)
		;
	ch[i] = '!';
	ch[i + 1] = '\0';
}

/*	Function characterFind
	finds desired character from a string
	parameters address of string and a character key
	returns the number of character used
*/
int characterFind(const char* ch, const char key) {
	int cnt = 0;
	for (int i = 0; ch[i] != '\0'; i++) {
		if (toupper(ch[i]) == toupper(key)) {
			cnt++;
		}
	}
	return cnt;
}

/*	Function compareString
	compares two strings
	parameters address of strings 
	returns 1 if the strings are the same,
	0 otherwise
*/
int compareString(const char* str1, const char* str2) {
	for (int i = 0; i < SIZESTRING; i++) {
		if (str1[i] != str2[i]) {
			return 0;
		}
	}
	return 1;
}

/*	Function eraseCharacter
	takes text, deletes the desired character and creates new text
	parameters address of strings and desired character
	returns void
*/
void eraseCharacter(char* strIn, char* strDest, const char ch){
	int a = 0;
	int i;
	for ( i= 0; strIn[i] != '\0'; i++) {
		if (strIn[i] != ch) {
			strDest[a] = strIn[i];
			a++;
		}
	}
	strDest[a] = '\0';
}

/*	Function reverseString
	takes text and reverse it
	parameters address of string and the size of it
	returns void
*/
void reverseString(char* str, size_t size) {
	int len = 0;
	for (int j = 0; str[j] != '\0'; j++) {
		len++;
	}

	for (int i = 0; i < len / 2; i++) {
		int temp = str[i];
		str[i] = str[len - 1 - i];
		str[len - 1 - i] = temp;
		 
	}
}

/*	Function numberOfWords
	finds the number of words written
	parameters address of string
	returns number of words
*/
int numberOfWords(const char* str) {
	int wordCnt = 0;
	int flag = 0;
	for (int i = 1; str[i] != '\0'; i++) {
		if (str[i] == ' ' && str[i-1] != ' ') {
			wordCnt++;
		}
	}
	return wordCnt+1;
}