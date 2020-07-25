#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: root node
 *
 * Return: size_t
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	int count = 0;

	if (tree == NULL)
		return (0);

	while (tree->parent != NULL)
	{
		tree = tree->parent;
		count++;
	}
	return (count);
}
