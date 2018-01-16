#include <stdio.h>
#include <string.h>
#define MAX_ELEMENTS 8
void print_array(int []);

 /*
    Bubble sort: https://edx-video.net/HARCS50X2016-V034300_DTH.mp4
    In bubble sort, the idea is to move higher valued elements at the end of the list
    and the lower valued elements at the begining of the list (ordered from least to greatest)

    Psuedo code:
        - Set a swap counter to a non zero value
        - Repeate until the swap counter is zero
            - Reset the swap counter to zero
            - Look at each djacent pair of elements
                - if two adjacent elements are not in order, swap them and add 1 to the swap counter

 */

//prototypes for bubble sort
void bubble_Swap(int*, int*);
void bubble_Sort(int []);



/* MAIN ROUTINES */
int usrArr[MAX_ELEMENTS] = {11000,52,2058,0,6,1,-1,200};
int main(){


    /* TEST HERE */
    printf("Before: ");
    print_array(usrArr);

    bubble_Sort(usrArr);

    printf("After:  ");
    print_array(usrArr);


    printf("\n");
    return 0;
}



/* SUBROUTINES */

//swap subroutine
void bubble_Swap(int *param1, int *param2){    int buffer = 0;
    buffer = *param1;
    *param1 = *param2;
    *param2 = buffer;
}

//bubble sort subroutine
void bubble_Sort(int paramArr[]){
    int swapCounter = 1;
    while(swapCounter == 1){
        swapCounter = 0;
        for(int i = 0; i < MAX_ELEMENTS - 1; i++){
            if(paramArr[i + 0] > paramArr[i + 1]){
                bubble_Swap(&paramArr[i + 0], &paramArr[i + 1]);
                swapCounter = 1;
            }
        }
    }
}

//array print-out subroutine
void print_array(int paramArr[]){
    for(int i = 0; i < MAX_ELEMENTS; i++){
        printf("%i ", paramArr[i]);
    }
    printf("\n");   //newline
}