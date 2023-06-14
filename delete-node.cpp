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
void delete_node_position(Node * head,int pos){
    
    Node * tmp= head;
    for(int i=1; i<pos-1; i++){
        tmp=tmp->next;
    }
    Node * delete_node= tmp->next;
    tmp->next=tmp->next->next;
    delete delete_node;
}
void print_linked_list(Node *head){
    Node * tmp= head;
    while(tmp!=NULL){
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<endl;
}
int size(Node * head){
    int count=0;
    Node *tmp=head;
    while(tmp!=NULL){
        count++;
        tmp=tmp->next;
    }
    return count;
}
int main(){
    Node * head= new Node(10);
    Node * a= new Node(20);
    Node * b= new Node(30);
    Node * c= new Node(40);
    head->next=a;
    a->next=b;
    b->next=c;
    print_linked_list(head);
    int pos;
    cin>>pos;
    if(pos>=size(head)){
        cout<<" Invalid index"<<endl;
    }
    else {
        delete_node_position(head,pos);
    }
    
    print_linked_list(head);


    
    return 0;
}