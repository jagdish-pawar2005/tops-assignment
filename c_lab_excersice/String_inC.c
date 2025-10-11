#include<stdio.h>
#include<string.h>
main(){
	char str1[20],str2[20];
	
	printf("Enter the first string : ");
	gets(str1);
	
	printf("Enter second string : ");
	gets(str2);
	
	strcat(str1,str2);
	
	printf("\nConcatenated String: %s\n", str1);
    printf("Length of Concatenated String: %lu\n", strlen(str1));
}
