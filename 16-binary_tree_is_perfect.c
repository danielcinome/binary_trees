#include "binary_trees.h"
#include "14-binary_tree_balance.c"
#include "15-binary_tree_is_full.c"

/**
 * binary_tree_is_perfect - function that checks if a binary tree is perfect
 * @tree: is a pointer to the root node of the tree to check
 * Return: If tree is NULL, your function must return 0
*/

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int val_l = 0, val_r = 0, h_left = 0, h_right = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (tree->left)
		val_l = binary_tree_is_full(tree->left);
		h_left = binary_height(tree->left);
	if (tree->right)
		val_r = binary_tree_is_full(tree->right);
		h_right = binary_height(tree->right);
	if (h_left == h_right && val_l == 1 && val_r == 1)
		return (1);
	else
		return (0);
}
