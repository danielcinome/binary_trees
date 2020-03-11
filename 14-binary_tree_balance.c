#include "binary_trees.h"
/**
 *  binary_tree_balance - function that measures the balance factor
 *  of a binary tree
 *  @tree: pointer to the tree
 *  Return: the balance factor or 0 is the tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int val = 0;
	int val1 = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		if (tree->left != NULL)
			val = binary_height(tree->left) + 1;
		if (tree->right != NULL)
			val1 = binary_height(tree->right) + 1;
	}
	return (val - val1);
}
/**
 *  binary_height - function that measures the height
 *  of a binary tree
 *  @tree: pointer to the tree
 *  Return: height of the tree or 0 if If tree is NULL
 */
int binary_height(const binary_tree_t *tree)
{
	int val = 0;
	int val1 = 0;

	if (tree != NULL)
	{
		if (tree->left != NULL)
			val = binary_height(tree->left) + 1;
		if (tree->right)
			val1 = binary_height(tree->right) + 1;
	}
	if (val > val1)
	{
		return (val);
	}
	else
		return (val1);
}
