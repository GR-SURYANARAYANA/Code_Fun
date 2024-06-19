#include <stdio.h>
#include <string.h>

int main() {
    char a[20] = "surya narayana";
    char substring[20];
    int b=2;
   printf("%d",++b);
    // Copy the substring from index 1 until the end ('\0') into the new array
    strcpy(substring, &a[6]);

    printf("Original string: %s\n", a);
    printf("Substring from index 1 to end: %s\n", substring);

    return 0;
}
