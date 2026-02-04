

#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int d){
        data = d;
        next = NULL;
    }

    void deleteAtHead(Node* &head){
        if(head == NULL) return;   // safety
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    // FIXED: delete last node, not reverse list
    void deleteAtTail(Node* &head){
        if(head == NULL) return;

        if(head->next == NULL){
            delete head;
            head = NULL;
            return;
        }

        Node* temp = head;
        while(temp->next->next != NULL){
            temp = temp->next;
        }

        delete temp->next;
        temp->next = NULL;
    }

    void deleteNode(Node* &head, int val){
        Node* temp = head;
        Node* prev = NULL;

        while(temp!=NULL){
            if(temp->data==val){
                if(prev==NULL){
                    head = temp->next;
                }else{
                    prev->next = temp->next;
                }
                delete temp;
                return;
            }
            prev = temp;
            temp = temp->next;
        }
        cout << "Node not found" << endl;
    }
};

int main(){
    int n;
    cin >> n;

    Node *head = NULL;
    Node *tail = NULL;

    for(int i = 1; i <= n; i++){
        Node* newNode = new Node(i);
        if (!head) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    int val;
    cin >> val;

    head->deleteAtHead(head);
    head->deleteAtTail(head);
    head->deleteNode(head, val);

    Node* temp = head;  // don't destroy head while printing
    while(temp!=NULL){
        cout << temp->data;
        if(temp->next!=NULL){
            cout << " -> ";
        }
        temp=temp->next;
    }
    cout << endl;

    return 0;
}
