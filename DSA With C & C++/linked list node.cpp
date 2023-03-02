#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*next;

    Node(int data){   // constructor
        this ->data = data;
        this ->next = NULL;
    }

};
void insertAthead(Node* &head, int d){

//new node create 
Node* temp = new Node(d);
temp->next = head;
head = temp;


}
void print((Node* &head){
    node*temp=head;
    while (temp!= Null)
    {
        cout<<temp->data<<" ";
        temp = temp -> next;

    }
    cout<<endl ;
}

int main()
{
    Node*Node1 = new Node(10);
    cout<< Node1 ->data <<endl;
    cout<<Node1->next<<endl;

    Node *head = nodel;
    print(head);

    insertAthead(head,12);
    print(head);

    return 0;
}