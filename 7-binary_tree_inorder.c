#include "binary_trees.h"

/**
 * binary_tree_inorder - go through a binary tree using in-order traversal
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to a function to call for each node.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
if (tree == NULL || func == NULL)
return;
if (tree->left != NULL || tree->right != NULL)
{
func(tree->left->left->n);
func(tree->left->n);
func(tree->left->right->n);
func(tree->n);
func(tree->right->left->n);
func(tree->right->n);
func(tree->right->right->n);
}
}
