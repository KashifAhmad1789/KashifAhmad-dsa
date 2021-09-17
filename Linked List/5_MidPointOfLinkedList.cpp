#include <iostream>

using namespace std;
class node{
    public:
    int data;
    node*next;

    node(int data){
        this->data = data;
        next = NULL;
    }
};
node* takeInput(){
int data;
cin>>data;
node *head = NULL;
while(data!=-1){
    node *newnode = new node(data);
    if(head==NULL){
        head = newnode;
    }
    else{
        node *temp = head;
        while(temp->next!=NULL){
            temp = temp->next;
        }
        temp->next = newnode;
    }
    cin>>data;
}
     return head;
}
void print(node*head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
}


// Mid Point
node *midPointLinkedList(node*head){
    if(head==NULL or head->next==NULL){
        return head;
    }
    node *slow = head;
    node *fast = head->next;
    while(fast!=NULL and fast->next!=NULL){
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow;
}

int main() {
    node *head = takeInput();
    print(head);
    cout<<endl;
    node *mid = midPointLinkedList(head);
    cout<<mid->data;

   return 0;
}