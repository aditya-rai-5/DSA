/*
Hashing is a technique used in data structures that efficiently stores and retrieves data in a way that allows for quick access.

1. Hashing involves mapping data to a specific index in a hash table (an array of items) using a hash function. It enables fast retrieval of information based on its key.
2. The great thing about hashing is, we can achieve all three operations (search, insert and delete) in O(1) time on average.
3. Hashing is mainly used to implement a set of distinct items (only keys) and dictionaries (key value pairs).

-->component of hashing:
----> key:A Key can be anything string or integer which is fed as input in the hash function the technique that determines an index or location for storage of an item in a data structure.
---->hash function:Receives the input key and returns the index of an element in an array called a hash table. The index is known as the hash index .
---->hash table:Hash table is typically an array of lists. It stores values corresponding to the keys. Hash stores the data in an associative manner
in an array where each data value has its own unique index.
*/