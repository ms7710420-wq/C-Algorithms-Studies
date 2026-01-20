/*
 ============================================================================
 Name        : Function.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void){
		int a,b;
		setbuf(stdout,NULL);
		printf("Enter 2 numbers");
		scanf("%d%d",&a,&b);

		sum(a,b);

		return EXIT_SUCCESS;
	}
		void sum(int num1,int num2){
			int Result;
			Result=num1+num2;
			printf("sum is:%d\n",Result);
		}
