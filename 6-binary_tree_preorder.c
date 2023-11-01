#include "binary_trees.h"

/**
 * binary_tree_preorder - go through a binary tree using pre-order traversal
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to a function to call for each node.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
    if (tree == NULL || func == NULL)
        return;
    if (tree->left != NULL || tree->right != NULL)
    {
        func(tree->n);
        func(tree->left->n);
        func(tree->left->left->n);
        func(tree->left->right->n);
        func(tree->right->n);
        func(tree->right->left->n);
        func(tree->right->right->n);
    }
}