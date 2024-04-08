# C - Binary Trees

In computer science, a binary tree is a tree data structure in which each node has at most two children,
 referred to as the left child and the right child. That is, it is a k-ary tree with k = 2.
 A recursive definition using set theory is that a binary tree is a tuple (L, S, R),
 where L and R are binary trees or the empty set and S is a singleton set containing the root.

## Data structures

Please use the following data structures and types for binary trees. Don’t forget to include them in your header file.

	/**
	 * struct binary_tree_s - Binary tree node
	 *
	 * @n: Integer stored in the node
	 * @parent: Pointer to the parent node
	 * @left: Pointer to the left child node
	 * @right: Pointer to the right child node
	 */
	struct binary_tree_s
	{
	    int n;
	    struct binary_tree_s *parent;
	    struct binary_tree_s *left;
	    struct binary_tree_s *right;
	};

	typedef struct binary_tree_s binary_tree_t;
## Binary Search Tree

	typedef struct binary_tree_s bst_t;

## AVL Tree

	typedef struct binary_tree_s avl_t;

## Max Binary Heap

	typedef struct binary_tree_s heap_t;
note:
For tasks 0 to 23 (included), you have to deal with simple binary trees. 
They are not BSTs, thus they don’t follow any kind of rule.

## Tasks:

* **0. New node**
 * 0-binary_tree_node.c: C function that creates a binary tree node with a given parent and value.
Returns a pointer to the new node, or NULL on failure.

* **1. Insert left**
 * 1-binary_tree_insert: C function that inserts a node as the left-child of another.
Returns a pointer to the new node, or NULL on failure.
If the given parent already contains a left node, the new node takes its place and the old left-child becomes the left-child of the new node.

* **2. Insert right**
 * 2-binary_tree_insert_right.c: C function that inserts a node as the right-child of another.
Returns a pointer to the new node, or NULL on failure.
If the given parent already contains a right node, the new node takes its place and the old right-child becomes the right-child of the new node.

* **3. Delete**
 * 3-binary_tree_delete.c: C function that deletes an entire binary tree.

* **4. Is leaf**
 * 4-binary_tree_is_leaf.c: C function that checks if a given node is a leaf.
Returns 1 if the node is a leaf, 0 otherwise.

* **5. Is root**

 * 5-binary_tree_is_root.c: C function that checks if a given node is a root.
Returns 1 if the node is a root, 0 otherwise.

* **6. Pre-order traversal**
 * 6-binary_tree_preorder.c: C function that traverses a tree using pre-order traversal.

* **7. In-order traversal**
 * 7-binary_tree_inorder.c: C function that traverses a tree using in-order traversal.

* **8. Post-order traversal**
 * 8-binary_tree_postorder.c: C function that traverses a tree using post-order traversal.

* **9. Height**
 * 9-binary_tree_height.c: C function that returns the height of a binary tree.

* **10. Depth**
 * 10-binary_tree_depth.c: C function that returns the depth of a given node in a binary tree.

* **11. Size**
 * 11-binary_tree_size.c: C function that returns the size of a binary tree.

* **12. Leaves**
 * 12-binary_tree_leaves.c: C function that returns the number of leaves in a binary tree.

* **13. Nodes**
 * 13-binary_tree_nodes.c: C function that returns the number of nodes in a binary tree with at least one child.

* **14. Balance factor**
 * 14-binary_tree_balance.c: C function that returns the balance factor of a binary tree.

* **15. Is full**
 * 15-binary_tree_is_full.c: C function that checks if a binary tree is full.
Returns 1 if a tree is full, 0 otherwise.

* **16. Is perfect**
 * 16-binary_tree_is_perfect.c: C function that checks if a binary tree is perfect.
Returns 1 if a tree is perfect, 0 otherwise.

* **17. Sibling**
 * 17-binary_tree_sibling.c: C function that returns a pointer to the sibling of a given node in a binary tree.
Returns NULL if no sibling is found.

* **18. Uncle**
 * 18-binary_tree_uncle.c: C function that returns a pointer to the uncle of a given node in a binary tree.
Returns NULL if no uncle is found.

## Advance Task:

* **19. Lowest common ancestor**
 * 100-binary_trees_ancestor.c: C function that returns a pointer to the lowest common ancestor node of two given nodes in a binary tree.
Returns NULL if no common ancestor is found.
