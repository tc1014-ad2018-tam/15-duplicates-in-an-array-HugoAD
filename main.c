/* This program allows the user to input "n" numbers
 * in the array, compare the elements and look
 * for duplicated values.
 *
 * Author: Hugo Aguirre Doria
 * Date: october 15th, 2018
 *
 * */

#include <stdio.h>

int main() {

    //Variables declaration
    int a;
    int b;
    int c;
    int cnt =0;

    printf("Please, enter the size of array: "); //we ask for the size of the array
    scanf("%i", &a);
    int array[a];

    printf("Input %i elements in the array : ", a);//we ask for the elements of the array.
    for(int i=0; i<a; i++)
    {
        scanf("%i", &array[i]);
    }


    for(b=0; b<a; b++){
        for(c=b+1; c<a; c++){
            if(array[b]==array[c]){   //This rule compares and search for duplicated numbers
                cnt++;
                break;
            }
        }
    }
    printf("\nThere is/are %i number/s  duplicated in  the array", cnt);



    return 0;
}