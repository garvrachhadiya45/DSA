<div align="center">

# 🧩 Data Structures

### A curated, multi-language collection of classic data structure implementations — clean code, clear explanations, and complexity you can trust.

<p>
  <img src="https://img.shields.io/badge/C-A8B9CC?style=for-the-badge&logo=c&logoColor=black" alt="C"/>
  <img src="https://img.shields.io/badge/C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white" alt="C++"/>
  <img src="https://img.shields.io/badge/Python-3776AB?style=for-the-badge&logo=python&logoColor=white" alt="Python"/>
  <img src="https://img.shields.io/badge/Java-ED8B00?style=for-the-badge&logo=openjdk&logoColor=white" alt="Java"/>
</p>

<p>
  <img src="https://img.shields.io/badge/status-actively--maintained-brightgreen?style=flat-square" alt="status"/>
  <img src="https://img.shields.io/badge/license-MIT-blue?style=flat-square" alt="license"/>
  <img src="https://img.shields.io/badge/PRs-welcome-orange?style=flat-square" alt="PRs welcome"/>
  <img src="https://img.shields.io/badge/tests-passing-success?style=flat-square" alt="tests"/>
  <img src="https://img.shields.io/badge/made%20with-%E2%9D%A4-red?style=flat-square" alt="made with love"/>
</p>

</div>

<br/>

## 📖 About

This repository is a hands-on reference for **core data structures**, implemented from scratch in **C**, **C++**, **Python**, and **Java**. Each structure includes:

- 📝 A short conceptual overview
- ⏱️ Time & space complexity for every operation
- 💻 A minimal, readable code preview
- 🔗 A direct link to the full implementation + tests

Whether you're prepping for interviews, brushing up on fundamentals, or teaching a CS course, this repo is built to be **skimmable, correct, and easy to extend**.

<br/>

## 📑 Table of Contents

<div align="center">

[![🔷 Arrays](https://img.shields.io/badge/🔷_Arrays-4B8BBE?style=for-the-badge)](#-arrays)
[![🔗 Linked Lists](https://img.shields.io/badge/🔗_Linked_Lists-8E44AD?style=for-the-badge)](#-linked-lists)
[![📚 Stacks](https://img.shields.io/badge/📚_Stacks-E67E22?style=for-the-badge)](#-stacks)

[![🎟️ Queues](https://img.shields.io/badge/🎟️_Queues-16A085?style=for-the-badge)](#️-queues)
[![🌳 Trees](https://img.shields.io/badge/🌳_Trees-27AE60?style=for-the-badge)](#-trees)
[![🕸️ Graphs](https://img.shields.io/badge/🕸️_Graphs-2C3E50?style=for-the-badge)](#️-graphs)

[![🗂️ Hash Tables](https://img.shields.io/badge/🗂️_Hash_Tables-C0392B?style=for-the-badge)](#️-hash-tables)
[![⛰️ Heaps](https://img.shields.io/badge/⛰️_Heaps-F39C12?style=for-the-badge)](#️-heaps)
[![🔤 Tries](https://img.shields.io/badge/🔤_Tries-2980B9?style=for-the-badge)](#-tries)

</div>

<div align="center">

[![Complexity Cheat Sheet](https://img.shields.io/badge/⏱️_Complexity_Cheat_Sheet-555555?style=flat-square)](#️-complexity-cheat-sheet)
[![Repo Structure](https://img.shields.io/badge/🗺️_Repo_Structure-555555?style=flat-square)](#️-repo-structure)
[![Contributing](https://img.shields.io/badge/🤝_Contributing-555555?style=flat-square)](#-contributing)
[![License](https://img.shields.io/badge/📄_License-555555?style=flat-square)](#-license)

</div>

<br/>


## ⏱️ Complexity Cheat Sheet

| Structure | Access | Search | Insert | Delete | Space |
|---|:---:|:---:|:---:|:---:|:---:|
| Array | `O(1)` | `O(n)` | `O(n)` | `O(n)` | `O(n)` |
| Linked List | `O(n)` | `O(n)` | `O(1)`* | `O(1)`* | `O(n)` |
| Stack | `O(n)` | `O(n)` | `O(1)` | `O(1)` | `O(n)` |
| Queue | `O(n)` | `O(n)` | `O(1)` | `O(1)` | `O(n)` |
| Binary Search Tree (avg) | `O(log n)` | `O(log n)` | `O(log n)` | `O(log n)` | `O(n)` |
| Graph (adjacency list) | — | `O(V + E)` | `O(1)` | `O(E)` | `O(V + E)` |
| Hash Table (avg) | — | `O(1)` | `O(1)` | `O(1)` | `O(n)` |
| Binary Heap | `O(1)`† | `O(n)` | `O(log n)` | `O(log n)` | `O(n)` |
| Trie | — | `O(k)` | `O(k)` | `O(k)` | `O(n·k)` |

<sub>*with a reference to the node · †for min/max only · `k` = key length · worst-case values may differ, see individual sections</sub>

<br/>

---

## 🔷 Arrays

> Contiguous, fixed-size (or dynamically resized) blocks of memory offering fast indexed access.

**Complexity**

| Operation | Time | Space |
|---|:---:|:---:|
| Access by index | `O(1)` | `O(1)` |
| Search (unsorted) | `O(n)` | `O(1)` |
| Insert / Delete (end) | `O(1)` amortized | `O(1)` |
| Insert / Delete (middle) | `O(n)` | `O(1)` |

<details>
<summary>💻 Preview — C</summary>

```c
int arr[100];
int size = 0;

void push(int value) {
    arr[size++] = value;
}

int get(int index) {
    return arr[index];
}
```
</details>

<div align="center">

[![C](https://img.shields.io/badge/C-A8B9CC?style=for-the-badge&logo=c&logoColor=black)](arrays/c/array.c)
[![C++](https://img.shields.io/badge/C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)](arrays/cpp/array.cpp)
[![Python](https://img.shields.io/badge/Python-3776AB?style=for-the-badge&logo=python&logoColor=white)](arrays/python/array.py)
[![Java](https://img.shields.io/badge/Java-ED8B00?style=for-the-badge&logo=openjdk&logoColor=white)](arrays/java/Array.java)

</div>

<br/>

## 🔗 Linked Lists

> Nodes linked via pointers/references — efficient inserts and deletes without shifting elements.

**Complexity**

| Operation | Time | Space |
|---|:---:|:---:|
| Access by index | `O(n)` | `O(1)` |
| Search | `O(n)` | `O(1)` |
| Insert / Delete (head) | `O(1)` | `O(1)` |
| Insert / Delete (tail, no tail ptr) | `O(n)` | `O(1)` |

<details>
<summary>💻 Preview — C++</summary>

```cpp
struct Node {
    int data;
    Node* next;
};

void pushFront(Node*& head, int value) {
    Node* node = new Node{value, head};
    head = node;
}
```
</details>

<div align="center">

[![C](https://img.shields.io/badge/C-A8B9CC?style=for-the-badge&logo=c&logoColor=black)](linked-lists/c/linked_list.c)
[![C++](https://img.shields.io/badge/C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)](linked-lists/cpp/linked_list.cpp)
[![Python](https://img.shields.io/badge/Python-3776AB?style=for-the-badge&logo=python&logoColor=white)](linked-lists/python/linked_list.py)
[![Java](https://img.shields.io/badge/Java-ED8B00?style=for-the-badge&logo=openjdk&logoColor=white)](linked-lists/java/LinkedList.java)

</div>

<br/>

## 📚 Stacks

> Last-In-First-Out (LIFO) structure — think function calls, undo history, and expression parsing.

**Complexity**

| Operation | Time | Space |
|---|:---:|:---:|
| Push | `O(1)` | `O(1)` |
| Pop | `O(1)` | `O(1)` |
| Peek | `O(1)` | `O(1)` |

<details>
<summary>💻 Preview — Python</summary>

```python
class Stack:
    def __init__(self):
        self._items = []

    def push(self, value):
        self._items.append(value)

    def pop(self):
        return self._items.pop()
```
</details>

<div align="center">

[![C](https://img.shields.io/badge/C-A8B9CC?style=for-the-badge&logo=c&logoColor=black)](stacks/c/stack.c)
[![C++](https://img.shields.io/badge/C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)](stacks/cpp/stack.cpp)
[![Python](https://img.shields.io/badge/Python-3776AB?style=for-the-badge&logo=python&logoColor=white)](stacks/python/stack.py)
[![Java](https://img.shields.io/badge/Java-ED8B00?style=for-the-badge&logo=openjdk&logoColor=white)](stacks/java/Stack.java)

</div>

<br/>

## 🎟️ Queues

> First-In-First-Out (FIFO) structure — the backbone of scheduling, BFS, and buffering.

**Complexity**

| Operation | Time | Space |
|---|:---:|:---:|
| Enqueue | `O(1)` | `O(1)` |
| Dequeue | `O(1)` | `O(1)` |
| Peek | `O(1)` | `O(1)` |

<details>
<summary>💻 Preview — Java</summary>

```java
class Queue<T> {
    private LinkedList<T> items = new LinkedList<>();

    void enqueue(T value) { items.addLast(value); }
    T dequeue() { return items.removeFirst(); }
}
```
</details>

<div align="center">

[![C](https://img.shields.io/badge/C-A8B9CC?style=for-the-badge&logo=c&logoColor=black)](queues/c/queue.c)
[![C++](https://img.shields.io/badge/C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)](queues/cpp/queue.cpp)
[![Python](https://img.shields.io/badge/Python-3776AB?style=for-the-badge&logo=python&logoColor=white)](queues/python/queue.py)
[![Java](https://img.shields.io/badge/Java-ED8B00?style=for-the-badge&logo=openjdk&logoColor=white)](queues/java/Queue.java)

</div>

<br/>

## 🌳 Trees

> Hierarchical structures — binary trees, BSTs, AVL trees, and traversal algorithms.

**Complexity (Binary Search Tree)**

| Operation | Average | Worst Case |
|---|:---:|:---:|
| Search | `O(log n)` | `O(n)` |
| Insert | `O(log n)` | `O(n)` |
| Delete | `O(log n)` | `O(n)` |

<details>
<summary>💻 Preview — C</summary>

```c
typedef struct Node {
    int val;
    struct Node *left, *right;
} Node;

Node* insert(Node* root, int val) {
    if (!root) {
        Node* n = malloc(sizeof(Node));
        n->val = val;
        n->left = n->right = NULL;
        return n;
    }
    if (val < root->val) root->left = insert(root->left, val);
    else root->right = insert(root->right, val);
    return root;
}
```
</details>

<div align="center">

[![C](https://img.shields.io/badge/C-A8B9CC?style=for-the-badge&logo=c&logoColor=black)](trees/c/tree.c)
[![C++](https://img.shields.io/badge/C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)](trees/cpp/tree.cpp)
[![Python](https://img.shields.io/badge/Python-3776AB?style=for-the-badge&logo=python&logoColor=white)](trees/python/tree.py)
[![Java](https://img.shields.io/badge/Java-ED8B00?style=for-the-badge&logo=openjdk&logoColor=white)](trees/java/Tree.java)

</div>

<br/>

## 🕸️ Graphs

> Vertices and edges modeling networks, dependencies, and relationships — includes BFS, DFS, and Dijkstra.

**Complexity (Adjacency List)**

| Operation | Time | Space |
|---|:---:|:---:|
| Add vertex | `O(1)` | `O(1)` |
| Add edge | `O(1)` | `O(1)` |
| BFS / DFS | `O(V + E)` | `O(V)` |
| Dijkstra (binary heap) | `O((V + E) log V)` | `O(V)` |

<details>
<summary>💻 Preview — C++</summary>

```cpp
class Graph {
    unordered_map<int, vector<int>> adj;
public:
    void addEdge(int u, int v) {
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
};
```
</details>

<div align="center">

[![C](https://img.shields.io/badge/C-A8B9CC?style=for-the-badge&logo=c&logoColor=black)](graphs/c/graph.c)
[![C++](https://img.shields.io/badge/C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)](graphs/cpp/graph.cpp)
[![Python](https://img.shields.io/badge/Python-3776AB?style=for-the-badge&logo=python&logoColor=white)](graphs/python/graph.py)
[![Java](https://img.shields.io/badge/Java-ED8B00?style=for-the-badge&logo=openjdk&logoColor=white)](graphs/java/Graph.java)

</div>

<br/>

## 🗂️ Hash Tables

> Key-value storage with (near) constant-time lookups via hashing and collision resolution.

**Complexity**

| Operation | Average | Worst Case |
|---|:---:|:---:|
| Insert | `O(1)` | `O(n)` |
| Search | `O(1)` | `O(n)` |
| Delete | `O(1)` | `O(n)` |

<details>
<summary>💻 Preview — Python</summary>

```python
class HashTable:
    def __init__(self, size=16):
        self.buckets = [[] for _ in range(size)]

    def put(self, key, value):
        idx = hash(key) % len(self.buckets)
        self.buckets[idx].append((key, value))
```
</details>

<div align="center">

[![C](https://img.shields.io/badge/C-A8B9CC?style=for-the-badge&logo=c&logoColor=black)](hash-tables/c/hash_table.c)
[![C++](https://img.shields.io/badge/C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)](hash-tables/cpp/hash_table.cpp)
[![Python](https://img.shields.io/badge/Python-3776AB?style=for-the-badge&logo=python&logoColor=white)](hash-tables/python/hash_table.py)
[![Java](https://img.shields.io/badge/Java-ED8B00?style=for-the-badge&logo=openjdk&logoColor=white)](hash-tables/java/HashTable.java)

</div>

<br/>

## ⛰️ Heaps

> Complete binary trees satisfying the heap property — the engine behind priority queues and heap sort.

**Complexity**

| Operation | Time | Space |
|---|:---:|:---:|
| Get min/max | `O(1)` | `O(1)` |
| Insert | `O(log n)` | `O(1)` |
| Extract min/max | `O(log n)` | `O(1)` |
| Build heap | `O(n)` | `O(n)` |

<details>
<summary>💻 Preview — Java</summary>

```java
PriorityQueue<Integer> minHeap = new PriorityQueue<>();
minHeap.add(5);
int smallest = minHeap.peek();
```
</details>

<div align="center">

[![C](https://img.shields.io/badge/C-A8B9CC?style=for-the-badge&logo=c&logoColor=black)](heaps/c/heap.c)
[![C++](https://img.shields.io/badge/C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)](heaps/cpp/heap.cpp)
[![Python](https://img.shields.io/badge/Python-3776AB?style=for-the-badge&logo=python&logoColor=white)](heaps/python/heap.py)
[![Java](https://img.shields.io/badge/Java-ED8B00?style=for-the-badge&logo=openjdk&logoColor=white)](heaps/java/Heap.java)

</div>

<br/>

## 🔤 Tries

> Prefix trees optimized for fast string search, autocomplete, and dictionary lookups.

**Complexity** (`k` = key length)

| Operation | Time | Space |
|---|:---:|:---:|
| Insert | `O(k)` | `O(k)` |
| Search | `O(k)` | `O(1)` |
| Prefix search | `O(k)` | `O(1)` |

<details>
<summary>💻 Preview — C</summary>

```c
#define ALPHABET 26

typedef struct TrieNode {
    struct TrieNode* children[ALPHABET];
    int isEnd;
} TrieNode;

void insert(TrieNode* root, const char* word) {
    TrieNode* node = root;
    for (int i = 0; word[i]; i++) {
        int idx = word[i] - 'a';
        if (!node->children[idx])
            node->children[idx] = calloc(1, sizeof(TrieNode));
        node = node->children[idx];
    }
    node->isEnd = 1;
}
```
</details>

<div align="center">

[![C](https://img.shields.io/badge/C-A8B9CC?style=for-the-badge&logo=c&logoColor=black)](tries/c/trie.c)
[![C++](https://img.shields.io/badge/C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)](tries/cpp/trie.cpp)
[![Python](https://img.shields.io/badge/Python-3776AB?style=for-the-badge&logo=python&logoColor=white)](tries/python/trie.py)
[![Java](https://img.shields.io/badge/Java-ED8B00?style=for-the-badge&logo=openjdk&logoColor=white)](tries/java/Trie.java)

</div>


<br/>

<div align="center">

**⭐ If this repo helped you, consider giving it a star!**

[![Star this repo](https://img.shields.io/badge/⭐_Star_this_Repo-FFD700?style=for-the-badge&logoColor=black)](../../stargazers)


</div>
