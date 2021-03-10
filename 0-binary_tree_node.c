#include "binary_trees.h"

/**
 * binary_tree_node - create a binary tree node
 * @parent: node create
 * @value: value store in new node
 * Return: value the nodo
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_nodo;

	new_nodo = malloc(sizeof(binary_tree_t));
	if (new_nodo == NULL)
		return (NULL);
	new_nodo->parent = parent;
	new_nodo->n = value;
	new_nodo->left = new_nodo->right = NULL;
	return (new_nodo);
}
