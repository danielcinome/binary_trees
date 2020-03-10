#include "binary_trees.h"

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t val = 0;

	if (tree != NULL)
	{
		if (tree->left != NULL)
			val = binary_tree_height(tree->left) + 1;
		if (tree->right)
			val = binary_tree_height(tree->right) + 1;
	}
	return (val);
}
