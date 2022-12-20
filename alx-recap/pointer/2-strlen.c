// Online C compiler to run C program online
#include <stdio.h>
int lenth(char *s);
int main() {
    char *str;
    int len;

    str = "My first strlen!";
    len = lenth(str);
    printf("%d\n", len);
    return (0);    

}

int lenth(char *s)
{
    int number = 0;
    
    while (*s++){
        number = number + 1;
    }
    
    return (number);
}
