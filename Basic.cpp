// pointers

    //write  a program having two pointers pointing to two variable
       // create another pointer and point any of the above pointer

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int a= 10;
//     int b = 5;
//     int *pt2 = &a;
//     int *pt3 = &b;
//     int *pt4 = pt2;
    // int &r = a;
    // int *pt2 = &a;
    // r = 50;
    // cout << *pt2<<endl;
    // cout << pt2<<endl;
    // cout << *pt3 << endl;
    // cout << pt3<<endl;
    // cout << pt4<<endl;
    // cout << *pt4<<endl;
    // }


// #include <bits/stdc++.h>
// #include <iostream>
// using namespace std;
// void play(int *a){
//     *a = 50;
//     *a = 10;   // overwrites 50
//     cout << *a;
// }

// int main(){
//     int x = 0;
//     play(&x);
//     return 0;
// }


// #include <bits/stdc++.h>
// #include <iostream>
// using namespace std;
int main(){
    // int arr[3] ;;
    // int *p = arr;
    char arr[3] = {'a','b','c'};
    char *p = arr;
    cout << p  << endl;
    cout << *p + 1 << endl;
    return 0;
}



// Linkedlist

#include <bits/stdc++.h>
using namespace std;
struct Node {
    int data;
    Node *next;
    

};
int main(){
    Node* head = new Node();
    head -> data = 10;
    head -> next = NULL;
    return 0;

}

// Linkedlist make a pointer to null ptr an data  = 10, n1.next = nullptr.
#include <bits/stdc++.h>
using namespace std;
struct Node {
    int data;
    Node *next;
};
int main(){
    Node* head = new Node();
    head -> data = 10;
    head -> next = NULL;
    return 0;

}

// linkdelist using class 
#include <bits/stdc++.h>
using namespace std;
class Node {
    public:
    int data;
    Node *next;
};
int main(){
    Node* head = new Node();
    head -> data = 10;
    head -> next = NULL;
    return 0;

}
  

// linkdelist using class and make constructor TO PRINT NUMBER LIKE GIVE 10 AND THA DAT PRONT 1,2,3,4,5,67,8,9,10


#include <bits/stdc++.h>
using namespace std;
class Node {
    public:
    int data;
    Node *next;
    Node(int val){
        data = val;
        next = NULL;
    }
};
int main(){
    Node* head = new Node(10);
    return 0;
}


// linkdelist using class and make constructor TO PRINT NUMBER LIKE GIVE 10 AND THA DAT PRONT 1,2,3,4,5,67,8,9,10
#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(){
        data = 0;
        next = NULL;
    }
};
int main(){
    int n;
    cin >> n;


    Node *head = NULL;
    Node *tail = NULL;
    for(int i = 1; i <= n; i++){
        Node *newNode = new Node();
        newNode->data = i;
        newNode->next = NULL;
        if(head==NULL){
            head = newNode;
            tail = newNode;
        }else{
            tail->next = newNode;
            tail = newNode;
        }
    }
    Node *temp = head;
    while(temp!=NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}


// make a linkedlist using class and constructor and  call the function to print all the number from 1 to n
#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(int val){
        data = val;
        next = NULL;
    }
};
class LinkedList{
    public:
    Node *head;
    Node *tail;
    LinkedList(){
        head = NULL;
        tail = NULL;
    }
    void append(int val){
        Node *newNode = new Node(val);
        if(head==NULL){
            head = newNode;
            tail = newNode;
        }else{
            tail->next = newNode;
            tail = newNode;
        }
    }
    void printList(){
        Node *temp = head;
        while(temp!=NULL){
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

// make an object head using class and function new node and append the value from 1 to n

#include <bits/stdc++.h>
#include <cstdef>
using namespace std;
class Node{
    int data;
    Node *next;
    Node(){
        data = 0;
        next = NULL;

    }
}
int main(){
    int n;
    cin >> n;
    LinkedList list;
    for(int i = 1; i <= n; i++){
        list.append(i);
    }
    list.printList();
    return 0;

}

//    make an object head using class and function new node head = first;, data = 20 , ptr = nullptr and first = second
#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* ptr;
};

int main() {
    // create nodes
    Node* first = new Node();
    Node* second = new Node();
    Node* third = new Node();

    // first node
    first->data = 20;
    first->ptr = second;

    // second node
    second->data = 40;
    second->ptr = third;

    // third node (user input)
    cout << "Enter value for third node: ";
    cin >> third->data;
    third->ptr = nullptr;

    // head points to first
    Node* head = first;

    // print list
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->ptr;
    }
    cout << "NULL";

    return 0;
}

// create a void function for


#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node *nexet;
    Node(){
        data = 0;
        nexet = NULL;
    }
    void print(Node* head){
        Node* temp = head;
        while(temp!=NULL){
            cout << temp ->data << " ";
            if(temp -> next != NULL){
                cout << "-> ";
            }
            temp = temp -> next;

        }
    }
}

// insert at head and insert at tail function in linkedlist


#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    // default constructor
    Node() {
        data = 0;
        next = NULL;
    }

    // parameter constructor
    Node(int d) {
        data = d;
        next = NULL;
    }

    static void print(Node* head) {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data;
            if (temp->next != NULL) cout << " -> ";
            temp = temp->next;
        }
        cout << " -> NULL\n";
    }

    // insert at head
    static void insertAtHead(Node* &head, int data) {
        Node* newNode = new Node(data);
        newNode->next = head;
        head = newNode;
    }

    // insert at tail
    static void insertAtTail(Node* &head, int data) {
        Node* newNode = new Node(data);

        if (!head) {
            head = newNode;
            return;
        }

        Node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }

        temp->next = newNode;
    }
};

int main() {
    Node* head = NULL;

    Node::insertAtHead(head, 20);
    Node::insertAtTail(head, 40);

    int x;
    cout << "Enter value: ";
    cin >> x;
    Node::insertAtTail(head, x);

    Node::print(head);

    return 0;
}


// delete node in linkedlist using traversal

#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int d) {
        data = d;
        next = NULL;
    }

    static void print(Node* head) {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data;
            if (temp->next != NULL) cout << " -> ";
            temp = temp->next;
        }
        cout << " -> NULL\n";
    }

    static void insertAtTail(Node* &head, int data) {
        Node* newNode = new Node(data);

        if (!head) {
            head = newNode;
            return;
        }

        Node* temp = head;
        while (temp->next != NULL)
            temp = temp->next;

        temp->next = newNode;
    }

    // 🔥 delete node using traversal
    static void deleteNode(Node* &head, int key) {
        if (!head) return;

        // case 1: delete head
        if (head->data == key) {
            Node* del = head;
            head = head->next;
            delete del;
            return;
        }

        // traverse to find node
        Node* temp = head;
        while (temp->next != NULL && temp->next->data != key) {
            temp = temp->next;
        }

        // if not found
        if (temp->next == NULL) {
            cout << "Value not found\n";
            return;
        }

        // delete node
        Node* del = temp->next;
        temp->next = temp->next->next;
        delete del;
    }
};

int main() {
    Node* head = NULL;

    Node::insertAtTail(head, 10);
    Node::insertAtTail(head, 20);
    Node::insertAtTail(head, 30);
    Node::insertAtTail(head, 40);

    cout << "Before delete:\n";
    Node::print(head);

    Node::deleteNode(head, 30);

    cout << "After delete:\n";
    Node::print(head);

    return 0;
}
