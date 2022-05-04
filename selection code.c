#include <stdio.h>


int main(void){
  
  int len, min;
  int i, j, position;
  int terminate = 1;
  
  printf("--------------------------------------------------------------------------------------------");
  printf("\n\t\t Greetings, dear user!");
  printf("\n This program is about sorting and searching using: \n Selection Sort and Linear Search.\n");
  printf("---------------------------------------------------------------------------------------------");
         
  printf("Enter the number of elements in the array: ");
  scanf("%d", &len);
  int array[len];
  
  if (len <1){
    printf("Invalid input. Please try again!");
    break;
  }
  else{
    printf("Enter elements in the array:\n");
    for (i = 0; i < len ; i++)
    printf(
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
   printf("Here is the sorted list of numbers: \n ");
   for (i = 0 ; i < len ; i++)
   printf("%d", array[i]);
   return 0;
}
