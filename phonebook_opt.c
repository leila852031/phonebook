#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "phonebook_opt.h"

/* FILL YOUR OWN IMPLEMENTATION HERE! */
entry *hashTable[SIZE];

int hashFunction(char lastName[])
{
    int index=0;
    while(*lastName){
	index += *lastName++;
    }
    return (index%SIZE);
}

entry *findName(char lastName[], entry *pHead)
{
    /* TODO: implement */
    int key = hashFunction(lastName);
    pHead = hashTable[key];
    while(pHead){
	if(!strcasecmp(lastName, pHead->lastName))
	    return pHead;
	pHead = pHead->pNext;
    }
    return NULL;
}

entry *append(char lastName[], entry *e)
{
    int key = hashFunction(lastName);
    if(e)e = (entry *)malloc(sizeof(entry));
    if(hashTable[key]){
        e->pNext = hashTable[key];
	strcpy(e->lastName, lastName);
	hashTable[key] = e;
    }else{
	strcpy(e->lastName,lastName);
	hashTable[key] = e;
	e->pNext = NULL;
    }

    return e;
}
