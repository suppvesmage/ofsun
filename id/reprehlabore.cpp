void computeHeight(Node* node) {
    if (node == nullptr) {
        return; // Base case for null nodes
    }
    
    if (node->left == nullptr && node->right == nullptr) {
        node->height = 0; // Base case for leaf nodes
    } else {
        computeHeight(node->left); // Recursive call on left child
        computeHeight(node->right); // Recursive call on right child
        node->height = 1 + std::max(node->left->height, node->right->height); // Calculate height of current node
    }
}
