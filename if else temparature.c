/*
 ============================================================================
 Name        : if.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int temp;
	setbuf(stdout,NULL);
	printf("Enter current temperature");
	scanf("%d",&temp);
	if(temp<18){
		printf("heater is on");
	}else if(temp<10){
		printf("heater is on(with pipe protection)");
	}else{
		printf("heater is off");
	}

	return EXIT_SUCCESS;
}
