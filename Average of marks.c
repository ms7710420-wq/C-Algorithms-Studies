/*
 ============================================================================
 Name        : Average.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float m1,m2,m3,m4,m5,average;
	setbuf(stdout,NULL);
	printf("Enter the marks of your subjects");
	scanf("%f%f%f%f%f",&m1,&m2,&m3,&m4,&m5);
	average=(m1+m2+m3+m4+m5)/5;
	printf("Result:%f",average);
	return EXIT_SUCCESS;
}
