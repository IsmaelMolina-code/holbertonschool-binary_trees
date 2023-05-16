#include "binary_trees.h"

/**
 * binary_tree_inorder - initialize prototype
 *
 * @tree: pointer to the root node of the tree to delete
 *
 * Description: traverses a binary tree using pre-order traversal
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL)
	{
		if (func == NULL || tree == NULL)
			return;
			
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
