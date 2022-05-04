#include <stdio.h>  
	
int main(void){
	int max, array[max], i, j, min, arr, new_num, number_to_check;    //declared the variables
	char decision; 
	  
	printf("-----------------------------------------------------");  // improve readability of the program
  	printf("\n\t\t Greetings, dear user!");
  	printf("\n This program is about sorting and searching using: \n Selection Sort and Linear Search.\n");
  	printf("-----------------------------------------------------");
  	
	do{                                                               // do while condition
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
			printf("Number %d: ", i+1);
			scanf("%d", &array[i]);
			
			    // when user inserted a negative value
				while (array[i] < 0){
					printf("You have inserted a negative number. \n");  
					printf("Number %d: ", i+1);                 // ask user to input again
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
		
		printf("\nSorted List:\n << ");     // displays numbers in ascending order
		for (i = 0 ; i < max ; i++)
		   printf("%d ", array[i]);
			
		printf(" >> ");	
			
			
	    // Linear Search
		printf("\nLinear Search:\n");		
		printf("Which of the following numbers would you like to look for?:");  // ask input from user
		scanf("%d", &number_to_check);
			
		// checking the index of the number
		i = 0; 
		
		while(number_to_check != array[i]){   // finding the equivalent index of the inserted value from user
			i++;
		}
			
		if (i > max){                              
			printf("Number you have inserted does not exist \n");    // display error message for user's invalid input
		}
		else{
			printf("The index of the value inserted is %d \n", i);   // print the value of index
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
