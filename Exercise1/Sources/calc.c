#include <stdio.h>
#include "../Headers/calc.h"

void sum_Array_1(int array_1[]){
    
    int sum=0;
    for (int i = 0; i<20; i++)
    {
        sum += array_1[i];
    }
    printf("Sum in Array_1: %d\n", sum);
}

void maxValue_Array_1(int array_1[])
{
    int maxValue = 0;
    for (int i = 0; i < 20; i++) 
    {
        if (array_1[i] > maxValue) 
        {
            maxValue = array_1[i];
        }
    }
    printf("MaxValue in Array_1: %d\n", maxValue);    
}

void minValue_Array_1(int array_1[])
{
    int minValue = array_1[0];
    for (int i = 0; i < 20; i++)
    {
        if (array_1[i] < minValue) 
        {
            minValue = array_1[i];
        }
    }
    printf("MinValue in Array_1: %d\n", minValue);    
}

void poSition_Array_1(int array_1[]){

    int k;
    printf("Number to find location:");
    scanf("%d",&k);
    for (int i = 0; i < 20; i++)
    {
        
        if (array_1[i] == k) 
        {
            printf("Number %d in position: No.%d\n", k, i+1);
        }
        
    }

}