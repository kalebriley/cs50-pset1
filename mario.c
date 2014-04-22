/**
* mario.c
*
* Kaleb Riley
*
* This program prints out a pyrmid; size given
* given by user.
*
*/

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    
    int height;
    // prompts user for intput and sets height to given input.
    do
    {
        printf("Height: ");
        height = GetInt();
        
        // handles " 0 " case.
        if (height == 0)
        {
            break;
        }
        
    }
    while((height < 1) || (height > 23));
    
    // builds the half pyramid.
    for(int i = 0; i < height;i++)
    {
        int hashes = i + 2;
        int space = height - (i + 1);
        
        // prints number of spaces for right alignment per row.
        for(int k = 0; k < space;k++)
        {
            printf(" ");
        }
        
        // prints number of hashes per row.
        for(int j = 0; j < hashes;j++)
        {
            printf("#");
        }
        
        // starts new row.
        printf("\n");
        
    }
}
