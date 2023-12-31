#include "binary_trees.h"
/**
 * binary_tree_is_full - check if the binary tree is full
 * @tree: pointer to the root node
 * Return: 1 if it's full, 0 otherwise
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
if (tree == NULL)
return (0);
if (tree->left != NULL && tree->right != NULL)
return (1);
return (binary_tree_is_full(tree->left));
}
