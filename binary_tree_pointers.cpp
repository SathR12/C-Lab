

#include <stdio.h>
#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

typedef long long ll;
typedef vector<int> vt;
typedef unordered_map<int, int> umap;
typedef unsigned ud;

struct Node {
    int key;
    Node *right;
    Node *left;
    
};


Node* create_node(int key) {
    Node *node = new Node();
    node -> key = key;
    node -> left = NULL;
    node -> right = NULL;
    
    return node;
    
}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
  
    
    return 0;
}


