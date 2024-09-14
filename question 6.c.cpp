#include <stdio.h>
int main(){
	int num4, num5;
	
	//inset two numbers 
	printf("Enter the first number!");
	scanf("%d",&num4);
	printf("Enter the second number!");
	scanf("%d",&num5);
	 
	 //now compare these two numbers to solve further process                                                              
	 if (num4 > num5){
	 	//if for instance first num is greater 
	 	
	 	if (num4 > 100){
		 
	 	
	 printf("first number is significantly larger.\n");
	}else{
	 	    printf("first number is larger.\n");
   }   
}
    else if (num4 < num5){
	 		//if for instance first number is smaller 
	 	if(num4 < 0){
	 		printf("first number is negative and smaler.\n");
	 		
	}else{
		    printf("first number is smaller.\n");
	}
}
		
	else{
		//if suppose they both are equal
		printf("both numbers (num4 and num5) are equal.\n");
}
		return 0;                                                                   
}
