#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: pointer to the parent node of the node to create
 * @value: value to put in new node
 * Return: pointer to the new node, NULL if parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
binary_tree_t *nw = malloc(sizeof(binary_tree_t));

if (parent == NULL)
return (NULL);
if (nw == NULL)
return (NULL);
nw->parent = parent;
nw->left = NULL;
nw->n = value;
if (parent->right != NULL)
{
nw->right = parent->right;
parent->right->parent = nw;
}
else
nw->right = NULL;
parent->right = nw;
return (nw);
}
