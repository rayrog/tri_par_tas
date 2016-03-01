#include "types.h"
#include "functions.h"
#include <stdio.h>
#include <stdlib.h>


/**
  * @author Jordan QUAGLIATINI, Rayan ROGAÏ
  * @date 01/03/2016
  * Tri par tas avec tableau
  */

void sort(int input[], int output[]) {
    int idx = 0;
    int size = input[0];
    int current = 0;
    while(input[size] != 0) {
        current = input[size];
        size --;
        output[idx] = input[1];
        idx ++;
        input[1] = 0;
        current = switchValue(input, current, 1);
        while(current < input[getLeft(current)] || current < input[getRight(current)]) {
            if(current < input[getRight(current)]) {
                current = switchValue(input, current, input[getRight(current)]);
            } else {
                current = switchValue(input, current, input[getLeft(current)]);
            }
        }
    }
}
