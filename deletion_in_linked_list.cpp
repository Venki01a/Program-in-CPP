#include <bits/stdc++.h>
using namespace std;
 
struct node {
    int info;
    node* link = NULL;
    node() {}
    node(int a)
        : info(a)
    {
    }
};
void deleteNode(node*& head, int val)
{
    if (head == NULL) {
        cout << "Element not present in the list\n";
        return;
    }
    if (head->info == val) {
        node* t = head;
        head = head->link;
        delete (t);
        return;
    }
    deleteNode(head->link, val);
}
void push(node*& head, int data)
{
    node* newNode = new node(data);
    newNode->link = head;
    head = newNode;
}
void print(node* head)
{
    if (head == NULL and cout << endl)
        return;
    cout << head->info << ' ';
    print(head->link);
}
 
int main()
{
 
    int m,n,p,q,r;
    cout<< "Enter the values: ";
    cin>>m,n,p,q,r;
    node* head = NULL;
    push(head,m);
    push(head,n);
    push(head,p);
    push(head,q);
    print(head);
    deleteNode(head,r);
    print(head);
    deleteNode(head,m);
    print(head);
    deleteNode(head,n);
    print(head);
 
    return 0;
}
