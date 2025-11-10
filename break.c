#include<stdio.h>
int main()
{
    
    printf("Hello World!....\n");
    int i,age;
    for ( i = 0; i < 10; i++)
    {
        printf("%d\n Enter Your Age\n",i);
        scanf("%d",&age);
        // if (age>10)
        // {
        //     break;
        // }
        if (age>10)
        {
            continue;
        }
        printf("We have not come across any continue statements\n");
        printf("We have not come across any continue statements\n");
        printf("We have not come across any continue statements\n");
        printf("We have not come across any continue statements\n");
        printf("Slow and steady wins the race\n");
        
        


    }
    
    
    return 0;
}