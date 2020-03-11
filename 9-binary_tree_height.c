#include "binary_trees.h"
/**
 *  binary_tree_height - function that measures the height
 *  of a binary tree
 *  @tree: pointer to the tree
 *  Return: height of the tree or 0 if If tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t val = 0;
	size_t val1 = 0;

	if (tree == NULL)
		return (0);

	if (tree != NULL)
	{
		if (tree->left != NULL)
			val = binary_tree_height(tree->left) + 1;
		if (tree->right != NULL)
			val1 = binary_tree_height(tree->right) + 1;
	}
	if (val > val1)
	{
		return (val);
	}
	else
		return (val1);
}
