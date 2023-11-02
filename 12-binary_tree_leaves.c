#include "binary_trees.h"

/**
 * binary_tree_leave - function that counts the leaves in a binary tree
 * @tree: pointer to the root node of the tree to count the number of leaves
 * Return: number of leaves, 0 otherwise
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
size_t leaves = 0;
if (tree == NULL)
return (0);
if (tree->left != NULL)
{
leaves++;
}
if (tree->right != NULL)
{
leaves++;
}

return (leaves);
}