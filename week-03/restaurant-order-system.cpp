/*
 * Program: Restaurant Order System (Queue + Stack)
 * 
 * Description:
 * This program demonstrates restaurant order system (queue + stack).
 * 
 * Key Concepts Covered:
 * - Queue
 * - Stack
 * - Order Management
 * - FIFO and LIFO
 * - Real-world Application
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

class Stack
{

    // Private members - accessible only within class
private:
    Node *top;


    // Public members - accessible from outside class
public:
    Stack()
    {
        top = nullptr;
    }

    void push(string val)
    {
        // Dynamically allocate memory
        Node *newNode = new Node(val);
        newNode->next = top;
        top = newNode;
    }

    string pop()
    {
        if (isEmpty())
            return " ";

        Node *temp = top;
        string val = top->data;
        top = top->next;
        // Free allocated memory
        delete temp;
        return val;
    }

    string peek()
    {
        if (isEmpty())
            return " ";
        return top->data;
    }

    bool isEmpty()
    {
        return top == nullptr;
    }

    void clear()
    {
        while (!isEmpty())
        {
            pop();
        }
    }


    // Destructor: Cleans up memory when object is destroyed
    ~Stack()
    {
        clear();
    }
};

class Queue
{

    // Private members - accessible only within class
private:
    Node *front;
    Node *rear;


    // Public members - accessible from outside class
public:
    Queue()
    {
        front = rear = nullptr;
    }

    void enqueue(string val)
    {
        // Dynamically allocate memory
        Node *newNode = new Node(val);

        if (isEmpty())
        {
            front = rear = newNode;
            return;
        }

        rear->next = newNode;
        rear = newNode;
    }

    string dequeue()
    {
        if (isEmpty())
            return " ";

        Node *temp = front;
        string val = front->data;
        front = front->next;

        if (front == nullptr)
            rear = nullptr;

        // Free allocated memory
        delete temp;
        return val;
    }

    string peek()
    {
        if (isEmpty())
            return " ";
        return front->data;
    }

    bool isEmpty()
    {
        return front == nullptr;
    }

    void clear()
    {
        while (!isEmpty())
        {
            dequeue();
        }
    }


    // Destructor: Cleans up memory when object is destroyed
    ~Queue()
    {
        clear();
    }
};

class Restaurant
{

    // Private members - accessible only within class
private:
    Queue kitchenQueue;
    Stack completedStack;


    // Public members - accessible from outside class
public:
    void placeOrder(string order)
    {
        kitchenQueue.enqueue(order);
    }

    void processOrder()
    {
        if (kitchenQueue.isEmpty())
        {
            cout << "No kitchen orders to process.\n";
            return;
        }

        string order = kitchenQueue.dequeue();
        completedStack.push(order);
    }

    void deliverOrder()
    {
        if (completedStack.isEmpty())
        {
            cout << "No completed orders to deliver.\n";
            return;
        }

        string order = completedStack.pop();
        cout << "Delivered: " << order << endl;
    }

    string getNextKitchenOrder()
    {
        return kitchenQueue.peek();
    }

    string getNextDelivery()
    {
        return completedStack.peek();
    }
};


// ===== Main Program =====
int main()
{
    Restaurant r;

    r.placeOrder("Pizza");
    r.placeOrder("Pasta");
    r.placeOrder("Salad");

    cout << "Next to cook: " << r.getNextKitchenOrder() << endl;

    r.processOrder();
    r.processOrder();

    cout << "Next to deliver: " << r.getNextDelivery() << endl;

    r.deliverOrder();
    r.deliverOrder();
    r.deliverOrder();

    return 0;
}
