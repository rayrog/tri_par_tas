#ifndef FUNCTIONS_H
#define FUNCTIONS_H

void sort(int input[], int output[]);
int getFather(int idx);
int getLeft(int idx);
int getRight(int idx);
int switchValue(int tab[], int idx1, int idx2);
void buildTree(int input[], int output[]);
void printTab(int tab[], int size);

#endif 
