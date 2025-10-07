#include<stdio.h>
struct comment{
	char com[20];
};
struct post{
	int postid;
	char title[20];
	struct comment c1;
};
main(){
	struct post p1;
	printf("\n enter postid and title");
	scanf("%d %s",&p1.postid,p1.title);
	
	printf("\n enter comment");
	scanf("%s",p1.c1.com);
	
	printf("\n postid=%d and title=%s",p1.postid,p1.title);
	printf("\n comment=%s",p1.c1.com);
}
