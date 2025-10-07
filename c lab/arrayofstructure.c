#include<stdio.h>
struct subject{
	int sid;
	char subname[20];
};
main(){
	struct subject s[3];
	int i;
	for(i=0;i<3;i++){
		printf("\n Enter s[%d] sid and subjectname",i);
		scanf("%d %s",&s[i].sid,s[i].subname);
	}
	for(i=0;i<3;i++){
	printf("\n sid=%d and subname=%s ",s[i].sid,s[i].subname);0
	}
	
}
