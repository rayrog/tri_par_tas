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

int switchValue(int tab[], int idx1, int idx2){
	int tmp;

	tmp = tab[idx1];
    tab[idx1] = tab[idx2];
    tab[idx2] = tmp;

    return idx2;
}

void buildTree(int input[], int size, int output[]){

}

