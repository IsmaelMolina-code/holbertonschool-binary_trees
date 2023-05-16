#include "binary_trees.h"

/**
 * binary_tree_size - initializes prototype
 *
 * @tree: pointer to node to measure size
 *
 * Description: measures the size of a binary tree
 *
 * Return: size of tree, otherwise 0
*/

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t sizeleft, sizeright, size;

	if (tree == NULL)
		return (0);

	sizeleft = binary_tree_size(tree->left);
	sizeright = binary_tree_size(tree->right);

	size = 1 + sizeleft + sizeright;

	return (size);
}
