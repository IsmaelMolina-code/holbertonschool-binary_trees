#include "binary_trees.h"

/**
 * binary_tree_leaves - initializes prototype
 *
 * @tree: pointer to node to measure leaves
 *
 * Description: measures the leaves of a binary tree
 *
 * Return: leaves of a tree, otherwise 0
*/

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leavesleft, leavesright, leaves;

	if (tree == NULL)
		return (0);

	leavesleft = binary_tree_leaves(tree->left);
	leavesright = binary_tree_leaves(tree->right);

	leaves = leavesleft + leavesright;

	if (leaves == 0)
		return (1);

	return (leaves);
}
