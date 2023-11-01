#include "binary_trees.h"
/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height.
 * Return: the height of the tree, 0 otherwise
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
    size_t h = 0;

    if (tree == NULL)
        return (0);

    if (tree->right != NULL)
        h++;
    if (tree->left != NULL)
        h++;
    return (h);
}