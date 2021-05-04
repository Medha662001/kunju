#include <stdio.h> 
int reverse(int x);

 main() 
{ int arr[9]; 
    int i;  
    printf("Input 10 elements in the array :\n");  
    for(i=0; i<10; i++)  
    {  
	    printf("element - %d : ",i);
        scanf("%d", &arr[i]);  
    }  
  
    printf("\nElements in array are: ");  
    for(i=0; i<10; i++)  
    {  
        printf("%d  ",arr[i]);  
    } 
	reverse(arr[9]); 
  
 
}
 reverse(int x)
{ 
  int i;
    for (int i = x; i > 0; i--) 
        printf("\t%d",i); 
  return (i);
} 
