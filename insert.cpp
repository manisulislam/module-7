#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
     int val;
     Node* next;
    Node(int val) {
        this->val=val;
        this->next=NULL;

    }
};
void insert_any_position(Node * head, int pos, int val){
    Node * newNode = new Node(val);
    Node * tmp=head;
    for(int i=1; i<pos-1; i++){
        tmp=tmp->next;
    }
    newNode->next=tmp->next;
    tmp->next=newNode;
}
int size(Node* head){
    int count;
    Node * tmp= head;
    while(tmp!=NULL){
        count++;
        tmp=tmp->next;
    }
    return count;
}
void print_linked_list(Node * head){
    Node * tmp=head;
    while(tmp!=NULL){
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<endl;

    
}

int main(){
    Node * head= new Node (10);
    Node * a= new Node (20);
    Node * b= new Node (30);
    Node * c= new Node(40);
    head->next=a;
    a->next=b;
    b->next=c;
    print_linked_list(head);
    int pos, val;
    cin>>pos>>val;
    if(pos>size(head)){
        cout<<" Invalid Index"<<endl;
    }
    else{
         insert_any_position(head, pos,val);
    }

   
    print_linked_list(head);

    
    return 0;
}