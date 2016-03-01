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
    int idx = 1;
    int size = input[0];
    output[0] = 0;
    int current = 0;
    while(input[size] != 0) {
        current = size;
        output[idx] = input[1];
        output[0]++;
        idx ++;
        input[1] = 0;
        current = switchValue(input, current, 1);
        input[0] = --size;
        while(input[current] > input[getLeft(current)] || input[current] > input[getRight(current)]) {
            if(input[getLeft(current)] > input[getRight(current)]) {
                current = switchValue(input, current, getRight(current));
            } else {
                current = switchValue(input, current, getLeft(current));
            }
            if(current == -1) {
                break;
            }
        }
    }

    switchValue(output, output[0]-1, output[0]);
}

int getFather(int idx){
	return idx/2;
}

int getLeft(int idx){
	return idx*2;
}

int getRight(int idx){
	return (idx*2)+1;
}

int switchValue(int tab[], int idx1, int idx2){
	int tmp;
    if(idx1 > tab[0] || idx2 > tab[0]) {
        return -1;
    }

	tmp = tab[idx1];
    tab[idx1] = tab[idx2];
    tab[idx2] = tmp;

    return idx2;
}

void buildTree(int input[], int output[]){
	int i;
	int size = input[0];
	output[0] = input[0];
	int currentIdx;

	for(i=1; i<=size ; i++)
	{
		output[i] = input[i];
		int fatherIdx = getFather(i);
		int father = output[fatherIdx];
		int current =  output[i];
		currentIdx = i;

		while (fatherIdx > 0 && father > current) 
		{
			switchValue(output, fatherIdx, currentIdx);
			currentIdx = fatherIdx;
			fatherIdx = getFather(currentIdx);
			father = output[fatherIdx];
		}
	}
}


void printTab(int tab[], int size) {
    int i = 0;
    for(i = 0; i < size; i++) {
        printf("%02d ", tab[i]);
    }
    printf("\n");
}

