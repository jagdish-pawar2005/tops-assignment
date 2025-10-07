#include<stdio.h>
main(){
	int n,i,factorial=1;
	printf("\n Enter the number");
	scanf("%d",&n);
	
	if(n<0){
		printf("");
	}
	else{
		for(i=1;i<=n;i++){
			factorial=factorial*i;
			}
		printf("\n factorial=%d ",factorial);
	}
}























//#include<stdio.h>
//main(){
//	int x1=0,x2=1,ans,n;
//	printf("\n Enter a number:");
//	scanf("%d",&n);
//	
//	while(n!=0){
//		ans=x1+x2;
//		printf("\t%d",ans);
//		x1=x2;
//		x2=x1;
//		n--;
//	}
//}
