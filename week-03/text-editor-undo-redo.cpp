/*
 * Program: Text Editor Undo/Redo using Stacks
 * 
 * Description:
 * This program demonstrates text editor undo/redo using stacks.
 * 
 * Key Concepts Covered:
 * - Stack
 * - Undo/Redo Mechanism
 * - Linked List
 * - Text Editor
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
    string data;
    Node *next;

    Node(string val)
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
    void pushFront(string val)
    {
        // Dynamically allocate memory
        Node *NewNode = new Node(val);
        NewNode->next = head;
        head = NewNode;
    }

    string front()
    {
        if (Isempty())
        {

            return " ";
        }
        return head->data;
    }

    string back()
    {
        if (Isempty())
        {

            return " ";
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

    void push(string val)
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
        Node *temp;
        temp = head;
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

            return;
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
    void push(string ch)
    {
        my_stack.pushFront(ch);
    }

    string pop()
    {
        string ch = my_stack.front();
        my_stack.pop();
        return ch;
    }

    void print()
    {
        my_stack.print();
    }
    string peek()
    {
        return my_stack.front();
    }
    bool IsEmpty()
    {
        return my_stack.Isempty();
    }
    void clear()
    {
        while (!my_stack.Isempty())
        {
            my_stack.pop();
        }
    }
};

class TextEditor
{

    Stack undoStack, redoStack;


    // Public members - accessible from outside class
public:
    void DoAction(string action)
    {
        undoStack.push(action);
        redoStack.clear();
    }
    void undo()
    {
        if (undoStack.IsEmpty())
        {
            cout << "Nothing to undo.\n";

            return;
        }
        string action = undoStack.pop();
        redoStack.push(action);
    }
    void redo()
    {
        if (redoStack.IsEmpty())
        {
            cout << "Nothing to redo.\n";
            return;
        }

        string action = redoStack.pop();
        undoStack.push(action);
    }

    bool canUndo()
    {
        return !(undoStack.IsEmpty());
    }
    bool canRedo()
    {
        return !(redoStack.IsEmpty());
    }

    void clearAll()
    {
        redoStack.clear();
        undoStack.clear();
    }
};


// ===== Main Program =====
int main()
{
    TextEditor t;

    t.DoAction("Type A");
    t.DoAction("Type B");
    t.DoAction("Type C");

    cout << "Undo twice...\n";
    t.undo();
    t.undo();

    cout << "Redo once...\n";
    t.redo();

    cout << "Try redo again...\n";
    t.redo();

    cout << "Try undo 4 times...\n";
    t.undo();
    t.undo();
    t.undo();
    t.undo();

    return 0;
}
