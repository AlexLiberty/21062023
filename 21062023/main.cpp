#include <iostream>
#include "LinkedList.h"

int main()
{
    LinkedList<int> list;

    list.AddToHead(3);
    list.AddToHead(2);
    list.AddToHead(1);

    list.AddToTail(4);
    list.AddToTail(5);

    list.Show();

    list.DeleteFromHead();
    list.DeleteFromTail();

    list.Show();

    list.DeleteAll();

    list.Show();

    return 0;
}