#include "LinkedList.h"
#include <iostream>

using namespace std;

template <typename T>
LinkedList<T>::LinkedList() : head(nullptr), tail(nullptr) {}

template <typename T>
LinkedList<T>::~LinkedList()
{
    DeleteAll();
}

template <typename T>
void LinkedList<T>::AddToHead(const T& value)
{
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = head;
    head = newNode;

    if (tail == nullptr)
        tail = head;
}

template <typename T>
void LinkedList<T>::AddToTail(const T& value)
{
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = nullptr;

    if (tail != nullptr)
        tail->next = newNode;

    tail = newNode;

    if (head == nullptr)
        head = tail;
}

template <typename T>
void LinkedList<T>::DeleteFromHead()
{
    if (head != nullptr)
    {
        Node* nodeToDelete = head;
        head = head->next;

        if (head == nullptr)
            tail = nullptr;

        delete nodeToDelete;
    }
}

template <typename T>
void LinkedList<T>::DeleteFromTail()
{
    if (tail != nullptr)
    {
        if (head == tail)
        {
            delete tail;
            head = nullptr;
            tail = nullptr;
        }
        else
        {
            Node* node = head;
            while (node->next != tail)
            {
                node = node->next;
            }

            delete tail;
            node->next = nullptr;
            tail = node;
        }
    }
}

template <typename T>
void LinkedList<T>::DeleteAll()
{
    Node* node = head;
    while (node != nullptr)
    {
        Node* nextNode = node->next;
        delete node;
        node = nextNode;
    }

    head = nullptr;
    tail = nullptr;
}

template <typename T>
void LinkedList<T>::Show() const
{
    Node* node = head;
    while (node != nullptr)
    {
        cout << node->data << " ";
        node = node->next;
    }
    cout << endl;
}

template class LinkedList<int>;