#include "../Headers/conVert.h"
#include <stdio.h>

int number_n(){

    int n;
    printf("Enter a Number: ");
    scanf("%d", &n);
    return n;

}

void conVert_binary(int n){

    int buff[8], i;  
    printf("Binary number of %d is: 0b", n); 
    for(i=0;i<8;i++)  
    {  
        buff[i]=n%2;  
        n=n/2;  
    }  
     
    for(i=i-1;i>=0;i--)  
    {  
        printf("%d",buff[i]);  
    }  
    printf("\n");
    
}

void conVert_hex(int n) 
{
 
    if (n < 16)  
    {   
        printf("%c", "0123456789ABCDEF"[n]); 
        return;
    } 
    else 
        conVert_hex(n / 16);
        printf("%c", "0123456789ABCDEF"[n % 16]);
}

