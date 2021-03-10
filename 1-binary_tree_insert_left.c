#include "binary_trees.h"

/**
 * binary_tree_node_child_left - creates a binary tree node
 * @parent: node create
 * @value: value store in new node
 * Return: value the nodo
 */
binary_tree_t *binary_tree_node_child_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);
	new_node->parent = parent;
	new_node->n = value;
	new_node->left = new_node->right = NULL;
	return (new_node);
}

/**
 * binary_tree_insert_left - inserts a node as the child_left
 * @parent: node create
 * @value: value store in new node
 *  Return: return the new create noe, or null on failure.
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *child_left;

	if (parent == NULL)
		return (NULL);
	child_left = binary_tree_node_child_left(parent, value);

	if (child_left == NULL)
		return (NULL);
	child_left->left = parent->left;
	if (child_left->left != NULL)
		child_left->left->parent = child_left;
	parent->left = child_left;
	return (child_left);
}
