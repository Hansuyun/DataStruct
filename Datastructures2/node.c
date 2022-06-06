#include <stdio.h>
#include "node.h"

void displayInorder(treeNode* root) {
    if (root) {
        displayInorder(root->left);
        print("%c_", root->key);
        displayInorder(root->right);
        
    }
}
