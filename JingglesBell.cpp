#include <bits/stdc++.h>
#include<iostream>
#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    int spaces = N - 1;
    int stars = 1;

    // Print the top part of the tree
    for (int i = 0; i < N; i++)
    {
        // Print leading spaces
        for (int j = 0; j < spaces; j++)
        {
            printf(" ");
        }

        // Print stars
        for (int j = 0; j < stars; j++)
        {
            printf("*");
        }

        // Move to the next line
        printf("\n");

        // Adjust spaces and stars for the next row
        spaces--;
        stars += 2;
    }

    // Print the trunk of the tree
    int x;
    scanf("%d" , &x);

    if (x % 2 == 0)
    {
        return false;
    }
    else
    {
        for (int i = 0; i < x; i++)
        {
            for (int j = 0; j < x; j++)
            {
                printf(" ");
            }
            printf("*\n");
        }
    }

    return 0;
}
