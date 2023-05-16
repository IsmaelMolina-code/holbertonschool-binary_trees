#include "binary_trees.h"

/**
 * binary_tree_is_full - initializes prototype
 *
 * @tree: pointer to node to measure the existance of nodes
 *
 * Description: measures if a binary tree is full
 *
 * Return: 1 if tree is full, otherwise 0
*/

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL || tree->parent == NULL)
		return (0);

	if (tree->left != NULL && tree->right != NULL)
		return (1);
	else
		return (0);

	return (0);
}
