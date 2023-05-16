#include "binary_trees.h"

/**
 * binary_tree_preorder - initialize prototype
 *
 * @tree: pointer to the root node of the tree to delete
 *
 * @func: pointer to call the function
 *
 * Description: traverses a binary tree using pre-order traversal
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL)
	{
		if (func == NULL || tree == NULL)
			return;

		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
