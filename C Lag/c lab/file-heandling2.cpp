
#include<stdio.h>
main(){
	FILE *fp;
	char username[20];
	char email[20];
	int contact,i;
	
	fp=fopen("User.csv","w");

	for (i=1;i<=3;i++){
		printf("\n Enter username email and contact");
		scanf("%s %s %d",username,email,&contact);
		fprintf(fp,"%s,%s,%d\n",username,email,contact);
	}
	fclose(fp);
	
//	fp=fopen("User.csv","r");
//	printf("\nsername \tEmail \tcontact\n");
//	while((ch=getc(fp))!=EOF){
//		if(ch==','){
//			printf("\t");
//			continue;
//		}
//		printf("%c",ch);
//	}
//	fclose(fp)

}

