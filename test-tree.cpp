#include <bits/stdc++.h>

using namespace std;

struct node
{
  int data;
  struct node* left, *right;
  node(int val)
  {
    data = val;
    left = right = NULL;
  }
};

int main()
{
  node *root = new node(2);
  root->left        = new node(7);
  root->right       = new node(5);
  root->left->right = new node(6);
  root->left->right->left=new node(1);
  root->left->right->right=new node(11);
  root->right->right=new node(9);
  root->right->right->left=new node(4);
  
  return 0;
}
