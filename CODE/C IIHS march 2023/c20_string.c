// what is string in c.
// In C programming, a string is a sequence of characters terminated with a null character 
// A string is stored as an array of characters 
// The difference between a character array and a C string is that the string is terminated with a unique character 





// syntax | declaration of string
// data_type_char variable_name[array_size];

// for example
    // char c[5]="hello";    



































// How to initialize strings?
// You can initialize strings in a number of ways.

// char c[] = "abcd";

// char c[50] = "abcd";

// char c[] = {'a', 'b', 'c', 'd', '\0'};

// char c[5] = {'a', 'b', 'c', 'd', '\0'}; 





// Assigning Values to Strings
// Arrays and strings are second-class citizens in C; they do not support the assignment operator once it is declared. For example,

// char c[100];
// c = "C programming";  // Error! array type is not assignable.






























// Read String from the user
// You can use the scanf() function to read a string.

// The scanf() function reads the sequence of characters until it encounters whitespace (space, newline, tab, etc.).

// Example 1: scanf() to read a string
// #include <stdio.h>
// int main()
// {
//     char name[20];
//     printf("Enter name: ");
//     scanf("%s", name);
//     printf("Your name is %s.", name);
//     return 0;
// }
// Output

// Enter name: kamal nain
// Your name is kamal.































// How to read a line of text?
// You can use the fgets() function to read a line of string. And, you can use puts() to display the string.

// Example 2: fgets() and puts()
// #include <stdio.h>
// int main()
// {
//     char name[30];
//     printf("Enter name: ");
//     fgets(name, sizeof(name), stdin);  // read string
//     printf("Name: ");
//     puts(name);    // display string
//     return 0;
// }

// Output
// Enter name: kamal nain
// Name: kamal nain
































// standard library functions









// strlen()
// strlen() function in C is used to determine the length of a null-terminated string. It calculates the number of characters in a string until it reaches the null character ('\0').

// syntax of the strlen() function:
// #include <string.h>
// size_t strlen(const char *str);

// background function work
// int stringLength(const char* str) {
//     int length = 0;
//     while (str[length] != '\0') {
//         length++;
//     }
//     return length;
// }

// example:
// #include <stdio.h>
// #include <string.h>

// int main() {
//     const char *str = "Hello, World!";
//     size_t length = strlen(str);

//     printf("Length of the string: %zu\n", length);
//     return 0;
// }

// output:
// Length of the string: 13










// The strcat() function in C is used to concatenate (append) two strings together. It takes two arguments: the destination string and the source string. The strcat() function appends the contents of the source string to the end of the destination string.

// syntax of the strcat() function:
// #include <string.h>
// char *strcat(char *dest, const char *src);

// background function strcat work
// #include <stdio.h>
// void stringConcat(char* destination, const char* source) {
//     // Find the end of the destination string
//     int destIndex = 0;
//     while (destination[destIndex] != '\0') {
//         destIndex++;
//     }
//     // Append the source string to the destination string
//     int sourceIndex = 0;
//     while (source[sourceIndex] != '\0') {
//         destination[destIndex] = source[sourceIndex];
//         destIndex++;
//         sourceIndex++;
//     }
//     // Null-terminate the concatenated string
//     destination[destIndex] = '\0';
// }
// int main() {
//     char destination[50] = "Hello, ";
//     const char* source = "World!";
//     stringConcat(destination, source);
//     printf("Concatenated string: %s\n", destination);
//     return 0;
// }


// example usage of strcat():
// #include <stdio.h>
// #include <string.h>
// int main() {
//     char dest[20] = "Hello, ";
//     const char *src = "World!";
    
//     strcat(dest, src);
    
//     printf("Concatenated string: %s\n", dest);
    
//     return 0;
// }

// output:
// Concatenated string: Hello, World!



















































// The strncat() function in C is similar to strcat(), but it allows you to specify the maximum number of characters to append from the source string. It is useful when you want to control the length of the concatenation or when dealing with fixed-size buffers.

//syntax of the strncat() function:
// #include <string.h>
// char *strncat(char *dest, const char *src, size_t n);

// example usage of strncat():
// #include <stdio.h>
// #include <string.h>

// int main() {
//     char dest[20] = "Hello, ";
//     const char *src = "World!";
    
//     strncat(dest, src, 6);
    
//     printf("Concatenated string: %s\n", dest);
    
//     return 0;
// }






























// The strcpy() function in C is used to copy a string from the source to the destination. It takes two arguments: the destination string and the source string. The strcpy() function copies the contents of the source string to the destination string, including the null character ('\0').

// syntax of the strcpy() function:
// #include <string.h>
// char *strcpy(char *dest, const char *src);

// background function strcpy work
// #include <stdio.h>
// void stringCopy(char* destination, const char* source) {
//     int index = 0;
//     while (source[index] != '\0') {
//         destination[index] = source[index];
//         index++;
//     }
//     destination[index] = '\0';  // Null-terminate the copied string
// }
// int main() {
//     char destination[50];
//     const char* source = "Hello, World!";
//     stringCopy(destination, source);
//     printf("Copied string: %s\n", destination);
//     return 0;
// }



// example usage of strcpy():
// #include <stdio.h>
// #include <string.h>
// int main() {
//     char destination[20];
//     const char *source = "Hello, World!";
//     strcpy(destination, source);
//     printf("Copied string: %s\n", destination);
//     return 0;
// }

// output:
// Copied string: Hello, World!





























































// The strcmp() function in C is used to compare two strings lexicographically. It takes two arguments: the first string and the second string. The strcmp() function compares the two strings character by character until a difference is found or the end of one of the strings is reached.

// syntax of the strcmp() function:
// #include <string.h>
// int strcmp(const char *str1, const char *str2);

// #include <stdio.h>
// int stringCompare(const char* str1, const char* str2) {
//     int index = 0;
//     while (str1[index] != '\0' || str2[index] != '\0') {
//         if (str1[index] < str2[index]) {
//             return -1;
//         } else if (str1[index] > str2[index]) {
//             return 1;
//         }
//         index++;
//     }
//     return 0;
// }
// int main() {
//     const char* str1 = "Hello";
//     const char* str2 = "World";
//     int result = stringCompare(str1, str2);
//     if (result < 0) {
//         printf("str1 is less than str2\n");
//     } else if (result > 0) {
//         printf("str1 is greater than str2\n");
//     } else {
//         printf("str1 is equal to str2\n");
//     }
//     return 0;
// }


// example usage of strcmp():
// #include <stdio.h>
// #include <string.h>
// int main() {
//     const char *str1 = "apple";
//     const char *str2 = "banana";
//     int result = strcmp(str1, str2);
//     if (result < 0) {
//         printf("str1 is less than str2\n");
//     } else if (result > 0) {
//         printf("str1 is greater than str2\n");
//     } else {
//         printf("str1 is equal to str2\n");
//     }
//     return 0;
// }

// output:
// str1 is less than str2















































// The strrev() function is not a standard library function in C. It is not available in the standard C library <string.h>. However, you can write your own implementation of the strrev() function to reverse a string.

// background function
// void strrev(char *str) {
//     int length = strlen(str);
//     int i, j;
//     char temp;

//     for (i = 0, j = length - 1; i < j; i++, j--) {
//         temp = str[i];
//         str[i] = str[j];
//         str[j] = temp;
//     }
// }

// example implementation of strrev():
// #include <stdio.h>
// #include <string.h>

// int main() {
//     char str[] = "Hello, World!";

//     printf("Original string: %s\n", str);

//     strrev(str);

//     printf("Reversed string: %s\n", str);

//     return 0;
// }

// output:
// Original string: Hello, World!
// Reversed string: !dlroW ,olleH
















// The strlwr() function is not a standard library function in C. It is not available in the standard C library <string.h>. However, you can write your own implementation of the strlwr() function to convert a string to lowercase.

// background function work
// void strlwr(char *str) {
//     int length = strlen(str);
//     int i;

//     for (i = 0; i < length; i++) {
//         if (str[i] >= 'A' && str[i] <= 'Z') {
//             str[i] += ('a' - 'A');
//         }
//     }
// }

// example implementation of strlwr():
// #include <stdio.h>
// #include <string.h>

// int main() {
//     char str[] = "Hello, World!";
//     printf("Original string: %s\n", str);

//     strlwr(str);
//     printf("Lowercase string: %s\n", str);

//     return 0;
// }

// output:
// Original string: Hello, World!
// Lowercase string: hello, world!



















// The strupr() function is not a standard library function in C. It is not available in the standard C library <string.h>. However, you can write your own implementation of the strupr() function to convert a string to uppercase.

// background function work
// void strupr(char *str) {
//     int length = strlen(str);
//     int i;

//     for (i = 0; i < length; i++) {
//         if (str[i] >= 'a' && str[i] <= 'z') {
//             str[i] -= ('a' - 'A');
//         }
//     }
// }

// example implementation of strupr():
// #include <stdio.h>
// #include <string.h>
// int main() {
//     char str[] = "Hello, World!";
//     printf("Original string: %s\n", str);

//     strupr(str);
//     printf("Uppercase string: %s\n", str);

//     return 0;
// }

// output:
// Original string: Hello, World!
// Uppercase string: HELLO, WORLD!




















// The strstr() function in C is used to find the first occurrence of a substring within a string. It takes two arguments: the string to search in and the substring to search for. The strstr() function returns a pointer to the first occurrence of the substring in the string or a null pointer if the substring is not found.

// syntax of the strstr() function:
// #include <string.h>
// char *strstr(const char *str, const char *substr);


// example usage of strstr():
// #include <stdio.h>
// #include <string.h>
// int main() {
//     const char *str = "Hello, World!";
//     const char *substr = "World";

//     char *result = strstr(str, substr);

//     if (result != NULL) {
//         printf("Substring found at index: %ld\n", result - str);
//     } else {
//         printf("Substring not found\n");
//     }
//     return 0;
// }

// output:
// Substring found at index: 7
























// Passing the string as a pointer:
// When you pass a string as a pointer, you are passing the memory address of the first character of the string. The function can then access the string using pointer arithmetic.

// pointer example:
// #include <stdio.h>

// void printString(const char* str) {
//     printf("String: %s\n", str);
// }

// int main() {
//     const char* str = "Hello, World!";
//     printString(str);
//     return 0;
// }

// output:
// String: Hello, World!


//passing the string as a array
// array example:
// #include <stdio.h>
// void printString(char str[]) {
//     printf("String: %s\n", str);
// }

// int main() {
//     char str[] = "Hello, World!";
//     printString(str);
//     return 0;
// }
// output:
// String: Hello, World!

















// implementation without using standard library functions
// strlen()                 line no. 210
// strcat()                 line no. 250
// strcpy()                 line no. 400
// strcmp()                 line no. 500
// strrev()                 line no. 600
// uppercase to lowercase   line no. 650
// lowercase to uppercase   line no. 700
