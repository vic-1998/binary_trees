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
 * binary_tree_leaves - that counts the leaves in a binary tree
 * @tree: pointer to the root node of the tree to
 * count the number of leaves
 * Return: A NULL pointer is not a leaf
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left, right;

	if (tree == NULL)
		return (0);
	if (check_binary_tree_is_leaf(tree))
		return (1);
	left = binary_tree_leaves(tree->left);
	right = binary_tree_leaves(tree->right);
	return (left + right);
}
