/*
 ============================================================================
 Name        : Sum.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,limit,values[100],sum=0;
	setbuf(stdout,NULL);
	printf("Enter limit");
	scanf("%d",&limit);
	printf("Enter values");
	for(i=0;i<limit;i++){
		scanf("%d",&values);
	}
	for(i=0;i<limit;i++){
		sum=sum+values[i];
	}
	printf("Result:%d\n",sum);
	return EXIT_SUCCESS;
}
