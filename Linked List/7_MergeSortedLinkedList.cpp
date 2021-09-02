// Merge two sorted Linked list
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
node *mergeSorted(node *a, node *b){
    if(a==NULL){
        return b;
    }
    if(b==NULL){
        return a;
    }
    node *c;
    if(a->data<b->data){
        c =a;
        c->next = mergeSorted(a->next,b);
    }
    else{
        c = b;
        c->next = mergeSorted(a,b->next);
    }
    return c;
}
int main() {
   node *head1 = takeInput();
    print(head1);
    cout<<endl;
    node *head2 = takeInput();
    print(head2);
    cout<<endl;
    node* newlinked = mergeSorted(head1,head2);
    print(newlinked);
   return 0;
}