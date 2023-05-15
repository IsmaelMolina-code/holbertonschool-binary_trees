#include "binary_trees.h"

/**
 * *binary_tree_insert_left - initializes protoype
 *
 * @parent: pointer to the parent node of the node to create
 *
 * @value: value to put in the new node
 *
 * Description: inserts a node as the left-child of another node
 *
 * Return: A pointer to the new node, NULL if it fails
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	struct binary_tree_s *new_node;

	if (parent == NULL)
		return (NULL);

	new_node = malloc(sizeof(struct binary_tree_s));

	if (new_node == NULL)
		return (NULL);

	new_node->n = value;
	new_node->left = parent->left;
	new_node->right = NULL;
	new_node->parent = parent;

	if (parent->left != NULL)
		parent->left->parent = new_node;

	parent->left = new_node;

	return (new_node);
}
