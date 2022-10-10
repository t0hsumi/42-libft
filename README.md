# Libft

Code a *C* library regrouping usual functions.

## The Project

Create the programs `libft.a` which contains the important functions below.

### part 1
Re-code a set of libc functions. All created functions must be prefixed by `ft_`.
For instance, `strlen` becomes `ft_strlen`.

Re-code the following functions without any external functions.
- memset
- bzero
- memcpy
- memccpy
- memmove
- memchr
- memcmp
- strlen
- strlcpy
- strlcat
- strchr
- strrchr
- strnstr
- strncmp
- atoi
- isalpha
- isdigit
- isalnum
- isascii
- isprint
- toupper
- tolower

Re-code the following functions, using the function `malloc`.
- calloc
- strdup

### part 2
Code a set of useful functions that are either not included in the libc, or included in a different form.

---

`char   *ft_substr(char const *s, unsigned int start, size_t len)`

Description | Param. #1 | Param. #2 | Param. #3 | external functs. | Return Value
:-----------: | :-----------: | :-----------: | :-----------: | :-----------:| :-----------:
Allocates (with malloc) and returns a substring from the string given in argument. The substring begins at index 'start' and is of maximum size 'len'| The string from which create the substring | The start index of the substring in the string| The maximum length of the substring | malloc | The substring. NULL if the allocation fails

---

`char *ft_strjoin(char const *s1, char const *s2)`

Description | Param. #1 | Param. #2 | external functs. | Return Value
:-----------: | :-----------: | :-----------: | :-----------:| :-----------:
Allocates (with malloc) and returns a new string, result of the concatenation of s1 and s2 |The prefix string |The suffix string | malloc | The new string. NULL if the allocation fails

---

`char *ft_strtrim(char const *s1, char const *set)`

Description | Param. #1 | Param. #2 | external functs. | Return Value
:-----------: | :-----------: | :-----------: | :-----------:| :-----------:
Allocates (with malloc) and returns a copy of the string given as argument without the characters specified in the set argument at the beginning and the end of the string|The string to be trimmed |The reference set of characters to trim | malloc |  The trimmed string. NULL if the allocation fails

---

`char **ft_split(char const *s, char c)`

Description | Param. #1 | Param. #2 | external functs. | Return Value
:-----------: | :-----------: | :-----------: | :-----------:| :-----------:
Allocates (with malloc) and returns an array of strings obtained by splitting s using the character 'c' as a delimiter. The array must be ended by a NULL pointer|The string to be split |The delimiter character| malloc | The array of new strings result of the split. NULL if the allocation fails

---

`char   ft_itoa(int n)`

Description | Param. #1 | external functs. | Return Value
:-----------: | :-----------: | :-----------:| :-----------:
Allocates (with malloc) and returns a string representing the integer received as an argument. Negative numbers must be handled | The integer to convert |malloc | The string representing the integer. NULL if the allocation fails.

---

`char *ft_strmapi(char const *s, char (*f)(unsigned int, char))`

Description | Param. #1 | Param. #2 | Return Value
:-----------: | :-----------: | :-----------: | :-----------:
Applies the function f to each character of the string passed as argument to create a new string (with malloc) resulting from successive applications of f |The string on which to iterate| The function to apply to each character| The string created from the successive applications of f. Returns NULL if the allocation fails

---

`void ft_putchar_fd(char c, int fd)`

Description | Param. #1 | Param. #2 | external functs. | Return Value
:-----------: | :-----------: | :-----------: | :-----------:| :-----------:
Output the character 'c' to the given file descriptor | the character to output | the file descriptor on which to write |write| None

---

`void ft_putstr_fd(char *s, int fd)`

Description | Param. #1 | Param. #2 | external functs. | Return Value
:-----------: | :-----------: | :-----------: | :-----------:| :-----------:
Output the string 's' to the given file descriptor | the character to output | the file descriptor on which to write |write| None

---

`void ft_putendl_fd(char *s, int fd)`

Description | Param. #1 | Param. #2 | external functs. | Return Value
:-----------: | :-----------: | :-----------: | :-----------:| :-----------:
Output the string 's' to the given file descriptor followed by a newline | the character to output | the file descriptor on which to write |write| None

---

`void ft_putnbr_fd(int n, int fd)`

Description | Param. #1 | Param. #2 | external functs. | Return Value
:-----------: | :-----------: | :-----------: | :-----------:| :-----------:
Output the integer 'n' to the given file descriptor followed by a newline | the character to output | the file descriptor on which to write |write| None

### Bonus part
Code some singly-linked list utilities. All the files in this part prefixed by `ft_lst`.

### misc
- In no way can it quit abruptly.
  (segmentation fault, bus error, double free, etc).
- All heap allocated memory space must be properly freed when necessary.
  No leaks will be tolerated.
- Global variables are forbidden.
- All code must conform to the [42 Norm](https://github.com/42School/norminette).
- Use the command **ar** to create library.

## Usage

Clone this repository and run `make`, and make the archive file `libft.a`.
This file itself isn't executable, so if you want to use functions declared here,
compile with this archive file. For example, when main.c in the current directory use functions defined here, type that command.
```bash
gcc -I./ ./main.c -o main libft.a
./main
```

## Author

[Twitter](https://twitter.com/t76_1205)

## Licence

[MIT](./LICENSE)