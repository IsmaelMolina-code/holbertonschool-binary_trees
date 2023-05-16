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
	size_t heightleft, heightright, height;

	if (tree == NULL)
		return (0);

	heightleft = binary_tree_height(tree->left);
	heightright = binary_tree_height(tree->right);
	height = heightleft > heightright ? heightleft : heightright;

	if (tree->parent == NULL)
		return (height);
	else
		return (height + 1);
	return (0);
}
