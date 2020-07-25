#include "binary_trees.h"

/**
 * binary_tree_sibling - that finds the sibling of a node
 * @node: node
 *
 * Return: sibling
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL)
		return (NULL);

	if (node->parent != NULL)
	{
		if (node->parent->right != NULL)
		{
			if (node->parent->right->n == node->n)
				return (node->parent->left);
			else
				return (node->parent->right);
		}
	}
	return (NULL);
}
