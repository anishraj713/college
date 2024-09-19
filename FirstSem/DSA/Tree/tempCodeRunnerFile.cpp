// Preorder traversal
void preorderTraversal(struct Node *node)
{
    if (node == NULL)
        return;
    cout << node->data << "->";
    preorderTraversal(node->left);
    preorderTraversal(node->right);
}

// Postorder traversal
void postorderTraversal(struct Node *node)
{
    if (node == NULL)
        return;
    postorderTraversal(node->left);
    postorderTraversal(node->right);
    cout << node->data << "->";
}