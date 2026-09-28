<div align="center">
  
# 🚀 Data Structures & Algorithms in C

[![Language](https://img.shields.io/badge/Language-C-blue.svg)](https://en.wikipedia.org/wiki/C_(programming_language))
[![Data Structures](https://img.shields.io/badge/Topic-Data_Structures-brightgreen.svg)]()
[![Algorithms](https://img.shields.io/badge/Topic-Algorithms-orange.svg)]()
[![Contributions Welcome](https://img.shields.io/badge/Contributions-Welcome-blueviolet.svg)]()

*A comprehensive collection of foundational data structures and algorithms, implemented purely in **C**.*

</div>

---

## 🌟 About This Repository

Welcome to the **Data Structures and Algorithms (DSA)** repository! This project serves as a practical, easy-to-understand reference for anyone looking to master the core concepts of computer science. Whether you're preparing for technical interviews, brushing up on your basics, or learning DSA for the first time, you'll find clean, well-commented, and optimized code here.

---

## 📂 Repository Structure

### 1️⃣ Array
The `Array` module explores fundamental operations on both 1D and 2D arrays, covering everything from basic traversal to complex pointer arithmetic.

| 📄 Program | 📝 Description |
|:---|:---|
| [`Declaration.c`](Array/Declaration.c) | Basic declaration and initialization of 1D arrays. |
| [`2DArrayDeclaration.c`](Array/2DArrayDeclaration.c) | Examples of declaring, initializing, and traversing 2D arrays (matrices). |
| [`Insertion.c`](Array/Insertion.c) | Algorithm to insert an element at a specific index in a sorted/structured array. |
| [`InsertedIfUnSortedArray.c`](Array/InsertedIfUnSortedArray.c) | Logic for inserting elements into an unsorted array efficiently. |
| [`Deletion.c`](Array/Deletion.c) | Algorithm to delete an element from a specific index and shift remaining elements. |
| [`DeletionInUnsortedArray.c`](Array/DeletionInUnsortedArray.c) | Optimized deletion approach for unsorted arrays (replacing with the last element). |
| [`PointersInArray.c`](Array/PointersInArray.c) | Exploring the relationship between arrays and pointers in C. |
| [`Pointersin2DArray.c`](Array/Pointersin2DArray.c) | Advanced concepts covering pointer arithmetic with 2D arrays. |

<br>

### 2️⃣ Linked List
The `Linked List` section dives deep into dynamic memory allocation, providing robust implementations of various linked list types.

#### 🔗 [Single Linked List](Linked%20List/SingleLinkedList)
| 📄 Program | 📝 Description |
|:---|:---|
| [`Implementation.c`](Linked%20List/SingleLinkedList/Implementation.c) | Core foundation and traversal of a singly linked list. |
| [`InsertionOfNode.c`](Linked%20List/SingleLinkedList/InsertionOfNode.c) | Techniques for adding nodes at the head, tail, or specific positions. |
| [`DeletionOfNode.c`](Linked%20List/SingleLinkedList/DeletionOfNode.c) | Safe removal of nodes from any given position. |
| [`LengthOfLinkedList.c`](Linked%20List/SingleLinkedList/LengthOfLinkedList.c) | Utility function to compute the total number of nodes. |
| [`ReverseALinkedList.c`](Linked%20List/SingleLinkedList/ReverseALinkedList.c) | Efficient algorithm to reverse the entire linked list in-place. |

#### 🔗 [Doubly Linked List](Linked%20List/DoublyLinekdList)
| 📄 Program | 📝 Description |
|:---|:---|
| [`Implementation.c`](Linked%20List/DoublyLinekdList/Implementation.c) | Core foundation with two-way traversal capabilities. |
| [`InsertionOfNode.c`](Linked%20List/DoublyLinekdList/InsertionOfNode.c) | Bi-directional pointer management during insertion. |
| [`DeletionOfNode.c`](Linked%20List/DoublyLinekdList/DeletionOfNode.c) | Memory-safe node deletion in a doubly linked structure. |
| [`Reverse.c`](Linked%20List/DoublyLinekdList/Reverse.c) | Reversing the list by swapping next and previous pointers. |

#### 🔄 [Circular Linked List](Linked%20List/CircularLinkedList)
| 📄 Program | 📝 Description |
|:---|:---|
| [`ImplementationUsingHead.c`](Linked%20List/CircularLinkedList/ImplementationUsingHead.c) | Implementation keeping track of the Head pointer. |
| [`ImplementationUsingTailOnly.c`](Linked%20List/CircularLinkedList/ImplementationUsingTailOnly.c) | Implementation optimized by tracking only the Tail pointer. |
| [`ImplementationUsingHeadAndTail.c`](Linked%20List/CircularLinkedList/ImplementationUsingHeadAndTail.c) | Implementation tracking both Head and Tail for quick access. |
| [`InsertionOfNode.c`](Linked%20List/CircularLinkedList/InsertionOfNode.c) | Handling circular edge cases when adding nodes. |
| [`DeletionOfNode.c`](Linked%20List/CircularLinkedList/DeletionOfNode.c) | Safely unlinking nodes while preserving the circular structure. |
| [`Reverse.c`](Linked%20List/CircularLinkedList/Reverse.c) | Flipping the direction of the circular list. |

#### 🔄🔗 [Doubly Circular Linked List](Linked%20List/DoublyCircularLinkedList)
| 📄 Program | 📝 Description |
|:---|:---|
| [`Implementation.c`](Linked%20List/DoublyCircularLinkedList/Implementation.c) | Complex pointer management for a two-way circular structure. |
| [`InsertionOfNode.c`](Linked%20List/DoublyCircularLinkedList/InsertionOfNode.c) | Advanced insertion logic handling both direction and circularity. |
| [`Deletion.c`](Linked%20List/DoublyCircularLinkedList/Deletion.c) | Node deletion in a doubly circular linked structure. |
| [`Reverse.c`](Linked%20List/DoublyCircularLinkedList/Reverse.c) | Reversing the doubly circular linked list. |

<br>

### 3️⃣ Stack
The `Stack` module will cover implementations of the LIFO (Last-In-First-Out) data structure using arrays and linked lists.

| 📄 Program | 📝 Description |
|:---|:---|
| [`ImplementationUsingArray.c`](Stack/ImplementationUsingArray.c) | Implementation of Stack using an Array. |
| [`ImplementationUsingLinkedList.c`](Stack/ImplementationUsingLinkedList.c) | Implementation of Stack using a Linked List. |

<br>

### 4️⃣ Queue
The `Queue` module covers implementations of the FIFO (First-In-First-Out) data structure and its variants.

| 📄 Program | 📝 Description |
|:---|:---|
| [`ImplementationUsingArray.c`](Queue/ImplementationUsingArray.c) | Implementation of a linear Queue using an Array. |
| [`ImplementationUsingLinkedList.c`](Queue/ImplementationUsingLinkedList.c) | Implementation of a linear Queue using a Linked List. |
| [`ImplementationUsingStack.c`](Queue/ImplementationUsingStack.c) | Implementation of a Queue using two Stacks. |
| [`CircularQueueUsingArray.c`](Queue/CircularQueueUsingArray.c) | Implementation of a Circular Queue using an Array. |
| [`CircularQueueUsingLinkedList.c`](Queue/CircularQueueUsingLinkedList.c) | Implementation of a Circular Queue using a Linked List. |
| [`ImplementationOfDeque.c`](Queue/ImplementationOfDeque.c) | Implementation of a Double-ended Queue (Deque). |

<br>

### 5️⃣ Searching and Sorting
The `Searching and Sorting` module covers fundamental algorithms for searching elements and sorting data.

| 📄 Program | 📝 Description |
|:---|:---|
| [`LinearSearch.c`](Searching%20and%20Sorting/LinearSearch.c) | Implementation of the Linear Search algorithm. |
| [`BubbleSort.c`](Searching%20and%20Sorting/BubbleSort.c) | Implementation of the Bubble Sort algorithm. |
| [`BubbleSortDescending.c`](Searching%20and%20Sorting/BubbleSortDescending.c) | Implementation of the Bubble Sort algorithm in descending order. |

<br>

### 6️⃣ Tree
The `Tree` module explores hierarchical data structures and their traversals.

| 📄 Program | 📝 Description |
|:---|:---|
| [`BinaryTreeTraversal.c`](Tree/BinaryTreeTraversal.c) | Implementation of Binary Tree traversals (Inorder, Preorder, Postorder). |

---

## 🛠️ How to Compile and Run

To run any of the C programs locally, you'll need the `gcc` compiler. Follow these simple steps in your terminal:

```bash
# 1. Compile the code
gcc Array/FileName.c -o output

# 2. Run the executable
./output
```

> 💡 **Pro Tip:** All compiled executable files (`.exe` / `.out`) are ignored by Git to keep the repository clean and lightweight.

---

<div align="center">
  <b>Happy Coding! 💻🚀</b> <br>
  <i>If you found this repository helpful, consider giving it a ⭐!</i>
</div>