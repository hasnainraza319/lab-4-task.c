#include <stdio.h>
int main(){
float discount, original_amount, final_amount, saved_amount;
	
	printf("Enter the  original amount:");
	scanf("%f", &original_amount );
	// caculate amount on the basis of mentioned discount
	if (original_amount < 1500){
	     discount = 0.07;
   }else if (original_amount >=1500 && original_amount < 3000){
        discount = 0.12;
   }else if (original_amount >=3000 && original_amount <5000){
	    discount = 0.22;
	
	}else {
	 discount = 0.30;
   }
      
       saved_amount = original_amount * discount;
       final_amount = original_amount - saved_amount;
       

	// now print the original amount,save amount final amount after implementing discountss
	 printf("original_amount: %.2f\n",original_amount);
	 printf("saved_amount: %.2f\n",saved_amount);
	 printf("final_amount: %.2f\n",final_amount);
	 
	return 0;
}
	 
       
