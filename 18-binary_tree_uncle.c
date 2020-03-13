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
	int val = 0;

	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->left != NULL && node->parent->right != NULL)
	{
		if (node->parent->parent == NULL)
			return (NULL);
		if (node->parent->left == node)
		{
			while (node->parent != NULL)
			{
				node = node->parent;
				val++;
			}
			while (val > 1)
			{
				node = node->left;
				val--;
			}
			return (node);
		}
		else
		{
			while (node->parent != NULL)
			{
				node = node->parent;
				val++;
			}
			while (val > 1)
			{
				node = node->right;
				val--;
			}
			return (node);
		}
	}
	return (0);
}
