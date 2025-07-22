#include<stdio.h>
int isprime(int no);
void main(){
	int no;	
	printf("Enter number :");
	scanf("%d",&no);
	
	int res =evenodd(no);
	
	if (res==0){
		printf("Number is even");
	}
	else{
		printf("Number is odd");
	}
}
int evenodd( int no){
	
	if(no%2==0){
		return 0;
	}
	return 1;
	
}

