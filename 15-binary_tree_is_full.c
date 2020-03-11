#include "binary_trees.h"

/**
 * binary_tree_is_full - function that checks if a binary tree is full
 * @tree: is a pointer to the root node of the tree to check
 * Return: If tree is NULL, your function must return 0
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int val_l = 0, val_r = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
		val_l = binary_tree_is_full(tree->left);
	if (tree->right)
		val_r = binary_tree_is_full(tree->right);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (val_l == 0 || val_r == 0)
		return (0);
	else if (val_l != val_r)
		return (0);
	else
		return (1);
}
