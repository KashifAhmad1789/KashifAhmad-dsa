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

// insert the element in ith position
node *insertnode(node*head, int i, int data){
    node *newnode = new node(data);
    int count =0;
    node *temp = head;
    if(i=0){
        newnode->next = head;
        head = newnode;
        return head;
    }
    
    while(temp!=NULL && count<i-1){
        temp = temp->next;
        count++;
    }
    if(temp!=NULL){
        node *a = temp->next;
        temp->next = newnode;
        newnode->next =a;
    }
    return head;
}


// lenght of a linked list
int lenghtLinkedlist(node *head){
    int count =0;
    node *temp = head;
    while(temp!=NULL){
        count++;
        temp = temp->next;
    }
    return count;
}

// searching the element
bool searching(node *head, int key){
    node *temp =head;
   while(temp!=NULL){
        if(head->data==key){
            return true;
        }
        head = head->next;
    }
    return false;
}

// reverse a linked list
void reverse(node *&head){
    node *current = head;
    node *p = NULL;
    node *notknown;
    while(current!=NULL){
        notknown = current->next;
        current->next = p;
        p=current;
        current = notknown;
    }
    head = p;
}


//  Write a function to get Nth node in a Linked List

int getnth(node*head, int index){
    node *temp = head;
    int count =0;
    while(temp!=NULL){
        if(count == index)
            return (temp->data);
        
        count++;
        temp = temp->next;
    }
}

int main()
{
  node *head = takeInput();
    print(head);
       cout<<endl;
       int key;
       cin>>key;
       cout<<getnth(head,key)<<endl;
       
       
       
       
       
       
       
       // reverse
       
       // reverse(head);
       // print(head);
   
   
   
   // searching the linked list
   
//   int key;
//   cin>>key;
//   if(searching(head,key)){
//       cout<<" element is found";
//   }
//   else{
//       cout<<"not found";
//   }
   
   
   // lemnght of linked list
   
   //  cout<<lenghtLinkedlist(head);
   
   
//   cout<<endl;
//   int i,data;
//   cin>>i>>data;
//   head= insertnode(head,i,data);
//   print(head);
  
   return 0;

   
}


