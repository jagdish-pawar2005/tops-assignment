#include<stdio.h>
void main(){
	int math,sci,phy,che,eng,marathi,total;
	float per;
	printf("\n Enter the subject marks");
	printf("\n Enter the mathematics marks :- ");
	scanf("%d",&math);
	printf("\n Enter the science marks :- ");
	scanf("%d",&sci);
	printf("\n Enter the physics marks :- ");
	scanf("%d",&phy);
	printf("\n Enter the chemistry marks :-");
	scanf("%d",&che);
	printf("\n Enter the english marks :-");
	scanf("%d",&eng);
	printf("\n Enter the marathi marks :-");
	scanf("%d",&marathi);
	
	if(math < 35 || sci < 35 || phy < 35 || che < 35 || eng < 35 || marathi < 35){
		printf("\nResult: FAIL");	
	}
	else{
		total=math+sci+phy+che+eng+marathi;
	printf("\n Total :- %d",total);
	per=(total/600.0)*100;
	printf("\n Percentage = %.2f", per);
	
	if(per>90){
		printf("\nGrade A");
	}
	else if(per>75 && per<=90){
		printf("\nGrade B");
	}
	else if(per>50 && per<=75){
		printf("\nGrade C");
	}
	else if(per>=35 && per<=50){
		printf("\nGrade D");
	}
	else{
		printf("\nstatus is fail..");
	}
	}
	
	
}
