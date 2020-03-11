#include "binary_trees.h"
/**
 * binary_tree_size - function that measures the size of
 * a binary tree
 * @tree: is a pointer to the node to measure the depth
 * Return: number of nodes or = if tree is null
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t val = 0;
	size_t val1 = 0;

	if (tree == NULL)
		return (0);
	
	else
	{
		val = binary_tree_size(tree->left);
		val1 = binary_tree_size(tree->right);
	}
	return (val + val1 + 1);
		
}
