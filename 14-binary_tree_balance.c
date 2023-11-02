#include "binary_trees.h"
/**
 * binary_tree_balance - measures the balance factor of a binary tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
int balance = 0;
if (tree == NULL)
return (0);
if (tree->left != NULL)
balance++;
if (tree->right != NULL)
balance++;
if (balance == 1)
balance = -balance;
return (balance);
}
