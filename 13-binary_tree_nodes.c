#include "binary_trees.h"

/**
 * binary_tree_nodes - initializes prototype
 *
 * @tree: pointer to node to measure nodes
 *
 * Description: measures the nodes of a binary tree
 *
 * Return: nodes of a tree, otherwise 0
*/

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodesleft, nodesright, nodes;

	if (tree == NULL)
		return (0);

	nodesleft = binary_tree_nodes(tree->left);
	nodesright = binary_tree_nodes(tree->right);

	nodes = nodesleft + nodesright;

	if (tree->left != NULL || tree->right != NULL)
		nodes++;

	return (nodes);
}
