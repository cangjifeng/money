#include <stdio.h>

#define ARRARY_SIZE 100

int demo ();

int pointToArray();

int main(){
	// demo();
	pointToArray();
	
	return 0;
	
}

/**
* define a pointer  p_num , 
* and toward the address of variable num
*/
int demo(){
	// 定义一个指针
	int * p_num;
	int num;
	num = 100;
	printf("value of num is %d\n",num);
	printf("address of num is %d\n",&num);
	// 给指针赋值，把 p_num 的地址指向 num 的地址
	p_num = &num;
	// 取指针的值
	printf("value of p_num is %d\n",*p_num);
	// 取指针的值 即num的值
	printf("address of p_num is %d\n",&p_num);
	
	return -1;
}

int pointToArray(){
	char str [200] = " this is a array , and pointer p_str will use it .";
	
	char * p_str [200];
	p_str[0] = &str[0];
	
	printf("value of p_str is %s\n",*p_str);
	printf("address of p_str is %d\n",&p_str);
	printf("out of str is %d\n",p_str); //这个输出和上面是一样的
	printf("address of str is %d\n",&str);
	
	printf("*****************************************************\n");
	
	int book_id [3] = {10,20,30};
	int * p_book_id = NULL;
	p_book_id = book_id;
	printf("%d\n",*p_book_id);
	return -1;
	
}
