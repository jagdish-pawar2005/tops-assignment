#include<stdio.h>
float findAreaCircle(int r){
	float area ;
	area=3.14*r*r;
	return area;
}

main(){
	float ans=findAreaCircle(4);
	printf("\n area = %f",ans);
	printf("\n area = %f",findAreaCircle(4));
}
