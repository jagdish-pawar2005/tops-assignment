#include<stdio.h>

int palindrome(int num){
	int rev=0 ,rem;
	int temp=num;
	
	while(num>0){
		rem=num%10;
		rev = rev*10+rem;
		num=num/10;
	}
	return (temp==rev);
}

main(){
	int number;
	printf("Enter a number :- ");
	scanf("%d",&number);
	
	if(palindrome(number)){
		printf("%d is a palindrome .",number);
	}
	else{
		printf("%d is not palindrome .",number);
	}
		
}
