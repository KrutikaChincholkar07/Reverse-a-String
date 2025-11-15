#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    gets(str);  // Note: unsafe, but okay for simple demo
    
    int len = strlen(str);
    printf("Reversed string: ");
    
    for(int i = len - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    return 0;
}
