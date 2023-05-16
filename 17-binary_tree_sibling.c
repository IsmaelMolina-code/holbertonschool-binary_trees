#include "binary_trees.h"

/**
 * binary_tree_sibling - intializes prototype
 * 
 * Description: finds node sibling
 * 
 * @node: pointer to node
 * 
 * Return: pointer to sibling
*/

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node->parent->left == NULL || node->parent->right == NULL)
		return (NULL);

	if (node->parent->left == node)
		return (node->parent->right);
	else
		return (node->parent->left);

	return (0);
}
