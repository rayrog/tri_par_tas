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
  int tab[17] = {3,5,6,2,8,9,11,7,4,10,12,15,20,1,19,13,17};
  int tree[17];
  tree = build_tree(tab, 17, tree);
  return 0;
}
