<div align="center">
  <img src="https://capsule-render.vercel.app/api?type=waving&color=gradient&height=200&section=header&text=Data%20Structures%20%26%20Algorithms&fontSize=50&animation=fadeIn" alt="DSA Banner">

  # 🚀 Master Data Structures & Algorithms in C
  
  [![Language](https://img.shields.io/badge/Language-C-blue.svg?style=for-the-badge&logo=c)](https://en.wikipedia.org/wiki/C_(programming_language))
  [![Platform](https://img.shields.io/badge/Platform-Windows%20%7C%20Linux%20%7C%20macOS-lightgrey.svg?style=for-the-badge)]()
  [![Contributions Welcome](https://img.shields.io/badge/Contributions-Welcome-blueviolet.svg?style=for-the-badge)]()
  [![Open Source](https://img.shields.io/badge/Open%20Source-%E2%9D%A4-red.svg?style=for-the-badge)]()

  *A highly organized, comprehensive, and optimized collection of fundamental Data Structures and Algorithms implemented purely in **C**.*

  ---
</div>

## 🌟 Why This Repository?
Welcome to the **Data Structures and Algorithms (DSA)** repository! 
Whether you're preparing for technical interviews, brushing up on your basics, or learning DSA for the first time, you'll find clean, well-commented, and optimized code here. 

### ✨ Highlights
- 🧠 **Clear Implementations**: Focus on readability and standard practices.
- ⚡ **Optimized Code**: Written for maximum efficiency.
- 🧩 **Comprehensive Coverage**: From simple Arrays to complex Trees and advanced Sorting.

---

## 📚 Table of Contents
- [1️⃣ Arrays](#1️⃣-array)
- [2️⃣ Linked Lists](#2️⃣-linked-list)
- [3️⃣ Stacks](#3️⃣-stack)
- [4️⃣ Queues](#4️⃣-queue)
- [5️⃣ Searching and Sorting](#5️⃣-searching-and-sorting)
- [6️⃣ Trees](#6️⃣-tree)
- [🛠️ How to Compile and Run](#🛠️-how-to-compile-and-run)

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

<details>
<summary><b>🔗 Single Linked List</b> <i>(Click to expand)</i></summary>
<br>

| 📄 Program | 📝 Description |
|:---|:---|
| [`Implementation.c`](Linked%20List/SingleLinkedList/Implementation.c) | Core foundation and traversal of a singly linked list. |
| [`InsertionOfNode.c`](Linked%20List/SingleLinkedList/InsertionOfNode.c) | Techniques for adding nodes at the head, tail, or specific positions. |
| [`DeletionOfNode.c`](Linked%20List/SingleLinkedList/DeletionOfNode.c) | Safe removal of nodes from any given position. |
| [`LengthOfLinkedList.c`](Linked%20List/SingleLinkedList/LengthOfLinkedList.c) | Utility function to compute the total number of nodes. |
| [`ReverseALinkedList.c`](Linked%20List/SingleLinkedList/ReverseALinkedList.c) | Efficient algorithm to reverse the entire linked list in-place. |
</details>

<details>
<summary><b>🔗 Doubly Linked List</b> <i>(Click to expand)</i></summary>
<br>

| 📄 Program | 📝 Description |
|:---|:---|
| [`Implementation.c`](Linked%20List/DoublyLinekdList/Implementation.c) | Core foundation with two-way traversal capabilities. |
| [`InsertionOfNode.c`](Linked%20List/DoublyLinekdList/InsertionOfNode.c) | Bi-directional pointer management during insertion. |
| [`DeletionOfNode.c`](Linked%20List/DoublyLinekdList/DeletionOfNode.c) | Memory-safe node deletion in a doubly linked structure. |
| [`Reverse.c`](Linked%20List/DoublyLinekdList/Reverse.c) | Reversing the list by swapping next and previous pointers. |
</details>

<details>
<summary><b>🔄 Circular Linked List</b> <i>(Click to expand)</i></summary>
<br>

| 📄 Program | 📝 Description |
|:---|:---|
| [`ImplementationUsingHead.c`](Linked%20List/CircularLinkedList/ImplementationUsingHead.c) | Implementation keeping track of the Head pointer. |
| [`ImplementationUsingTailOnly.c`](Linked%20List/CircularLinkedList/ImplementationUsingTailOnly.c) | Implementation optimized by tracking only the Tail pointer. |
| [`ImplementationUsingHeadAndTail.c`](Linked%20List/CircularLinkedList/ImplementationUsingHeadAndTail.c) | Implementation tracking both Head and Tail for quick access. |
| [`InsertionOfNode.c`](Linked%20List/CircularLinkedList/InsertionOfNode.c) | Handling circular edge cases when adding nodes. |
| [`DeletionOfNode.c`](Linked%20List/CircularLinkedList/DeletionOfNode.c) | Safely unlinking nodes while preserving the circular structure. |
| [`Reverse.c`](Linked%20List/CircularLinkedList/Reverse.c) | Flipping the direction of the circular list. |
</details>

<details>
<summary><b>🔄🔗 Doubly Circular Linked List</b> <i>(Click to expand)</i></summary>
<br>

| 📄 Program | 📝 Description |
|:---|:---|
| [`Implementation.c`](Linked%20List/DoublyCircularLinkedList/Implementation.c) | Complex pointer management for a two-way circular structure. |
| [`InsertionOfNode.c`](Linked%20List/DoublyCircularLinkedList/InsertionOfNode.c) | Advanced insertion logic handling both direction and circularity. |
| [`Deletion.c`](Linked%20List/DoublyCircularLinkedList/Deletion.c) | Node deletion in a doubly circular linked structure. |
| [`Reverse.c`](Linked%20List/DoublyCircularLinkedList/Reverse.c) | Reversing the doubly circular linked list. |
</details>

<br>

### 3️⃣ Stack
The `Stack` module covers implementations of the **LIFO (Last-In-First-Out)** data structure using arrays and linked lists.

| 📄 Program | 📝 Description |
|:---|:---|
| [`ImplementationUsingArray.c`](Stack/ImplementationUsingArray.c) | Implementation of Stack using an Array. |
| [`ImplementationUsingLinkedList.c`](Stack/ImplementationUsingLinkedList.c) | Implementation of Stack using a Linked List. |

<br>

### 4️⃣ Queue
The `Queue` module covers implementations of the **FIFO (First-In-First-Out)** data structure and its variants.

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
The `Searching and Sorting` module covers fundamental algorithms for searching elements and sorting data. **✨ Updated with new files!**

| 📄 Program | 📝 Description |
|:---|:---|
| [`LinearSearch.c`](Searching%20and%20Sorting/LinearSearch.c) | Implementation of the Linear Search algorithm. |
| [`BinarySearch.c`](Searching%20and%20Sorting/BinarySearch.c) | Implementation of the Binary Search algorithm. |
| [`BubbleSort.c`](Searching%20and%20Sorting/BubbleSort.c) | Implementation of the Bubble Sort algorithm. |
| [`BubbleSortDescending.c`](Searching%20and%20Sorting/BubbleSortDescending.c) | Implementation of the Bubble Sort algorithm in descending order. |
| [`InsertionSort.c`](Searching%20and%20Sorting/InsertionSort.c) | Implementation of the Insertion Sort algorithm. |
| [`InsertionSortDescending.c`](Searching%20and%20Sorting/InsertionSortDescending.c) | Implementation of the Insertion Sort algorithm in descending order. |
| [`SelectionSort.c`](Searching%20and%20Sorting/SelectionSort.c) | Implementation of the Selection Sort algorithm. |
| [`SelectionSortDescending.c`](Searching%20and%20Sorting/SelectionSortDescending.c) | Implementation of the Selection Sort algorithm in descending order. |
| [`QuickSort.c`](Searching%20and%20Sorting/QuickSort.c) | Implementation of the Quick Sort algorithm. |
| [`QuickSortDescending.c`](Searching%20and%20Sorting/QuickSortDescending.c) | Implementation of the Quick Sort algorithm in descending order. |
| [`QuickSortLastPivot.c`](Searching%20and%20Sorting/QuickSortLastPivot.c) | Implementation of the Quick Sort algorithm using the last element as pivot. |
| [`QuickSortLastPivotDescending.c`](Searching%20and%20Sorting/QuickSortLastPivotDescending.c) | Implementation of the Quick Sort algorithm using the last element as pivot in descending order. |
| [`MergeSort.c`](Searching%20and%20Sorting/MergeSort.c) | Implementation of the Merge Sort algorithm. |
| [`MergeSortDescending.c`](Searching%20and%20Sorting/MergeSortDescending.c) | Implementation of the Merge Sort algorithm in descending order. |

<br>

### 6️⃣ Tree
The `Tree` module explores hierarchical data structures and their traversals.

| 📄 Program | 📝 Description |
|:---|:---|
| [`BinaryTreeTraversal.c`](Tree/BinaryTreeTraversal.c) | Implementation of Binary Tree traversals (Inorder, Preorder, Postorder). |
| [`ImplementationOfBinaryTree.c`](Tree/ImplementationOfBinaryTree.c) | Core implementation of a Binary Tree. |

---

## 🛠️ How to Compile and Run

To run any of the C programs locally, you'll need the `gcc` compiler. Follow these simple steps in your terminal:

```bash
# 1. Compile the code (Example for Array)
gcc Array/Declaration.c -o output

# 2. Run the executable
./output
```

> 💡 **Pro Tip:** All compiled executable files (`.exe` / `.out`) are typically ignored by Git to keep the repository clean and lightweight. Make sure your `.gitignore` is set up!

---

<div align="center">
  <img src="https://capsule-render.vercel.app/api?type=waving&color=gradient&height=100&section=footer" width="100%"/>
  <br>
  <b>Happy Coding! 💻🚀</b> <br>
  <i>If you found this repository helpful, consider giving it a ⭐!</i>
</div>