#include<stdio.h>

void main(){
	
	
	int i,j,k;
	
	for(i=1;i<=5;i++){
		
	
		  for(j=1;j<=i;j++){
		  	printf("%d",j);
		  	
		  }
		  for(k=i;j<=5;j++){
		  	printf("  ",j);
		  	
		  }
		  for(j=1;j<=i;j++){
		  	printf("%d",j);
		  	
		  }
		   printf("\n");
	}
}
