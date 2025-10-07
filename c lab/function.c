#include<stdio.h>
void printHello();
void add(int, int);
int squareFind(int);
main(){
	int sq;
	printHello();
	add(12, 15);
	sq=squareFind(5);
	printf("\n sq=%d",sq);
}
void printHello(){
	printf("hello");
}
void add(int a,int b){
	int c=a+b;
	printf("\naddition :%d",c);
}
int squareFind(int num){
	return num*num;
}
