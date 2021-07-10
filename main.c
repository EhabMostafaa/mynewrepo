//                                      LINKED LISTS PROJECT
// Team members:-
//Name1 : Thabet hussien thabet          sec:1                BN: 49

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct listnode{
    char Student_Name[30];
    int Student_ID;
    int Score_Of_Last_Year;
    int Day_Of_Birth;
    int Year_Of_Birth;
    int Month_Of_Birth;
    struct listnode* next;
}ListNode;

typedef struct dynamicarray
{
    char Student_Name[30];
    int Student_ID;
    int Score_Of_Last_Year;
    int Day_Of_Birth;
    int Year_Of_Birth;
    int Month_Of_Birth;
}DynamicArray;

typedef struct list
{
    ListNode* head;
    ListNode* tail;
    size_t size;
}List;
