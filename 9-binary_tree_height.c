#include "binary_trees.h"
/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height.
 * Return: the height of the tree, 0 otherwise
 */
size_t binary_tree_height(const binary_tree_t *tree)
{

if (tree == NULL)
return (0);
if (tree->left != NULL && tree->right != NULL)
return (2);
if (tree->left != NULL || tree->right != NULL)
return (1);

return (binary_tree_height(tree->right) + binary_tree_height(tree->left));
}
