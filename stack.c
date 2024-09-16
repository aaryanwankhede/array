#include <stdio.h>
#include <stdlib.h>
int main()
{
    int stack[10],i,n,choice,Top=-1,x;
    printf("Enter the size of stack\n");
    scanf("%d",&n);
    
while(1) {
     printf("\n1.Push:Insert element in stack");
     printf("\n2.Pop:Delete element from stack");
     printf("\n3.Peek:Show topmost element in the stack");
     printf("\n4.Underflow:Check whether the stack is empty");
     printf("\n5.Overflow:Check whether the stack is full");
     printf("\n6.Display:Show elements in stack");
     printf("\n7.Exit");
     printf("\nEnter the choice\n");
     scanf("%d",&choice);
     switch(choice)
     {
        case 1:
        //Push:Insert element in stack
        printf("Enter the elements of stack\n");
        scanf("%d",&x);
        Top = Top+1;
        stack[Top]=x;
        break;
        
        case 2:
        //Pop:Delete element from stack
        if(Top == -1)
        {
            printf("\nStack is empty.Underflow");
            break;
        }
        else
            {
            printf("\nPopped element: %d\n",stack[Top]);
            Top--;
            }
        break;
        
        case 3:
        //Peek:Show topmost element in the stack
        if(Top != -1)
        {
            printf("Topmost element in the stack is :%d\n",stack[Top]);
        }
        else
        {
            printf("Stack is empty");    
        }
        break;
        case 4:
        //Underflow:Check whether the stack is empty
        
        if(Top == -1)
        {
            printf("Underflow");
        }
        else
        {
            printf("Stack is not empty");
        }
        

        break;
        case 5:
        //Overflow:Check whether the stack is full
        
        if(Top == n-1)
        {
            printf("Overflow");
        }
        else
        {
            printf("Stack is not full");
        }
        

        break;
        case 6:
           // Display:Show elements in stack
           if(Top == -1)
           {
            printf("Stack is empty");
           }
           else
           {
            printf("Displaying the elements in stack\n");
            for(int i=Top;i>=0;--i)
            {
                printf("%d\n",stack[i]);
            }
               printf("Stack is empty");
           }
        break;
        case 7:exit(0);
        break;
        default :
        printf("\nInvalid choice !!");
        
     }
}
    
    

    return 0;
}