#include "types.h"
#include "functions.h"
#include <stdio.h>
#include <stdlib.h>


/**
  * @author Jordan QUAGLIATINI, Rayan ROGAÏ
  * @date 01/03/2016
  * Tri par tas avec tableau
  */

 int getFather(int idx){
 	return idx/2;
 }

int getLeft(int idx){
	return idx*2;
} 

int getRight(int idx){
	return (idx*2)+1;
}

void switchValue(int tab[], int idx1, int idx2){
	int tmp;

	tmp = tab[idx1];
    tab[idx1] = tab[idx2];
    tab[idx2] = tmp;
}

void printTab(int tab[]){
	int i;
	printf("\n");
	
	for (i = 1 ; i < 18 ; i++)
    {
        printf("%d ", tab[i]);
    }

    printf("\n");
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
		printTab(output);
	}
}


