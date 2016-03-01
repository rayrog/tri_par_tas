#ifndef TYPES_H
#define TYPES_H

typedef struct _noeud noeud;
typedef struct _strings strings;

struct _noeud {
    int valeur;
    noeud *gauche;
    noeud *droit;
};

struct _arbre {
    noeud *racine;
    int hauteur;
};

typedef enum {false, true} bool;

#endif //TYPE_H