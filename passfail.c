// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int marks;
    printf("enter number(0 -100) \n :");
    scanf("%d", &marks);
    
    if (marks<= 30) {
        printf("fail \n");
    } else { 
         printf("Pass \n");
    }
    printf("best of luck");
    return 0;
}