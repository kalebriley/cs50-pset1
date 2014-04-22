/**
* greedy.c
*
* Kaleb Riley
*
* Asks user for an amount of change needed and 
* returns that amount in maximum amount of coins needed.
*/

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    float change;
    
    // prompt user for amount of change.
    do
    {
        printf("how much change is owed?\n");
        change = GetFloat();
        
    }
    while(change < 0);
    
    // declare and initialize variable that will hold number of coins.
    int noc = 0;
    int newChange = change * 100;
    
    // loop until amount of change equals 0.
    while(newChange > 0)
    {
        if (newChange > 25)
        {
            newChange = newChange - 25;
            noc++;
        }
        else if (newChange > 10)
        {
            newChange = newChange - 10;
            noc++;
        }
        else if (newChange > 5)
        {
            newChange = newChange - 5;
            noc++;
        }
        else
        {
            newChange = newChange - 1;
            noc++;
        }
    }
    
    // print number of coins needed.
    printf("%d\n", noc);
}
