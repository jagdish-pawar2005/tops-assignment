#include<stdio.h>
struct student{
	int rollno;
	char name[20];
	char email[20];
	float per;
};

main(){
struct student s1;

printf("\n Enter enroll name");
scanf("%d %s",&s1.rollno,s1.name);

printf("\n Enter email per");
scanf("%s %f",s1.email,&s1.per);

printf("\n enroll=%d",s1.rollno);
printf("\n name=%s",s1.name);
printf("\n email=%s",s1.email);
printf("\n per=%f",s1.per);
}
