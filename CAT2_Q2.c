// C 2D ARRAYS
/*
Name:Galo Mugenda Reagan
Reg no:CT101/G/23572/24
Date:11/6/2024
*/
#include <stdio.h>

int main() {
    // Declare and initialize a 2x2 matrix of 2x2 arrays ('scores')
    int scores[2][2][2] = {
        {{65, 92}, {84, 72}},  // First row: 65 92 and 84 72
        {{35, 70}, {59, 67}}   // Second row: 35 70 and 59 67
    };

    //  Print the elements of the 'scores' array using nested loops
    printf("The elements of the scores array are:\n");

    for (int w = 0; w < 2; w++) {
    	
        for (int z = 0; z < 2; z++) {

            printf("[%d %d] ", scores[w][z][0], scores[w][z][1]);
        }

        printf("\n"); //newline in each row
    }

    return 0;
}
