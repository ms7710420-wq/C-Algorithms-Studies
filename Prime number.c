/*
 ============================================================================
 Name        : Prime.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n=10,i,flag=0;
	setbuf(stdout,NULL);
	printf("Enter a number");
	scanf("%d");
	for (i=2;i<n/2;i++){
		if(n%i==0){
			flag=0;
			break;
		}
	}
	if(flag==0){
		printf("prime number");
	}else{
		printf("not prime number");
	}
	return EXIT_SUCCESS;
}
