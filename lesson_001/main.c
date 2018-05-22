#include <stdio.h>

#define ARRARY_SIZE 100

int sum (int a, int b);
int main(){
	char content [ARRARY_SIZE]="Hello c."; 
	printf("%s\n",content);
	int a,b,result;
	a = 10 ;
	b = 200;
	result =sum(a,b);
	printf("result is %d .\n",result);
	
}

int sum(int a, int b){
	return a+b;
}