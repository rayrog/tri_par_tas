/**
  * Quagliatini Jordan + ROGAI Rayan
  * Date: 01/03/2016
  * Description: Le TP sur le tri par tas avec tableau
  *
*/

#include <stdio.h>
#include <stdlib.h>
#include "types.h"
#include "functions.h"



int main() {
  int tab[18] = {17,3,5,6,2,8,9,11,7,4,10,12,15,20,1,19,13,17};

  printf("init tab : \n");
  int heap[18] = {17,1,3,2,4,8,9,6,7,5,10,12,15,20,11,19,13,17};
  printTab(heap, 18);
  sort(heap, tab);
  printf("sorted tab : \n");
  printTab(tab, 18);
  return 0;
}
