#include<stdio.h>
main(){
	int a=10;
	int *ptr;
	ptr=&a;
	
	printf("\n address= %p and value =%d",ptr,*ptr);
	*ptr=90;
	printf("\n a=%d",a);
}
