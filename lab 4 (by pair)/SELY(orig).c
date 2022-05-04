#include <stdio.h>
	
int main(void){
	int max, array[max], i, j, min, arr, selection = 0, new_num, position, number_to_check;
	char decision; 
	  
	printf("Greetings, dear user!\n");
	printf("\nThis program is about sorting and searching using: \nSelection Sort and Linear Search.\n");
	
	do{
		do{
			printf("\nEnter the number of elements in the array: ");
			scanf("%d", &max);
			
			// in case the user inserted a negative number
			if(max < 0){
				printf("Please insert a positive number!");
			}
		} while (max < 0);  // the program will ask the user until s/he inserted a positive number
		         
		printf("Enter positive integers:\n");                           // ask for the value of elements in an array
		      
			     
		for (i = 0; i < max ; i++){
			scanf("%d", &array[i]);
			
			    // when user inserted a negative value
				while (array[i] < 0){
					printf("You have inserted a negative number. \n");  
					printf("Enter a positive integer!:\n");                 // ask user to input again
					scanf("%d", &new_num);
				array[i] = new_num;
			}
			}

		
		//selection sort implementation
		        
		for (i = 0 ; i < max - 1 ; i++){
		    min = i;
		    for (j = i + 1 ; j < max ; j++){
		        if (array[j] < array[min])
		        min = j;
		    }
		
		    if (min != i){
		        arr = array[i];
		        array[i] = array [min];
		        array [min] = arr;
		    }
		}
		
		printf("Here is the sorted list of numbers:\n");
		for (i = 0 ; i < max ; i++)
		   printf("%d ", array[i]);
			
		printf("\n");	
			
			
	    // Linear Search
				
		printf("\nWhich of the following numbers would you like to know its position?:");  // ask input from user
		scanf("%d", &number_to_check);
			
		// checking the index of the number
		i = 0; 
		
		while(number_to_check != array[i]){   // finding the equivalent index of the inserted value from user
			i++;
		}
			
		if (i > max){
			printf("Number you have inserted does not exist \n");
		}
		else{
			printf("The position of the value inserted is #%d \n", i+1);   // print the index of the value
		}
			
			do{
				printf("\nWould you like to continue using the program? \"y\" for yes and \"n\" for no: ");
				scanf(" %c", &decision);
				
				if (decision == 'n'){
					printf("Thank you for using the program!");  // end the program 
				}
				else if (decision != 'n' & decision != 'y'){
					printf("You have inserted a wrong letter \n");
				}
				
			} while (decision != 'n' & decision != 'y');  // give user another chance if s/he inserted neither n nor y. 
		
	}
	while(decision == 'y');  // the program will continue to run until the user wants to
	
}
