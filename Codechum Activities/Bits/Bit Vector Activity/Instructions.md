# Bit Vector Activity by Edrian Guanzon

Given that a set represents a store branch and each position in a bit vector is a product, create the following functions:

- displayAvailableProducts() -> Display all product available

    - ```
        ex. 
        set -> 1 0 1 1 0 1 0 1
        output -> Available products: prod_7, prod_5, prod_4, prod_2, prod_0
        ```
- moveInventory() -> given 2 store branches, move the product from branch A to branch B if product is not available in branch B
    - ```
        ex. branch A -> 1 1 0 1 1 0 0 1
        branch B -> 1 1 1 0 0 1 0 1
        output: branch A -> prod_7 prod_6 prod_0
        branch B -> prod_7 prod_6 prod_5 prod_4 prod_3 prod_2 prod_0
        ```
- unavailableProducts() -> given 2 store branches, display all the unavailable products
    - ``` 
        ex. branchA -> 0 0 1 1 0 0 1 0
        branch B-> 0 1 0 0 1 0 1 0
        output-> Unavailable products: prod_7, prod_2, prod_0
        ```

 

## NOTE: 
Use variation 1 in adt guide list<br>
You can use helper functions

---

### Sample Output 1
```
Available products: prod_7 prod_5 prod_4 prod_2 prod_0
Products moved successfully.
Available products: prod_7 prod_6 prod_0
Available products: prod_7 prod_6 prod_5 prod_4 prod_3 prod_2 prod_0
Unavailable products: prod_7 prod_2 prod_0
```