#pragma once

#include <iostream>

template <typename T>
class LinkedList
{
private:
    struct Node
    {
        T data;
        Node* next;
    };

    Node* head;
    Node* tail;

public:
    LinkedList();
    ~LinkedList();
    void AddToHead(const T& value);
    void AddToTail(const T& value);
    void DeleteFromHead();
    void DeleteFromTail();
    void DeleteAll();
    void Show() const;




};
