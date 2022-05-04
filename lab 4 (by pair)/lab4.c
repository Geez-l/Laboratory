#include <stdio.h>
	
	
	int main(void){
		int elements, list[elements], number_to_check;
		int i, j, min, max, arr; 
		char decision; 
	
	
	do{                                          // hehe recom ko na do-while yung gagamitin dito hehe. pero pwede pa namang magbago if may mas better hehe
		len = 0;
		printf("\t\t Greetings, dear user!");
 		printf("\n\t This program is about sorting and searching using: \n\t Selection Sort and Linear Search.\n");
		printf("\nEnter number of elements in the array: ");
		scanf("%d", &elements);
		
		for(i = 1; i <= elements; i++){          // isa-isa pag-s-save ng digits?? p.s. naglagay muna ako ng temporary na pagsave sa array para marun ko hehe
			printf("Number %d: ", i);
			scanf("%d", &list[i]);
		}
		// selection sort implementation
		
		for (i = 0 ; i < elements - 1 ; i++){
			min = 1;
			for (j = 1 ; j < elements ; j++){
				if (list[j] < list [min]);
				min = j;
		}
		if (min != 1){
			arr = list[i];
			list[i] = list[min];
			list[min] = arr;
		}
	}
	printf("Here is the sorted list in ascending manner: \n");
	for (i = 0 ; i < elements ; i++)
	printf("%d", list[i]);
	
    // --------------------  ascending part ----------------------
    // linear search
    
		printf("Which of the following values would you like to know their position (in an organized manner)?:");
		scanf("%d", &number_to_check);
		
		// checking the index of the number
		
		i = 0; 
		
		while(number_to_check != list[i]){
			i++;
		}
		
		printf("The position of the value inserted is #%d \n", i);
		printf("Would you like to continue using the program? \"y\" for yes and \"n\" for no: ");
		scanf(" %c", &decision);
		
		if (decision != 'n'){
			printf("Thank you for using this program!");
		}
	}
	while(decision == 'y');
	
}

// haha hindi pa rin ako sure kung tama ba pagkakaintindi ko sa gagawin HAHAHAHAKAMSDKMSDK PAYTING PA REN AHUEHUE
// doon ako sa kabilang file mag start then compile nalang natin if ever na medj okay na parts natin. IDK na kung ano uunahin sa subs if discrete ba or lab
