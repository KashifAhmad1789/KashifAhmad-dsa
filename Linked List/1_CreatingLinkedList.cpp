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
int main() {
    // statically 

   node n1(1);
   node *head = &n1;
   node n2(2);
  
   node n3(5);
   node n4(20);
  n1.next = &n2;
   n2.next = &n3;
   n3.next = &n4;
   cout<<n1.data<<"->"<<n2.data<<"->"<<n3.data<<"->"<<n4.data<<endl;
   return 0;
   
   // dynamically
   /*
   node *n3 = new node(10);
   node *head = n3;
   node *n4 = new node(20);
   n3->next = n4;
   cout<<n3<<"->"<<n4<<endl;
   */

}
