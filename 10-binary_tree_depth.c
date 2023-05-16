#include "binary_trees.h"

/**
 * binary_tree_depth - initializes prototype
 *
 * @tree: pointer to node to measure depth
 *
 * Description: measures the depth of a binary tree
 *
 * Return: depth of tree, otherwise 0
*/

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depthleft = 0, depthright = 0, depth;

	if (tree == NULL)
		return (0);

	depth = depthleft > depthright ? depthleft : depthright;

	depthleft = binary_tree_depth(tree->left);
	depthright = binary_tree_depth(tree->right);

	while (tree->parent != NULL)
	{
		depth++;
		tree = tree->parent;
	}

	return (depth);
}
