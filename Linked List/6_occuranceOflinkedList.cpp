/*Write a function that counts the number of times a given int occurs in a Linked List
Difficulty Level : Basic
Last Updated : 18 Jun, 2021
Given a singly linked list and a key, count the number of occurrences of the given key in the linked list. For example, if the given linked list is 1->2->1->2->1->3->1 and the given key is 1, then the output should be 4.

Recommended: Please solve it on “PRACTICE” first, before moving on to the solution.
Method 1- Without Recursion 

Algorithm:  

1. Initialize count as zero.
2. Loop through each element of linked list:
     a) If element data is equal to the passed number then
        increment the count.
3. Return count.
*/



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
int OccuranceOfLinkedList(node *head, int key){
    node*temp = head;
    int count =0;
    while(temp!=NULL){
        if(temp->data==key){
            count++;
        }
        temp = temp->next;
    }
    return count;
}
int main() {
   node *head = takeInput();
    print(head);
    cout<<endl;
    int key =1;
    cout<<OccuranceOfLinkedList(head,key);
   return 0;
}