#include <iostream>
using namespace std;


template <typename T>
class node{
    public:
    T value;
    node<T> *next;

    node():next(NULL)
    {}

    node (const T& item ,node <T> *nextnode = NULL):
        value(item),next(nextnode)
    {}



};

template <typename T>
void writeLinked(node <T> *front){
    node <T> *curr;

    curr = front;
    while(curr != NULL){
        cout << curr ->value << "\t";
        curr = curr->next;
    }
}
template <typename T>
void deleteLinked(node <T> *&front){
    node <T> *curr;

    if(front != NULL){
        curr = front;
        front = front ->next;
        delete curr;
    }

}
template <typename T>
void deleteLinkedAll(node <T> *&front){
    node <T> *curr;

    while(front != NULL){
        curr = front;
        front = front ->next;
        delete curr;
    }

}
template <typename T>
void findend(node <T> *front){
    node <T> *curr = front;
    int j = 0;
    while(curr->next != NULL){
        curr = curr->next;
    }
    curr ->next = new node <T> (12);
  

}
template <typename T>
void eraseTarget(node <T> *&front , const T& target){
    node <T>*curr = front;
    node <T>*prev = NULL;
    bool found = false;

    while((curr != NULL)&& found == false){
    if (curr->value == target){
        if(prev == NULL)
            front = front ->next;
        else
            prev->next = curr->next;
        
        cout << curr->value << "Founded"<< endl; 
        delete curr;
        
        found = true;


    }
    
    else {
        prev = curr;
        curr = curr->next;
    }
    }
}
template <typename T>
node <T> *getmax(node <T> *front){
    node <T> *curr = front;
    node <T>*max = front;
    while(curr != NULL){
        if(max->value < curr ->value)
            max = curr;

            curr = curr ->next;
    }
    return max;
}

