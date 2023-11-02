#include "binary_trees.h"
/**
 * binary_tree_balance - measures the balance factor of a binary tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
    if (tree == NULL)
        return (0);

    if (tree->left != NULL && tree->right != NULL)
    {
        return (binary_tree_balance(tree->left) + binary_tree_balance(tree->right));
    }
    if (tree->left != NULL || tree->right != NULL)
    {
        return (1+binary_tree_balance(tree->left) + binary_tree_balance(tree->right));
    }

    return (0);
}
