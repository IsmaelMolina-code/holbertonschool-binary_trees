#include "binary_trees.h"

/**
 * binary_tree_postorder - initialize prototype
 *
 * @tree: pointer to the root node of the tree to delete
 *
 * @func: pointer to call the function
 *
 * Description: traverses a binary tree using post-order traversal
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL)
	{
		if (func == NULL || tree == NULL)
			return;

		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
