#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX_SIZE 10

typedef struct
{
    int age;
    float height;
    int ID;
} data;

typedef struct
{
    data data[MAX_SIZE];
    int size;
} list;

void initializeList(list *list)
{
    list->size = 0;
}

bool insert(list *list, data data)
{
    if (list->size >= MAX_SIZE)
    {
        return false;
    }

    list->data[list->size] = data;
    list->size++;

    return true;
}

bool insertPos(list *list, data data, int pos)
{
    if (list->size >= MAX_SIZE || pos > list->size || pos < 0)
    {
        return false;
    }

    list->size++;

    for (int i = list->size; i > pos; i--)
    {
        list->data[i] = list->data[i - 1];
    }

    list->data[pos] = data;

    return true;
}

void copyList(list list1, list *list2)
{
    for (int i = 0; i < list1.size; i++)
    {
        list2->data[i] = list1.data[i];
    }

    list2->size = list1.size;
}

bool areEqual(list list1, list list2)
{
    if (list1.size != list2.size)
    {
        return false;
    }

    for (int i = 0; i < list1.size; i++)
    {
        if (list1.data[i].age == list2.data[i].age && list1.data[i].height == list2.data[i].height && list1.data[i].ID == list2.data[i].ID)
        {
            return true;
        }
    }

    return false;
}

void removeData(list *list, data data)
{
    for (int i = 0; i < list->size; i++)
    {
        if (list->data[i].age == data.age && list->data[i].height == data.height && list->data[i].ID == data.ID)
        {
            for (int j = list->size; j > i; j--)
            {
                list->data[j - 1] = list->data[j];
            }
            list->size--;
        }
    }
}

void printList(list list1)
{
    for (int i = 0; i < list1.size; i++)
    {
        if (i != 0)
            printf("\n");
        printf("Age: %d\nHeight: %.2f\nID: %d", list1.data[i].age, list1.data[i].height, list1.data[i].ID);
    }
}

int main()
{
    list myList;

    initializeList(&myList);

    for (int i = 0; i < 10; i++)
    {
        data temp;
        temp.age = i + 1;
        temp.height = i + 1;
        temp.ID = i + 1;
        insert(&myList, temp);
    }

    data temp;
    temp.age = 9;
    temp.height = 9;
    temp.ID = 9;
    removeData(&myList, temp);
    printList(myList);

    return 0;
}
