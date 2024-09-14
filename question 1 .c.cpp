#include <stdio.h>
int main(){
	int marks;
	printf("Enter the student's marks (0-100):");
	scanf("%d",&marks);

/*(grading system policy	
90-100: A
80-89: B
70-79: C  
60-69: D
Below 60: F*/ 

   if(marks >=90 && marks <=100){
      printf("Grade: A\n");
    }else if(marks >=80 && marks <=89){
      printf("Grade: B\n");
    }else if(marks >=70 && marks <=79){
      printf("Grade: C\n");
    }else if (marks >=60 && marks <=69){
	
      printf("Grade: D\n");
    }else if ( marks <60 && marks >=0){
	  printf("Grade: F\n");
    }else {
  	printf("Invalid marks! please enter the marks between 0 and 100./n");
    }
    

    return 0;
   }

