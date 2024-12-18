// File handling 
// operations on files, such as reading data from files, writing data to files, and manipulating file contents. This is achieved using the file handling functions provided by the C standard library.

// The key steps in file handling are:

// Opening a File: To perform any operation on a file, you need to open it first. The fopen() function is used to open a file and returns a pointer to a FILE structure that represents the file.

// Reading from a File: Once a file is opened for reading, you can use functions like fgetc(), fgets(), or fread() to read data from the file into variables or arrays.

// Writing to a File: When a file is opened for writing, you can use functions like fputc(), fputs(), or fwrite() to write data to the file from variables or arrays.

// Closing a File: After performing the required operations on a file, it should be closed using the fclose() function. Closing a file ensures that any buffered data is written to the file and releases the associated resources.







// #include <stdio.h>

// int main() {
//     FILE *inputFile, *outputFile;
//     char ch;

//     // // Open input file for reading
//     // inputFile = fopen("file\\input.txt", "r");
//     // if (inputFile == NULL) {
//     //     printf("Failed to open input file.\n");
//     //     return 1;
//     // }

//     // Open output file for writing
//     outputFile = fopen("file\\input.txt", "w");
//     if (outputFile == NULL) {
//         printf("Failed to open output file.\n");
//         fclose(inputFile);
//         return 1;
//     }

//     // Read from input file and write to output file
//     while ((ch = fgetc(inputFile)) != EOF) {
//         fputc(ch, outputFile);
//     }

//     // Close both files
//     fclose(inputFile);
//     fclose(outputFile);

//     printf("File copied successfully.\n");

//     return 0;
// }














































// // Write to a text file
// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
//    int num;
//    FILE *fptr;

//    // use appropriate location if you are using MacOS or Linux
//    fptr = fopen("..\\file\\program.txt","w");

//    if(fptr == NULL)
//    {
//       printf("Error!");   
//       exit(1);             
//    }

//    printf("Enter num: ");
//    scanf("%d",&num);

//    fprintf(fptr,"%d",num);
//    fclose(fptr);

//    return 0;
// }
























// // Example 2: Read from a text file
// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
//    int num;
//    FILE *fptr;

//    if ((fptr = fopen("..\\file\\program.txt","r")) == NULL){
//        printf("Error! opening file");

//        // Program exits if the file pointer returns NULL.
//        exit(1);
//    }

//    fscanf(fptr,"%d", &num);

//    printf("Value of n=%d", num);
//    fclose(fptr); 
  
//    return 0;
// }



























// // Example 3: Write to a binary file using fwrite()
// #include <stdio.h>
// #include <stdlib.h>

// struct threeNum
// {
//    int n1, n2, n3;
// };

// int main()
// {
//    int n;
//    struct threeNum num;
//    FILE *fptr;

//    if ((fptr = fopen("..\\file\\program.bin","wb")) == NULL){
//        printf("Error! opening file");

//        // Program exits if the file pointer returns NULL.
//        exit(1);
//    }

//    for(n = 1; n < 5; ++n)
//    {
//       num.n1 = n;
//       num.n2 = 5*n;
//       num.n3 = 5*n + 1;
//       fwrite(&num, sizeof(struct threeNum), 1, fptr); 
//    }
//    fclose(fptr); 
//    return 0;
// }


















// // Example 4: Read from a binary file using fread()
// #include <stdio.h>
// #include <stdlib.h>

// struct threeNum
// {
//    int n1, n2, n3;
// };

// int main()
// {
//    int n;
//    struct threeNum num;
//    FILE *fptr;

//    if ((fptr = fopen("..\\file\\program.bin","rb")) == NULL){
//        printf("Error! opening file");

//        // Program exits if the file pointer returns NULL.
//        exit(1);
//    }

//    for(n = 1; n < 5; ++n)
//    {
//       fread(&num, sizeof(struct threeNum), 1, fptr); 
//       printf("n1: %d\tn2: %d\tn3: %d\n", num.n1, num.n2, num.n3);
//    }
//    fclose(fptr); 
  
//    return 0;
// }



















// Getting data using fseek()
// If you have many records inside a file and need to access a record at a specific position, you need to loop through all the records before it to get the record.

// This will waste a lot of memory and operation time. An easier way to get to the required data can be achieved using fseek().

// Syntax of fseek()
// fseek(FILE * stream, long int offset, int whence);

// Different whence in fseek()
// Whence	    Meaning
// SEEK_SET	    Starts the offset from the beginning of the file.
// SEEK_END	    Starts the offset from the end of the file.
// SEEK_CUR	    Starts the offset from the current location of the cursor in the file.

// // Example 5: fseek()
// #include <stdio.h>
// #include <stdlib.h>

// struct threeNum
// {
//    int n1, n2, n3;
// };

// int main()
// {
//    int n;
//    struct threeNum num;
//    FILE *fptr;

//    if ((fptr = fopen("..\\file\\program.bin","rb")) == NULL){
//        printf("Error! opening file");

//        // Program exits if the file pointer returns NULL.
//        exit(1);
//    }
   
//    // Moves the cursor to the end of the file
//    fseek(fptr, -sizeof(struct threeNum), SEEK_END);

//    for(n = 1; n < 5; ++n)
//    {
//       fread(&num, sizeof(struct threeNum), 1, fptr); 
//       printf("n1: %d\tn2: %d\tn3: %d\n", num.n1, num.n2, num.n3);
//       fseek(fptr, -2*sizeof(struct threeNum), SEEK_CUR);
//    }
//    fclose(fptr); 
  
//    return 0;
// }




















































// // 1. C program to read name and marks of n number of students and store them in a file.

// #include <stdio.h>
// int main()
// {
//    char name[50];
//    int marks, i, num;

//    printf("Enter number of students: ");
//    scanf("%d", &num);

//    FILE *fptr;
//    fptr = (fopen("..\\file\\student.txt", "w"));
//    if(fptr == NULL)
//    {
//        printf("Error!");
//        exit(1);
//    }

//    for(i = 0; i < num; ++i)
//    {
//       printf("For student%d\nEnter name: ", i+1);
//       scanf("%s", name);

//       printf("Enter marks: ");
//       scanf("%d", &marks);

//       fprintf(fptr,"\nName: %s \nMarks=%d \n", name, marks);
//    }

//    fclose(fptr);
//    return 0;
// }
















// // 2. C program to read name and marks of n number of students from and store them in a file. If the file previously exits, add the information to the file.

// #include <stdio.h>
// int main()
// {
//    char name[50];
//    int marks, i, num;

//    printf("Enter number of students: ");
//    scanf("%d", &num);

//    FILE *fptr;
//    fptr = (fopen("..\\file\\student.txt", "a"));
//    if(fptr == NULL)
//    {
//        printf("Error!");
//        exit(1);
//    }

//    for(i = 0; i < num; ++i)
//    {
//       printf("For student%d\nEnter name: ", i+1);
//       scanf("%s", name);

//       printf("Enter marks: ");
//       scanf("%d", &marks);

//       fprintf(fptr,"\nName: %s \nMarks=%d \n", name, marks);
//    }

//    fclose(fptr);
//    return 0;
// }

















// // 3. C program to write all the members of an array of structures to a file using fwrite(). Read the array from the file and display on the screen.

// #include <stdio.h>
// struct student
// {
//    char name[50];
//    int height;
// };
// int main(){
//     struct student stud1[5], stud2[5];   
//     FILE *fptr;
//     int i;

//     fptr = fopen("..\\file\\file.txt","wb");
//     for(i = 0; i < 5; ++i)
//     {
//         fflush(stdin);
//         printf("Enter name: ");
//         gets(stud1[i].name);

//         printf("Enter height: "); 
//         scanf("%d", &stud1[i].height); 
//     }

//     fwrite(stud1, sizeof(stud1), 1, fptr);
//     fclose(fptr);

//     fptr = fopen("file.txt", "rb");
//     fread(stud2, sizeof(stud2), 1, fptr);
//     for(i = 0; i < 5; ++i)
//     {
//         printf("Name: %s\nHeight: %d", stud2[i].name, stud2[i].height);
//     }
//     fclose(fptr);
// }
