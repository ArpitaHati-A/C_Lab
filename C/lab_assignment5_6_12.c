/*C program to print following Pyramid:
 *****
 ****
 ***
 **
 *
 */

#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}