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
 * binary_tree_height - that measures the height of a binary tree
 * @tree: pointer to the root node of the tree to traverse
 * Return: 1 if node is a leaf, and 0 otherwise. If node is NULL, return 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left, right;

	if (tree == NULL || check_binary_tree_is_leaf(tree))
		return (0);
	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);
	if (left >= right)
		return (1 + left);
	return (1 + right);
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: If tree is NULL, your function must return 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	binary_tree_t *left_node, *right_node;

	if (tree == NULL)
		return (0);
	left_node = tree->left;
	right_node = tree->right;

	if (check_binary_tree_is_leaf(tree))
		return (1);

	if (left_node == NULL || right_node == NULL)
		return (0);

	if (binary_tree_height(left_node) == binary_tree_height(right_node))
	{
		if (binary_tree_is_perfect(left_node) && binary_tree_is_perfect(right_node))
			return (1);
	}
	return (0);
}
