#include <stdio.h>
#include <assert.h>

//#define CLEAR2CONTINUE
#include "../include/traces.h" 

// C'est dans le fichier elt.h qu'on doit choisir l'implémentation des T_elt
#include "elt.h"
#include "list.h"

int main(int argc, char ** argv) {
	CLRSCR();
	WHOAMI(); 

	/////////////////////////////////////////////////////////////////////////
	/////////////////////////////////////////////////////////////////////////

	T_list l = NULL; 
	T_elt e; 

	TOUCH_HERE("Ben là, c'est à vous ! \n");

	// ajouter des éléments dans la liste 

	l = addNode(genElt(), l); 
	l = addNode(genElt(), l); 
	l = addNode(genElt(), l); 
	l = addNode(genElt(), l); 


	// afficher la liste 
	showList(l); NL();

	// récupérer le premier élément d'une liste, et l'afficher 
	e = getFirstElt(l);
	printf("Premier elt : %s\n", toString(e));

	// supprimer le premier élément, et afficher la liste
	l = removeFirstNode(l);
	showList(l); NL();

	// continuer à supprimer jusqu'à ce qu'il n'y ait plus aucune maille
	l = removeFirstNode(l);
	showList(l); NL();

	l = removeFirstNode(l);
	showList(l); NL();

	l = removeFirstNode(l);
	showList(l); NL();

	// que se passe-t-il ? 
	l = removeFirstNode(l); // protégé par assert

	/*
	// test des fonctions récursives (à faire à la fin du TP)
	l = addNode(genElt(), l); 
	l = addNode(genElt(), l); 
	l = addNode(genElt(), l); 
	l = addNode(genElt(), l); 

	showList_rec(l);  NL();
	showList_inv_rec(l);  NL();
	freeList_rec(l);
	*/

	return 0;
}

void showList_rec(T_list l) {
	//Afficher la liste en començant par sa tête
	//A faire en récursif
	
	if(l == NULL) {
		//cas de bas
		return;
		}
	printf("%s", toString(l->data));
	showList_rec(l->pNext);
}
	
void showList_inv_rec(T_list l) {
	//Afficher la liste en commençant par sa queue
	//A faire en récursivité
	if(l==NULL) {
		//cas de base
		return;
	} else {
		showList_inv_rec(l->pNext);
		printf("%s", toString(l->data));
	}

void freeList_rec(T_list l) {
	//Libérer la mémoire de toutes les cellules de la liste l
	//A faire en récursif
	
	if(l==NULL) {
		return;
	} else {
		freeList_rec(l->pNext);
		printf("Libération de %s\n", toString(l
	}
	
}
	
}







