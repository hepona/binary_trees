#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: pointer to the parent node of the node to create
 * @value: value to put in new node
 * Return: pointer to the new node, NULL if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
binary_tree_t *nw;

if (parent == NULL)
{
return (NULL);
}
nw = malloc(sizeof(binary_tree_t));
if (nw == NULL)
return (NULL);
nw->parent = parent;
nw->right = NULL;
nw->n = value;
if (parent->left != NULL)
{
nw->left = parent->left;
parent->left->parent = nw;
}
else
nw->left = NULL;
parent->left = nw;
return (nw);
}
