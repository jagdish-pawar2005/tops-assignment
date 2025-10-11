#include<stdio.h>
 /*if(condition){
 }
 else if {}
 else*/
 main(){
 	int a,b,c;
 	
 	printf("\nEnter a,b,c:");
 	scanf("%d %d %d",&a,&b,&c);
 	
 	if(a>b && a>c){
 		printf("\n a is max");
	 }
	else if(b>a && b>c){
		printf("\n b is max");
	}
	else{
		printf("\n c is max");
	}
}
