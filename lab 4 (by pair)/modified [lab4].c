#include <stdio.h>
		
	int main(void){
		int elements, array[1000], number_to_check;
		int i, j, min, max, position; 
		int decision; 
	
	
	do{                                          
		printf("\t\t Greetings, dear user!");
 		printf("\n\t\t This program perform sorting and searching using:\n\t Selection Sort and Linear Search.\n");
		
		printf("\nEnter number of elements in the array: ");
		scanf("%d", &elements);
		int array[elements];
		
		for(i = 1; i <= elements; i++)        
			printf("Number %d: ", i);
			scanf("%d", &array[i]);
		
		// selection sort implementation 
		
		for (i = 0 ; i < elements - 1 ; i++){
			min = 1;
			for (j = 1 ; j < elements ; j++){
				if (array[j] < array [min]);
				min = j;
		}
		if (min != 1){
			position = array[i];
			array[i] = array[min];
			array[min] = position;
		}
	}
	printf("Here is the sorted list in ascending manner: \n");
	for (i = 0 ; i < elements ; i++)
	printf("%d", array[i]);
	
    // --------------------  ascending part ----------------------
    // linear search
    
		printf("\n\nWhich of the following values would you like to know their position (in an organized manner)?:");
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
	
}
