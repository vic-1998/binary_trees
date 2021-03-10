#include "binary_trees.h"

/**
 * check_binary_tree_is_leaf - check if a node is a leaf
 * @node: pointer to the node to check
 * Return:1 if a leaf,  and 0 is not leaf
 */
int check_binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node != NULL && node->left == NULL && node->right == NULL)
		return (1);
	return (0);
}

/**
 * binary_tree_nodes - counts the nodes with at
 * least 1 child in a binary tree
 * @tree: pointer to the root node of the tree to
 * count the number of nodes
 * Return: If tree is NULL, the function must return 0
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t left, right;

	if (tree == NULL || check_binary_tree_is_leaf(tree))
		return (0);
	left = binary_tree_nodes(tree->left);
	right = binary_tree_nodes(tree->right);
	return (1 + left + right);
}
