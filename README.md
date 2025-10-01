# Pointer Operations in C++

**Aim:** To study and implement Pointer Operations (Call by Value and Call by Reference).  

**Software Required:** Visual Studio  

---

## Theory

A **pointer** in C++ is a variable that stores the **memory address** of another variable. It allows direct access and manipulation of the data stored at that address.

### Key Features

- **Storage of Address:** A pointer stores the memory location of a variable rather than its value.  
- **Indirect Access:** By dereferencing (`*`), we can access or modify the value at the address.  
- **Flexibility:** Enables dynamic memory allocation, efficient array handling, and call by reference.  

---

## Parameter Passing Techniques

### 1. Pass by Value  
A **copy** of the actual argument’s value is passed to the function. Changes inside the function do **not affect** the original variable.

### 2. Pass by Reference  
The function receives the actual variable itself (through an alias). Changes inside the function **directly affect** the original variable.  

### 3. Pass by Pointer  
The function receives the **address** of the variable. By dereferencing the pointer, the function modifies the original value.  

---

## Implementation

The following programs demonstrate different pointer operations and parameter passing techniques:  

- Swapping numbers by **pass by value**  
- Swapping numbers by **pass by pointer**  
- Swapping numbers by **pass by reference**  
- **Salary incrementation** using conditions and parameter passing  
- **Changing arrays** with pass by reference  

---

## Algorithms

### Program-1: Swapping Numbers by Pass by Value  

1. Start  
2. Declare two integer variables `a` and `b`.  
3. Call `swap(a, b)`.  
4. Inside function, interchange values using a temporary variable.  
5. Print `a` and `b` inside `main()`.  
6. End (original values remain unchanged).  

---

### Program-2: Swapping Numbers by Pass by Pointer  

1. Start  
2. Declare two integers `a` and `b`.  
3. Print original values.  
4. Call `swap(&a, &b)`.  
5. Inside function:  
   - Store `*x` in temp  
   - Assign `*y` to `*x`  
   - Assign temp to `*y`  
6. Print swapped values in `main()`.  
7. End  

---

### Program-3: Swapping Numbers by Pass by Reference  

1. Start  
2. Declare two integers `a` and `b`.  
3. Print original values.  
4. Call `swap(a, b)` where parameters are references.  
5. Inside function:  
   - Store `x` in temp  
   - Assign `y` to `x`  
   - Assign temp to `y`  
6. Print swapped values in `main()`.  
7. End  

---

### Program-4: Salary Incrementation  

1. Start  
2. Declare variables: `proj`, `pub`, `prof`, `new_proj`, `salary`.  
3. Input values for all.  
4. If `proj > 0 && prof > 100000 && new_proj > 0` → call `increment_ref(salary)` (increases salary by 20%).  
5. Else → call `increment_val(salary)` (no change, since pass by value).  
6. Print final salary.  
7. End  

---

### Program-5: Changing Array  

1. Start  
2. Declare arrays: `arr[5] = {1,2,3,4,5}` and `arr1[5] = {2,4,6,8,10}`.  
3. Define `change_val(int &x, int val)` → updates `x = val`.  
4. Print original array.  
5. For each element in `arr`, call `change_val(arr[i], 1000)`.  
6. Print updated array.  
7. End  

---

## Conclusion  

The programs successfully demonstrate **pointer operations** and **parameter passing methods** in C++:

- **Pass by Value** → works on copies, original unchanged.  
- **Pass by Reference & Pointer** → modify actual variables, changes persist.  

Applications include **swapping numbers, salary calculation, and array modification**, highlighting how pointers and references enable efficient in-place updates.  
