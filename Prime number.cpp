#include<stdio.h>
 
int main(){
 	int in, i, r = 0;
 	printf("Enter a integer: ");
 	scanf("%i", &in);
 	for(i = 2; i <= in / 2; i++){
    	if(in % i == 0){
       		r++;
       		break;
   		}
	}
 	if(r == 0){
 		printf("%i is a prime number.\n", in);
	}
 	else{
 		printf("%i is not a prime number.\n", in);
	}   	
 return 0;
}
