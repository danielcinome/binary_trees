#include "binary_trees.h"
#include "9-binary_tree_height.c"
/**
 *  binary_tree_uncle - function that finds the uncle of a node
 *  @node:  is a pointer to the node to find the uncle
 *  Return: If node is NULL, return NULL
 *  If node has no uncle, return NULL
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->left != NULL && node->parent->right != NULL)
	{
		if (node->parent->parent == NULL)
			return (NULL);
		if (node->parent->left == node)
			return (node->parent->parent->left);
		else
			return (node->parent->parent->right);
	}
	return (0);
}
