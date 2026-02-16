/*
 * Program: Palindrome Checker using Stack and Queue
 * 
 * Description:
 * This program demonstrates palindrome checker using stack and queue.
 * 
 * Key Concepts Covered:
 * - Stack
 * - Queue
 * - Linked List
 * - Palindrome Detection
 * - Data Structures
 *
 * Author: IBA Karachi - OOP Course
 * Instructor: Sir Behraj Khan
 */

#include <iostream>
#include <string>
using namespace std;

class Node
{

    // Public members - accessible from outside class
public:
    char data;
    Node *next;

    Node(char val)
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


    // Public members - accessible from outside class
public:
    linkedlist()
    {
        head = nullptr;
    }
    void pushFront(char val)
    {
        // Dynamically allocate memory
        Node *NewNode = new Node(val);
        NewNode->next = head;
        head = NewNode;
    }

    char front()
    {
        if (Isempty())
        {
            cout << "List is empty!\n";
            return '\0';
        }
        return head->data;
    }

    char back()
    {
        if (Isempty())
        {
            cout << "List is empty!\n";
            return '\0';
        }

        Node *temp = head;
        while (temp->next != nullptr)
        {
            temp = temp->next;
        }
        return temp->data;
    }

    void reverse()
    {
        Node *prev = nullptr;
        Node *current = head;
        Node *next = nullptr;

        while (current != nullptr)
        {
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }
        head = prev;
    }

    void push(char val)
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
        if (Isempty())
        {
            cout << "List is Empty." << endl;
            return;
        }
        Node *temp = head;
        while (temp != nullptr)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }

    bool Isempty()
    {
        return head == nullptr;
    }

    void pop()
    {
        if (Isempty())
        {
            cout << "List is Empty." << endl;
        }
        else
        {
            Node *temp = head;
            head = head->next;
        // Free allocated memory
            delete temp;
        }
    }


    // Destructor: Cleans up memory when object is destroyed
    ~linkedlist()
    {
        while (!Isempty())
        {
            pop();
        }
    }
};

class Stack
{

    // Private members - accessible only within class
private:
    linkedlist my_stack;


    // Public members - accessible from outside class
public:
    void pushCharacter(char ch)
    {
        my_stack.pushFront(ch);
    }

    char popCharacter()
    {
        char ch = my_stack.front();
        my_stack.pop();
        return ch;
    }

    void print()
    {
        my_stack.print();
    }
};

class Queue
{
    linkedlist my_queue;


    // Public members - accessible from outside class
public:
    void enqueueCharacter(char ch)
    {
        my_queue.push(ch);
    }
    char dequeueCharacter()
    {
        char ch = my_queue.front();
        my_queue.pop();
        return ch;
    }
    void print()
    {
        my_queue.print();
    }
};

bool isPalindrome(const string &str)
{
    Queue q;
    Stack s;
    for (int i = 0; i < str.size(); i++)
    {
        q.enqueueCharacter(str[i]);
        s.pushCharacter(str[i]);
    }

    for (int i = 0; i < str.size(); i++)
    {
        if (s.popCharacter() != q.dequeueCharacter())
        {
            return false;
        }
    }

    return true;
}


// ===== Main Program =====
int main()
{
    string s = "dead";
    if (isPalindrome(s))
    {
        cout << "Is palindrome" << endl;
    }
    else
    {
        cout << "Not a palindrome" << endl;
    }

    return 0;
}
