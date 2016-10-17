//You are required to complete this method
#include<bits/stdc++.h>

void levelOrder(Node* node) {
    if(!node)   return;
    Node* temp, *root = node;
    queue<Node*> q;
    q.push(root);
    while(!q.empty()) {
        int len = q.size();
        for(int i = 0; i < len; i++) {
            temp = q.front();
            q.pop();
            cout << temp->data << " ";
            if(temp->left)  q.push(temp->left);
            if(temp->right) q.push(temp->right);
        }
        cout << "$ ";
    }
}


