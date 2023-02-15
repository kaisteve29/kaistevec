#include<iostream>
using namespace std;

struct Node{
  int data;
  Node* left;
  Node* right;
};

Node* createNode(int value){
  Node* newNode= new Node();
  newNode->data= value;
  newNode->left= NULL;
  newNode->right= NULL;
  return newNode;
}

bool checkBinaryTree(Node* root){
  if(root==NULL){
    return 1;
  }
  if(root->right!= NULL){
    if(root->right->data <= root->data) 
      return 0;
  }

  if(root->left!= NULL){
    if(root->left->data >= root->data) 
      return 0;
  }

    return checkBinaryTree(root->left) & checkBinaryTree(root->right);

}

int calLength(Node* root){
  if(root== NULL) return 0;
  return 1 + calLength(root->left) + calLength(root->right);
  
}

int countBinaryTree(Node* root){
   if (root == NULL) return 0;
  if (checkBinaryTree(root)) return calLength(root);
  int leftRes = countBinaryTree(root->left);
  int rightRes = countBinaryTree(root->right);
  return leftRes < rightRes ? rightRes : leftRes;
  
}

int main(){
  Node* root=createNode(1);
  root->right= NULL;
  root->left= createNode(6);
  root->left->right= createNode(8);
  root->left->left= createNode(2);
  root->left->left->left= createNode(4);
  if(checkBinaryTree(root)== true){
    cout << "true" ;
  }
  else{
    cout << "false";
  }
  cout << endl;
  cout << countBinaryTree(root) << endl;
  return 0;
}
