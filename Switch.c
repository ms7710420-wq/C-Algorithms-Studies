/*
 ============================================================================
 Name        : Switch.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int choice;
	setbuf(stdout,NULL);
	printf("1 for Watch \n2 for Smart phone \n3 for Laptop \n4 for i phone \nEnter your choice");
	scanf("%d",&choice);
	switch(choice){
	case 1:
		printf("You have selected Watch");
		break;
	case 2:
		printf("You have selected Smart phone");
		break;
	case 3:
		printf("You have selected Laptop");
		break;
	case 4:
		printf("You have selected i phone");
		break;
	default:
		printf("You are a foolish guy");
	}
	return EXIT_SUCCESS;
}
