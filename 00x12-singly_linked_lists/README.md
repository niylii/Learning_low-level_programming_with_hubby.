# Singly linked lists:

 A **singly linked list** is a dynamic linear data structure that allows data management. Each element, known as a **node**, consists of two key components: a **data** and a **reference (or pointer)** to the next node in the sequence.

## Key Features:

- **Node Structure**:
  - **Data**: The value or information stored in the node.
  - **Next Pointer**: A reference to the next node in the list.

- **Head Pointer**: 
  - The list is accessed via a head pointer that points to the first node. If the list is empty, the head pointer is `null`.

- **Traversal**: 
  - To access elements, the list is traversed starting from the head, following the next pointers until reaching the end (indicated by a `null` pointer).


## Key Operations:
```plaintext
Operations
	├── Traversal
	│     └──  Forward Traversal : Start from the first node (head) and follow the next
		 pointers to access each node until the end is reached (null pointer).
	├── Insertion
	│     ├── At Head : Add a new node before the first node
	│     ├── At Tail : Add a new node after the last node.
	│     └── At Specific Position : Insert a new node at a given index.
	├── Deletion
	│     ├── At Head : Remove the first node.
	│     ├── At Tail : Remove the last node.
	│     └── At Specific Position : Remove a node at a given index.
	└── Searching
	      ├── By Value
	      └── By Index
```

### When and why using linked lists vs arrays?

| Criteria                      | Use Linked Lists         | Use Arrays               |
|-------------------------------|--------------------------|--------------------------|
| **Size**                      | Dynamic                  | Fixed                    |
| **Insertions/Deletions**      | Frequent and efficient    | Less efficient           |
| **Access Time**              | Sequential (O(n))        | Random access (O(1))     |
| **Memory Usage**             | Higher overhead (pointers)| Lower overhead (contiguous) |
| **Memory Fragmentation**      | Better management         | Can suffer from fragmentation |

### How to build and use linked lists?


#### 1. Define a Node
- **Data**: The value or information.
- **Next Pointer**: A reference to the next node.

#### 2. Create a Linked List
- Start with an empty list (no nodes).

#### 3. Insert Nodes
#### 4. Traverse the List
#### 5. Delete Nodes
#### 6. Display the List
- Print the data in each node from the head to the end.

> [!note]
> ## Explanation of `void print_first(void) __attribute__((constructor));`
> 
> - **What is it?**: The `__attribute__((constructor))` is a compiler feature in C. It acts like a special marker (or macro) that tells the compiler to run the `print_first` function automatically before the `main()` function starts.
> 
> - **Purpose**: This is useful for setting up things your program needs right away, like initializing variables or printing messages when the program begins.

### Files:
| Filename          | Description                                                       |
|-------------------|-------------------------------------------------------------------|
| `0-print_list.c`  | Prints all the elements of a `list_t` list.                     |
| `1-list_len.c`    | Returns the number of elements in a `linked_list_t` list.       |
| `2-add_node.c`    | Adds a new node at the beginning of a `list_t` list.            |
| `3-add_node_end.c`| Adds a new node at the end of a `list_t` list.                  |
| `4-free_list.c`   | Frees a `list_t` list.                                          |
| `100-first.c`     | Prints "You're beat! and yet, you must allow,\nI bore my house upon my back!" before the main function is executed. |
| `lists.h`         | The header file.                                                |


