#include "binary_trees.h"
/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: is a pointer to the root node of the tree to check
 * Return: 1 if it's perfect , 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
if (tree == NULL)
return (0);
if (tree->left == NULL && tree->right == NULL)
return (1);
if (tree->left == NULL || tree->right == NULL)
return (0);

return (binary_tree_is_perfect(tree->left) && binary_tree_is_perfect(tree->right));
}
