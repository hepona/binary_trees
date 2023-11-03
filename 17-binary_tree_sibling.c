#include "binary_trees.h"

/**
 * binary_tree_sibling - function that find the sibling of node
 * @node: pointer to the node to find the sibling
 * Return: pointer to the node, NULL otherwise
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
if (node == NULL || node->parent == NULL)
return (NULL);
if (node->parent->left == NULL && node->parent->right == NULL)
return (NULL);
else
{
if (node == node->parent->left)
return(node->parent->right);
if (node == node->parent->right)
return(node->parent->left);
}
return(NULL);
}
