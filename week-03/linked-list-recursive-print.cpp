/*
 * Program: Linked List with Recursive Reverse Print
 * 
 * Description:
 * This program demonstrates linked list with recursive reverse print.
 * 
 * Key Concepts Covered:
 * - Linked List
 * - Recursion
 * - Recursive Traversal
 * - Pointers
 *
 * Author: IBA Karachi - OOP Course
 * Instructor: Sir Behraj Khan
 */

#include <iostream>
using namespace std;

class Node
{

    // Public members - accessible from outside class
public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = nullptr;
    }
};

class linkedlist
{

    // Private members - accessible only within class
private:
    Node *head;

    
    void printReverseRecursive(Node *node)
    {
        if (node == nullptr)
            return;

        printReverseRecursive(node->next); 
        cout << node->data << " ";        
    }


    // Public members - accessible from outside class
public:
    linkedlist()
    {
        head = nullptr;
    }

    void push(int val)
    {
        // Dynamically allocate memory
        Node *NewNode = new Node(val);
        if (head == nullptr)
        {
            head = NewNode;
            return;
        }

        Node *temp = head;
        while (temp->next != nullptr)
        {
            temp = temp->next;
        }
        temp->next = NewNode;
    }

    void print()
    {
        Node *temp = head;
        while (temp != nullptr)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    void printReverse()
    {
        printReverseRecursive(head);
        cout << endl;
    }

    bool Isempty()
    {
        return head == nullptr;
    }


    // Destructor: Cleans up memory when object is destroyed
    ~linkedlist()
    {
        while (!Isempty())
        {
            Node *temp = head;
            head = head->next;
        // Free allocated memory
            delete temp;
        }
    }
};


// ===== Main Program =====
int main()
{
    linkedlist ll;

    ll.push(1);
    ll.push(2);
    ll.push(3);
    ll.push(4);
    ll.push(5);

    cout << "Original Linked List: ";
    ll.print();

    cout << "Linked List in Reverse (Recursive): ";
    ll.printReverse(); 

    return 0;
}
