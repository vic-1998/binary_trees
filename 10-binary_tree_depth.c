#include "binary_trees.h"

/**
 * binary_tree_depth - hat measures the depth of a node in a binary tree
 * @tree: pointer to the node to measure the depth
 * Return: 1 if node is a leaf, and 0 otherwise. If node is NULL, return 0
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t let = 0;

	if (tree == NULL)
		return (let);
	while (tree->parent != NULL)
	{
		let++;
		tree = tree->parent;
	}
	return (let);
}
