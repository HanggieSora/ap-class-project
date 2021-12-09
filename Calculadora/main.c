# include <stdio.h> 

main ()
{

    int firstNumber;
    int secondNumber;
    
    printf("Ingrese el primer valor: ");
 scanf("%d", &firstNumber);
 printf("Ingrese el segundo valor: ");
 scanf("%d", &secondNumber);
    int result = firstNumber + secondNumber;
    
    printf("Resultado de la suma: %d \n", result);
    
 result = firstNumber - secondNumber;
 
 printf("Resultado de la resta: %d \n", result);
 
 result = firstNumber * secondNumber;
 
 printf("Resultado de la multiplicacion: %d \n", result);
 
 result = firstNumber / secondNumber;
 
 printf("Resultado de la division: %d \n", result);
    
 
 
   
    return 0;


}