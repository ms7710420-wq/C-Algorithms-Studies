/*
 ============================================================================
 Name        : Search.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int limit,i,values[100],Searchkey,flag=0;
	setbuf(stdout,NULL);
	printf("Enter limit");
	scanf("%d",&limit);

	printf("Enter values");
	for(i=0;i<limit;i++){
		scanf("%d",&values[i]);
	}
	printf("please enter search key");
	scanf("%d",&Searchkey);

	for(i=0;i<limit;i++){
		if(Searchkey==values[i]){
			flag=1;
			break;
		}
	}
	if(flag==1){
		printf("value found at position %d",i+1);
	}else{
		printf("value not found");
	}
	return EXIT_SUCCESS;
}
