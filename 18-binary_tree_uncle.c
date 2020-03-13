#include "binary_trees.h"
#include "17-binary_tree_sibling.c"
/**
 *  binary_tree_uncle - function that finds the uncle of a node
 *  @node:  is a pointer to the node to find the uncle
 *  Return: If node is NULL, return NULL
 *  If node has no uncle, return NULL
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *uncle;

	if (!node || !node->parent)
		return (NULL);
	uncle = binary_tree_sibling(node->parent);
	return (uncle);
}
