/**
 * helpers.c
 *
 * Helper functions for Problem Set 3.
 */
 
#include <cs50.h>

#include "helpers.h"
#define MAX 67736
/**
 * Returns true if value is in array of n values, else false.
 */
bool search(int value, int values[], int n)   //Binary search
{
    int L=0,U=n,mid;
    if(n<=0)
        return false;
    while(L<=U)
    {
        mid=(L+U)/2;
        if(value==values[mid])
            return true;
        else if(value<values[mid])
            U=mid-1;
        else
            L=mid+1;
    }
    return false;
}

/**
 * Sorts array of n values.
 */
void sort(int values[], int n)   //Bubble sort
{
    int i,j,temp;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(values[j]>values[j+1])
            {
                temp=values[j];
                values[j]=values[j+1];
                values[j+1]=temp;
            }
        }
    }
}