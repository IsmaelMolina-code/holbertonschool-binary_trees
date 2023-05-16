#include "binary_trees.h"
#include "9-binary_tree_height.c"

/**
 * binary_tree_is_perfect - initializes prototype
 *
 * @tree: pointer to node to measure the balance
 *
 * Description: measures if a binary tree is perfect
 *
 * Return: 1 if a tree is perfect, otherwise 0
*/

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t heightleft, heightright;

	if (tree == NULL)
		return (0);

	heightleft = binary_tree_height(tree->left);
	heightright = binary_tree_height(tree->right);

	if (heightleft == heightright)
	{
		if (tree->left == NULL && tree->right == NULL)
			return (1);

		if (tree->left && tree->right)
			return (binary_tree_is_perfect(tree->left) && binary_tree_is_perfect(tree->right));
	}

	return (0);
}
