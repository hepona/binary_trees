#include "binary_trees.h"
#include "17-binary_tree_sibling.c"
/**
 * binary_tree_uncle -  function that finds the uncle of a node
 * @node: pointer to the node to find the uncle
 * Return: a pointer to the uncle node, NULL otherwise
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
if (node == NULL)
return (NULL);

if (binary_tree_sibling(node->parent))
{
return (binary_tree_sibling(node->parent));
}
return (NULL);
}
