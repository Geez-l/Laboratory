#include <stdio.h>
	
	
	int main(void){
		int elements, list[elements], number_to_check;
		int i, j, min, max, array; 
		char decision; 
	
	
	do{                                          
		printf("\t\t Greetings, dear user!");
 		printf("\n\t This program is about sorting and searching using: \n\t Selection Sort and Linear Search.\n");
		printf("\nEnter number of elements in the array: ");     // ask user for input
		scanf("%d", &elements);
		
		for(i = 1; i <= elements; i++){                           
			printf("Number %d: ", i);
			scanf("%d", &list[i]);                           // save the inserted values of the user in an array.
		}
		// selection sort implementation
		
		for (i = 0 ; i < elements - 1 ; i++){
			min = 1;
			for (j = 1 ; j < elements ; j++){
				if list[j] < list [min])
				min = j;
		}
		if (min != 1){
			
    
    		// Linear Search
			
		printf("Which of the following values would you like to know their position (in an organized manner)?:");  // ask input from user
		scanf("%d", &number_to_check);
		
		// checking the index of the number
		i = 0; 
	
		while(number_to_check != list[i]){
			i++;
		}
		
		if (i > elements){
			printf("Number you have inserted does not exist \n");
		}
		else{
			printf("The position of the value inserted is #%d \n", i);   // print the index of the value given by user
		}
		
		do{
			printf("Would you like to continue using the program? \"y\" for yes and \"n\" for no: ");
			scanf(" %c", &decision);
			
			if (decision == 'n'){
				printf("Thank you for using the program!");  // end the program 
			}
			else if (decision != 'n' & decision != 'y'){
				printf("You have inserted a wrong letter \n");
			}
			
		} while (decision != 'n' & decision != 'y');  // give user a second chance if s/he inserted neither n nor y. 
	
	}
	while(decision == 'y');  // the program will continue to run until the user wants to
	
}

// haha hindi pa rin ako sure kung tama ba pagkakaintindi ko sa gagawin HAHAHAHAKAMSDKMSDK PAYTING PA REN AHUEHUE
// doon ako sa kabilang file mag start then compile nalang natin if ever na medj okay na parts natin. IDK na kung ano uunahin sa subs if discrete ba or lab
