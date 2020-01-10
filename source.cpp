#include <iostream>
#include "header2.h"


using namespace std;

int main(){
    node <int> *p;
    node <int> *q;
    node <int> *s;
    node <int> *t;
    node <int> *l;

    node <int> *max;


    p = new node <int> (10);
    q = new node <int> (20);
    s = new node <int> (30);
    t = new node <int> (40);
    l = new node <int> (15);

    p->next = q;
    q->next = s;
    q->next = t;
    p->next = l;
    l->next = q;
    for (int i = 0;i<5;i++){
        q = new node<int> (i,p);
        p = q;
    }
    max = getmax(p);
    cout << max->value;
    cout << endl;
    eraseTarget(p,0);
    findend(p);
    deleteLinked(p);
    writeLinked(p);
    cout << endl;
    deleteLinkedAll(p);
    cout << endl;
    writeLinked(p);
   


    return 0;
}