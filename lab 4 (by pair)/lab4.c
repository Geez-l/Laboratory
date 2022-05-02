#include <stdio.h>

	int len, i, list[len], number_to_check;
	char decision;
	
	do{                                          // hehe recom ko na do-while yung gagamitin dito hehe. pero pwede pa namang magbago if may mas better hehe
		len = 0;
		
		printf("Enter a number: ");
		scanf("%d", &len);
		
		for(i = 1; i <= len; i++){          // isa-isa pag-s-save ng digits?? 
			printf("Number %d: ", i);
			scanf("%d", &list[i]);
		}
		
    // --------------------  ascending part ----------------------
    
    
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
		
		if (decision != 'y'){
			printf("Thank you for using this program!");
		}
	}
	while(decision == 'y');
	
}
