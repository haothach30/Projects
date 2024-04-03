#include <iostream>
using namespace std;

struct node{
	int data;
	struct node *pleft, *pRight;
};
typedef struct node NODE;
typedef NODE* TREE;

void khoitaocay(TREE &t){
	t= NULL:
}

void themnodevaocay(TREE &t, int x){
	if(t != NULL){
		NODE *p= new NODE;
		p->data= x;
		p->pleft= NULL;
		p->pRight= NULL;
		t= p;
	}
	else {
		if(p->data > x){
			themnodevaocay(p->pleft, x);
		}else if(p->data < x){
			themnodevaocay(p->pRight, x);
		}
	}
}
