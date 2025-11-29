#include<stdio.h>
int i,j,max,min,temp;

void getArray(int a[10]){
	for(i=0;i<10;i++){
		printf("\n Enter a[%d]= ",i);
		scanf("%d",&a[i]);
	}
}
void printArray(int a[10]){
	for(i=0;i<10;i++){
		printf("\n a[%d]= %d ",i,a[i]);
		
	}
}
void maxArray(int a[10]){
	max=a[0];
	for(i=0;i<10;i++){
		if(a[i] > max){
            max = a[i];
        }
	}
	 printf("\nMaximum element in array = %d", max);
}
void minArray(int a[10]){
	min=a[0];
	for(i=0;i<10;i++){
		if(a[i] < min){
            min = a[i];
        }
	}
	printf("\nManimum element in array = %d", min);
}
//	
void aceArray(int a[10]){
	for(i=0;i<10;i++){
		for(j=i+1;j<10;j++){
			if(a[i]>a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("\n === Ascending order ===");
	for(i=0;i<10;i++){
		printf("\n a[%d]= %d ",i,a[i]);
		
	}
	
} 
void main(){
	int a[10];

	getArray(a);
	printArray(a);
	maxArray(a);
	minArray(a);
	aceArray(a);
}
