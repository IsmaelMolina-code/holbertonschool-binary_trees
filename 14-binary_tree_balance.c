#include "binary_trees.h"
#include "9-binary_tree_height.c"

/**
 * binary_tree_balance - initializes prototype
 *
 * @tree: pointer to node to measure the balance
 *
 * Description: measures the balance of a binary tree
 *
 * Return: balance of a tree, otherwise 0
*/

int binary_tree_balance(const binary_tree_t *tree)
{
	size_t balanceleft, balanceright;

	if (tree == NULL)
		return (0);

	balanceleft = binary_tree_height(tree->left);
	balanceright = binary_tree_height(tree->right);

	return (balanceleft - balanceright);
}
