#include<stdio.h>
struct student{
	char name[20];
	int rollno;
	float marks;
};
main(){
	struct student s[3];
	int i;
	for(i=0;i<3;i++){
		printf("\nEnter details of student %d:\n", i + 1);
		printf("\n Enter the name : ");
		scanf("%s",s[i].name);
		
		printf("\n Enter the roll no : ");
		scanf("%d",&s[i].rollno);
		
		printf("\n Enter the marks : ");
		scanf("%f",&s[i].marks);
		
	}
	printf("\n--- Student Details ---\n");
	for(i=0;i<3;i++){
		printf("\nStudent %d\n", i + 1);
		printf("\n Name of student : %s",s[i].name);
		printf("\n Student roll no : %d",s[i].rollno);
		printf("\n marks of student : %.2f",s[i].marks); 	
		
	}
}
