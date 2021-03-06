//
// Created by Mohammed El-khamisi on 2020-05-17.
//

#ifndef LIST_LIST_H
#define LIST_LIST_H

#include <iostream>

#define listEntry int
#define MAXLIST 100

typedef struct listNode
{
    listEntry entry;
    struct listNode *next;

}Node;

typedef struct list
{
    Node *head;
    int size;
}List;


void initlist(List *);
void Insert(int, listEntry , List *);
void Delete(int , listEntry *, List *);
int listSize(List *);
int listEmpty(List *);
int listFull(List *);
void clearlist(List *);
void Traverslist(List *, void (*)(listEntry));
void Replacelist(int , listEntry , List *);
void Retrievelist(int, listEntry *, List *);




#endif //LIST_LIST_H
