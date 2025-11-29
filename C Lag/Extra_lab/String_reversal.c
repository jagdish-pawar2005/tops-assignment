#include<stdio.h>
main(){
	char str[10];
	printf("Enter a string :- ");
	scanf("%s",str);
	printf("\nstring :- %s ",str);
	printf("\nstring revers :- %s",strrev(str));
}
