#include "binary_trees.h"
/**
 *  binary_tree_sibling - function that finds the sibling of a node
 *  @node:  pointer to the node to find the sibling
 *  Return: the sibling's node, NULL or the parent is NULL
 *  or has no sibling
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->left != NULL && node->parent->right != NULL)
	{
		if (node->parent->left == node)
			return (node->parent->right);
		else
			return (node->parent->left);
	}
	return (0);
}
