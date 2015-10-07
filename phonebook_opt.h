#ifndef _PHONEBOOK_H
#define _PHONEBOOK_H

#define MAX_LAST_NAME_SIZE 16
/* optimizationversion */
typedef struct __PHONE_BOOK_LASTNAME {
    char lastName[MAX_LAST_NAME_SIZE];
    struct __PHONE_BOOK_LASTNAME *pNEXT;
    struct __PHONE_BOOK_ENTRY *pENTRY;
} lastname;
typedef struct __PHONE_BOOK_ENTRY {
    char firstName[16];
    char email[16];
    char phone[10];
    char cell[10];
    char addr1[16];
    char addr2[16];
    char city[16];
    char state[2];
    char zip[5];
} entry;

/* original version */
/*
typedef struct __PHONE_BOOK_ENTRY {
    char lastName[MAX_LAST_NAME_SIZE];
    char firstName[16];
    char email[16];
    char phone[10];
    char cell[10];
    char addr1[16];
    char addr2[16];
    char city[16];
    char state[2];
    char zip[5];
    struct __PHONE_BOOK_ENTRY *pNext;
} entry;
*/
entry *findName(char lastname[], lastname *pHead);
entry *append(char lastName[], lastname *e);

#endif
