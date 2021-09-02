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
void print(node*head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
}
int main() {
    node n1(1);
   node *head = &n1;
   node n2(2);
  
   node n3(5);
   node n4(20);
  n1.next = &n2;
   n2.next = &n3;
   n3.next = &n4;
   print(head);
   return 0;
}