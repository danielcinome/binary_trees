#include "binary_trees.h"
/**
 *  binary_tree_nodes - function that counts the nodes with
 *  at least 1 child in a binary tree}
 *  @tree: is a pointer to the root node of the tree
 *  Return: If tree is NULL, the function must return 0
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t val = 0;
	size_t val1 = 0;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL || tree->right != NULL)
	{
		val = binary_tree_nodes(tree->left);
		val1 = binary_tree_nodes(tree->right) + 1;
	}
	return (val + val1);
}

