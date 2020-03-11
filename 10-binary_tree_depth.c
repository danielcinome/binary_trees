#include "binary_trees.h"

/**
* binary_tree_depth - function that measures the
* depth of a node in a binary tree
* @tree: is a pointer to the node to measure the depth
* Return: If tree is NULL, your function must return 0
*/

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t val = 0;

	if (tree != NULL)
	{
		if (tree->parent != NULL)
			val = binary_tree_depth(tree->parent) + 1;
	}
	return (val);
}
