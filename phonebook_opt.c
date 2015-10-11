#include <stdlib.h>

#include "phonebook_opt.h"

/* FILL YOUR OWN IMPLEMENTATION HERE! */
LastName *findName(char lastname[], LastName *pHead)
{
    /* TODO: implement */
    while(pHead != NULL){
	if(strcasecmp(lastname, phead->lastname) == 0){
	    return pHead;
	}
	pHead = pHead->pNext;
    }
    return NULL;
}

LastName *append(char lastName[], LastName *e)
{
    e->pNext = (LastName *)malloc(sizeof(LastName));
    e = e->pNext;
    strcpy(e->lastname, lastName);
    e->pNext = NULL;
    return e;
}
