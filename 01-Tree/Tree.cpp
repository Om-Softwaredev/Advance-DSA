#include<iostream>
#include<queue>
using namespace std;

class Node{
    public:
    int data; 
    Node *left,*right;
    Node(int value){
        data=value;
        left=right=NULL;
    }
};
int main(){
    int x;
    int first,second;
    cout<<"Enter value of root node : ";
    cin>>x;
    queue<Node*>q;
    Node *root = new Node(x);
    q.push(root);

    //Build the Binary tree
    while(!q.empty()){
        Node *temp = q.front();
        q.pop();
        cout<<"Enter the left node value of "<<temp->data<<" : ";
        cin>>first;// left node
        //left node
        if(first !=-1){
            temp->left= new Node(first);
            q.push(temp->left);
        }
        cout<<"Enter the right node value of "<<temp->data<<" : ";
        cin>>second;// ight node
        //right node
        if(second !=-1){
            temp->right= new Node(second);
            q.push(temp->right);
        }
    }
}