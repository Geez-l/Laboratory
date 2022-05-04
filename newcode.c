#include <stdio.h>

int input_max[1000];                                                   //problem: can't access indiv array

int main(void){

	int selectionSort, linearSearch, terminate = 1;

	printf("-----------------------------------------------------");
  	printf("\n\t\t Greetings, dear user!");
  	printf("\n This program is about sorting and searching using: \n Selection Sort and Linear Search.\n");
  	printf("-----------------------------------------------------");

	while (terminate == 1){
		int length;

  		printf("\nEnter the desired number of elements in the array: ");
  		scanf("%d", &length);

  		int arr[length] , i; 
  		printf("\nPlease Enter Elements in the Array: ");
  		

  		int num, elements;
  		for (int num = 0 ;  num < length; num++){
  			printf("\nElement No. :  %d", ++elements);
            		scanf("%d", &arr[i]);
  		}
  		printf("\nNumber of elements is %d", elements);

  		int j, position, temp, intput_max[1000];
  		printf("\nSelection Sort Algorithm.");

  		for (int i = 0; i < (elements-1); i++){
  			position = i;

  			for (j=1+1 ; j < elements ; j++){
  				if (input_max[position] > input_max[j])
  					position = j;
  			}
  			if (position != i){
  				temp = input_max[i];
  				input_max[i] = input_max[position];
  				intput_max[position] = temp;

  			}

  		}
  		printf("Sorted List in Ascending Manner: \n ");
  		for (i=0 ; i <elements; i++){
  			printf("%d", input_max[i]);

  		}
  		
  		}
  		



}
