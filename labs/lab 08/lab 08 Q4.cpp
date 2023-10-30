#include <stdio.h>
#include <string.h>

int main() {  
    char password[100];
    char correctpassword[] = "Secure123";

    printf("Enter the password: ");
    fgets(password, sizeof(password), stdin);

    // Remove the newline character from the input.
    size_t len = strlen(password);
    if (len > 0 && password[len - 1] == '\n') {
        password[len - 1] = '\0';
    }
    
    //strlen will check the length
    if (strlen(password) >= 8) {
    	//strcmp will check if both the password are equal
        if (strcmp(password, correctpassword) == 0) {
            printf("Login successful. Welcome!\n");
        } else {
            printf("Login failed. Incorrect password.\n");
        }
    } else {
        printf("Password length is incorrect. It should be at least 8 characters.\n");
    }

    return 0;
}
