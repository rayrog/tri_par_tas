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
	int tree[18] = {0};

	buildTree(tab, tree);

	printTab(tree);

  
  return 0;
}


