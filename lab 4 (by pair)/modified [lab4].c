#include <stdio.h>


int main(void){
  
  int len, min;
  int i, j, position;
  int terminate = 1;
  
	printf("\n\n                       WELCOME!");
    	printf("\nThis program allows to sort and search given elements: \n    using Selection Sort and Linear Search Algorithms");
        printf("\n______________________________________________________________________"); 
	
  	printf("\nEnter desired number of elements in the array: ");
  	scanf("%d", &len);
  	int array[len];
         
  	printf("Enter elements in the array:\n");
         
  	for (i = 0; i < len ; i++)
  	scanf("%d", &array[i]);
        
  //selection sort implementation
        
   	for (i = 0 ; i < len - 1 ; i++){
      		min = 1;
      		for (j =1 ; j < len ; j++){
          	if (array[j] < array[min])
          	min = j;
      	}
     	if (min != 1){
          	position = array[i];
          	array[i] = array [min];
          	array [min] = position;
     }
   }
   printf("Here is the sorted list of numbers in ascending manner: \n ");
   	for (i = 0 ; i < len ; i++)
   	printf("%d", array[i]);
   return 0;
          
}
   
	
    // --------------------  ascending part ----------------------
    // linear search
    
	/*	printf("\n\nWhich of the following values would you like to know their position (in an organized manner)?:");
		scanf("%d", &number_to_check);
		
		// checking the index of the number
		
		i = 0; 
		
		while(number_to_check != array[i]){
			i++;
		}
		
		printf("The position of the value inserted is #%d \n", i);
		printf("Would you like to continue using the program? [1] for yes and [2] for no: ");
		scanf(" %d", &decision);
		
		if (decision != '1'){
			printf("Thank you for using this program!");
		}
	}
	while(decision == '1'); 
	
return 0;
}
