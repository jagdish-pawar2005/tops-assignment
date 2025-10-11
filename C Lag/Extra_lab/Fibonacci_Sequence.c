#include<stdio.h>

int i=0,n,x1=0,x2=1,ans;
int printfib(int n,int x1,int x2){
	if(n==1){
		return 1;
	}
	ans=x1+x2;
	printf("\t %d ",ans);
	printfib(n-1,x2,ans);
}
main(){
	printf("\n Enter num :- ");
	scanf("%d",&n);
	printfib(n,x1,x2);
}
