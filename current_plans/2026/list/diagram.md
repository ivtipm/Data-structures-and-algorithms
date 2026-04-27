```mermaid

classDiagram

class OrderedCollection {}
class LinkedList {}
class DynamicArray {}

class Node{}

OrderedCollection <|..  LinkedList
OrderedCollection <|..  DynamicArray

LinkedList o-- Node
```
