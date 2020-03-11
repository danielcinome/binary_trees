#include "binary_trees.h"
/**
 * binary_tree_leaves - function that counts the leaves
 * in a binary tree
 * @tree: is a pointer to the node to measure the depth
 * Return: If tree is NULL, the function must return 0
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t val = 0;
	size_t val1 = 0;

	if (tree == NULL)
		return (0);
	
	else
	{	if (tree->left == NULL && tree->right == NULL)
			return (1);
		if (tree->left != NULL)
			val = binary_tree_leaves(tree->left);
		if (tree->right != NULL)
			val1 = binary_tree_leaves(tree->right);
	}
	return (val + val1);
		
}
