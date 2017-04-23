/**
 * helpers.c
 *
 * Helper functions for Problem Set 3.
 */
 
#include <cs50.h>

#include "helpers.h"

/**
 * Returns true if value is in array of n values, else false.
 */
bool search(int value, int values[], int n)
{
    // TODO: implement a searching algorithm
    int L=0,U=n,mid;
    if(n<0)
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
void sort(int values[], int n)
{
    // TODO: implement an O(n^2) sorting algorithm
    return;
}
