# Spellbook - ADT Sets by Edwin Bartlett

## Objective
Implement an ADT for sets of strings in C to manage a wizard’s spellbook. Each spell is a unique string, and the spellbook must support typical set operations. **The implementation is linked list.**

 

Create a C program that defines and uses a Set ADT with the following operations:

- **Set\* createSet()** – Initializes an empty set.
- **bool addSpell(Set\*, const char\*)** – Adds a spell to the set (no duplicates).
- **bool removeSpell(Set\*\*, const char\*)** – Removes a spell from the set.
- **bool containsSpell(Set\*, const char\*)** – Checks if a spell exists in the set.
- **void printSet(Set\*)** – Displays all spells in the set.
- **void destroySet(Set\* set)** - Free all memory associated with the set.
- **Set\* unionSets(Set\*, Set\*)** – Returns a new set containing all spells from both sets.
- **Set\* intersectSets(Set\*, Set\*)** – Returns a new set containing only common spells.

---

### Sample Output 1
```
Common Spells:
  1. Inferno

All Spells:
  1. Aqua Jet
  2. Flame Burst
  3. Inferno

All Spells:
  1. Flame Burst
  2. Inferno
```