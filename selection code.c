#include <stdio.h>

int inputMax[1000];

int main(void){
  
  int selection = 0, i,max, arr, min;
  int linearSearch, j;
  int terminate = 1;
  
  printf("\n\t\t Greetings, dear user!");
  printf("\n This program is about sorting and searching using: \n Selection Sort and Linear Search.\n");
         
  printf("Enter the number of elements in the array: ");
  scanf("%d", &max);
  int array[max];
         
  printf("Enter positive integers:\n");
         
  for (i = 0; i < max ; i++)
  scanf("%d", &array[i]);
        
  //selection sort implementation
        
   for (i = 0 ; i < max - 1 ; i++){
      min = 1;
      for (j =1 ; j < max ; j++){
          if (array[j] < array[min])
          min = j;
      }
     if (min != 1){
          arr = array[i];
          array[i] = array [min];
          array [min] = arr;
     }
   }
   printf("Here is the sorted list of numbers: \n ");
   for (i = 0 ; i < max ; i++)
   printf("%d", array[i]);
   return 0;
          
}
   
          
     
         
         
