#include <bits/stdc++.h>
using namespace std;
class Node {
	public:
	 int val;
	 Node *next = NULL;
	Node(int data){
	    this->val= data;
	}
} *root = NULL;
void print(Node* start){
    Node *t = start;
    while(t != NULL){
        std::cout << t->val <<" ";
        t = t->next;
    }
}
Node* printk(Node* start,int k){
    Node *t = start;
    
   k--;
   t = start;
   while(k > 0){
       k--;
       t = t->next;
   }
   Node *s = t->next;
   t->next = NULL;
   Node *tmp = s;
   while(tmp->next != NULL)
      tmp = tmp->next;
   tmp->next = start;
   return s;
}
int main() {
    Node *temp = new Node(1);
    Node *start = temp;
	root = temp;
	temp = new Node(2);
	root->next = temp;
	root = temp;
	temp = new Node(3);
	root->next = temp;
	root = temp;
	temp = new Node(4);
	root->next = temp;
	root = temp;
	temp = new Node(5);
	root->next = temp;
	root = temp;
	print(start);
	cout<<endl;
	int k = 2;
	print(printk(start,k));
}
//1 -> 2 -> 3 -> 4 -> 5
