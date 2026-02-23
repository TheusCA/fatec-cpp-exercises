#include <iostream>
using namespace std;

#define MAX 6
#define MAXP1 4
#define MAXP2 4

typedef float TInfo;
typedef struct TPilha {
 TInfo elem[MAX];
 // de 0 ate MAXP1
 int topo1;
 // de MAX-MAXP2+1 ate MAX+1
 int topo2;
} TPilha;

int retiraPilha(TPilha *p, int qual, TInfo *var) {
    if (qual == 1) {
        // pilha 1 vazia?
        if (p->topo1 == 0) {
            return 0;
        } else {
            p->topo1--;
            *var = p->elem[p->topo1];
            return 1;
        }
    } else {
        // pilha 2 vazia?
        if (p->topo2 == MAX) {
            return 0;
        } else {
            *var = p->elem[p->topo2];
            p->topo2++;
            return 1;
        }
    }
}

