#include "binary_trees.h"
/**
 * binary_tree_height - initializes prototype
 *
 * @tree: pointer to node to measure height
 *
 * Description: measures the height of a binary tree
 *
 * Return: height of tree, otherwise 0
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t heightleft, heightright;

	if (tree == NULL)
		return (0);
	heightleft = binary_tree_height(tree->left);
	heightright = binary_tree_height(tree->right);
	if (tree->parent == NULL)
		return (0);
	else
		return (1 + (heightleft > heightright ? heightleft : heightright));
	return (0);
}
