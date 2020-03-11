#include "binary_trees.h"
#include "9-binary_tree_height.c"
#include "11-binary_tree_size.c"
/**
 * binary_tree_is_perfect - function that checks if a binary tree is perfect
 * @tree: is a pointer to the root node of the tree to check
 * Return: If tree is NULL, your function must return 0
*/

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t h = 0, max = 2, size = 0;
	size_t count = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	h = binary_tree_height(tree);
	count = 1;
	while (count < h + 1)
	{
		max *= 2;
		count++;
	}
	max = max - 1;
	size = binary_tree_size(tree);
	if (max == size || size == 0)
		return (1);
	else
		return (0);
}
