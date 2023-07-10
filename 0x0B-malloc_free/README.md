##C - malloc, free                                                                                                                  ####TASKS                                                                                                                                                                                             ####[0. Float like a butterfly, sting like a bee](0-create_array.c)                                                                                                                                                                                                     - Write a function that creates an array of chars, and initializes
 it with a specific char.
                                                                                                                                    - Prototype: char *create_array(unsigned int size, char c);
                                                                  - Returns NULL if size = 0                                                                                                          - Returns a pointer to the array, or NULL if it fails                                                                                                                                                 ####[1. The woman who has no imagination has no wings](1-strdup.c)
                                                                  
- Write a function that returns a pointer to a newly allocated spa
ce in memory, which contains a copy of the string given as a param
eter.
- Prototype: int **alloc_grid(int width, int height);

- Each element of the grid should be initialized to 0

- The function should return NULL on failure

- If width or height is 0 or negative, return NULL


####[4. It's not bragging if you can back it up](4-free_grid.c)


Write a function that frees a 2 dimensional grid previously created by your alloc_grid function.


Prototype: void free_grid(int **grid, int height);

Note that we will compile with your alloc-grid.c file. Make sure it compiles.


####[5. It isn't the mountains ahead to climb that wear you out; it's the pebble in your shoe](100-argstostr.c)


- Write a function that concatenates all the arguments of your program.
- Returns NULL if ac == 0 or av == NULL

- Returns a pointer to a new string, or NULL if it fails

- Each argument should be followed by a \n in the new string  


####[6. I will show you how great I am] (101-strtow.c)


- Write a function that splits a string into words.


- Prototype: char **strtow(char *str);

- The function returns a pointer to an array of strings (words)

- Each element of this array should contain a single word, null-terminated

- The last element of the returned array should be NULL

- Words are separated by spaces

- Returns NULL if str == NULL or str == ""

- If your function fails, it should return NULL
