#include <stdio.h>
int main(){
	int hour;
	// asking user to input time in hours format
	printf("Enter the hour in 24-hour format (0-23):");
	scanf("%d",&hour);
	if (hour >=6 && hour <12){
        printf("Good Morning\n");
	}else if (hour >=12 && hour <18){
	    printf (" Good Afternoon\n");
    }else if (hour >= 18 && hour <24){
    	printf("Good Evening\n");
    }else if (hour <0 && hour <5){
	     printf("Good Night/n");
   }else{
     	printf("nvalid hour format! please enter a value valid hor format");
   	
}
	    return 0;
}
	 
