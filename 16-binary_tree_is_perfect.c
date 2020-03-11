#include "binary_trees.h"

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
	if (val_l != val_r)
		return (0);
	else
		return (1);
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
