#include <iostream>
#include<stdio.h>
#include <string>
#include <limits.h>
#define COL 70
#define ROW 70
using namespace std;

// Implementation of Kadane's algorithm for 1D array. The function returns the
// maximum sum and stores starting and ending indexes of the maximum sum subarray
// at addresses pointed by start and finish pointers respectively.
int kadane(int* arr, int* start, int* finish, int n)
{
    // initialize sum, maxSum and
    int cxor = 0, maxXor = INT_MIN, i;

    // Just some initial value to check for all negative values case
    *finish = -1;

    // local variable
    int local_start = 0;

    for (i = 0; i < n; ++i)
    {
        cxor ^= arr[i];
        if (cxor < 0)
        {
            local_start = i+1;
        }
        else if (cxor > maxXor)
        {
            maxXor = cxor;
            *start = local_start;
            *finish = i;
        }
    }

     // There is at-least one non-negative number
    if (*finish != -1)
        return maxXor;

    // Special Case: When all numbers in arr[] are negative
    maxXor = arr[0];
    *start = *finish = 0;

    // Find the maximum element in array
    for (i = 1; i < n; i++)
    {
        if (arr[i] > maxXor)
        {
            maxXor = arr[i];
            *start = *finish = i;
        }
    }
    return maxXor;
}

// The main function that finds maximum sum rectangle in M[][]
void findMaxor(int M[][COL])
{
    // Variables to store the final output
    int maxSum = INT_MIN, finalLeft, finalRight, finalTop, finalBottom;

    int left, right, i;
    int temp[ROW], sum, start, finish;

    // Set the left column
    for (left = 0; left < COL; ++left)
    {
        // Initialize all elements of temp as 0
        for(int i=0 ; i<sizeof(temp) ; i++)
            temp[i] = 0;

        // Set the right column for the left column set by outer loop
        for (right = left; right < COL; ++right)
        {
            // Calculate sum between current left and right for every row 'i'
            for (i = 0; i < ROW; ++i)
                temp[i] ^= M[i][right];

            // Find the maximum sum subarray in temp[]. The kadane() function
            // also sets values of start and finish.  So 'sum' is sum of
            // rectangle between (start, left) and (finish, right) which is the
            //  maximum sum with boundary columns strictly as left and right.
            sum = kadane(temp, &start, &finish, ROW);

            // Compare sum with maximum sum so far. If sum is more, then update
            // maxSum and other output values
            if (sum > maxSum)
            {
                maxSum = sum;
            }
        }
    }
    printf("Max sum is: %d\n", maxSum);
}

// Driver program to test above functions
int main()
{
    int t,n;
    int a[70][70];
    cin>>t;
    while(t--)
    {
        cin>>n;
        int i,j,k,l,maxor=0,cxor=0;
        for(i=0 ; i<n ;i++)
        {
            for(j=0 ; j<n ; j++)
                cin>>a[i][j];

        }
        findMaxor(a);
    }
    return 0;
}
