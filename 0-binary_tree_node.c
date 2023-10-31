#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_node - create a binary tree
 * @parent: pointer to the parent node of the node to create
 * @value: value to put in new node
 * Return: pointer to the new node, NULL otherwise
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *nw = malloc(sizeof(binary_tree_t));

	if (nw == NULL)
		return (NULL);
	nw->parent = parent;
	nw->n = value;
	nw->left = NULL;
	nw->right = NULL;
	return (nw);
}
