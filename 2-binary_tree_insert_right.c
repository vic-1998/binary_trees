#include "binary_trees.h"

/**
 * binary_tree_node_child_right - creates a binary tree node
 * @parent: node create
 * @value: value store in new node
 * Return: value the nodo
 */
binary_tree_t *binary_tree_node_child_right(binary_tree_t *parent, int value)
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
 * binary_tree_insert_right - inserts a node as the child_right
 * @parent: node create
 * @value: value store in new node
 *  Return: return the new create noe, or null on failure.
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{

	binary_tree_t *child_right;

	if (parent == NULL)
		return (NULL);
	child_right = binary_tree_node_child_right(parent, value);
	if (child_right == NULL)
		return (NULL);
	child_right->right = parent->right;
	if (child_right->right != NULL)
		child_right->right->parent = child_right;
	parent->right = child_right;
	return (child_right);
}
