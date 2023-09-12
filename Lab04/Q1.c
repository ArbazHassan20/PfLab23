// 22k-4031
// programmer:Arbaz Hassan Narejo
// LAB4
// date:sep 12/2023 
#include <stdio.h>
int main()
{
    int i=0;
    do{
        int j=1;
        while(j<=7)
        {
            printf("*");
            j++;
        }
        printf("\n");
        i++;
    }
    while(i<=7);
    getch();
    return 0;
}
