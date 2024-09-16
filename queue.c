#include <stdio.h>
#include <stdlib.h>
int main()
{
    int queue[10],i,n,choice,F=-1,R=-1,x;
    printf("Enter the size of queue\n");
    scanf("%d",&n);
    
while(1) {
     printf("\nMenu");
     printf("\n1.Enqueue");
     printf("\n2.Dequeue");
     printf("\n3.Underflow:Check whether the queue is empty");
     printf("\n4.Overflow:Check whether the queue is full");
     printf("\n5.Display:Show elements in queue");
     printf("\n6.Exit");
     printf("\nEnter the choice\n");
     scanf("%d",&choice);
     switch(choice)
     {
        case 1:
        //Enqueue
        printf("Enter the elements in queue\n");
        scanf("%d",&x);
        if(R == n-1)
        {
            printf("\nOverflow");
        }
        else if(F == -1 && R == -1)
        {
            F=0;
            R=0;
            queue[R] = x;
        }
        else
        {
            R++;
            queue[R] = x;
        }
        break;
        case 2:
        //Dequeue
        
        if(F==-1 && R==-1)
        {
            printf("\nUnderflow");
        }
        else if(F==R)
        {
            printf("\nElement deleted from queue : %d",queue[F]);
            F=R=-1;
        }
        else
        {
            printf("\nElement deleted from queue : %d",queue[F]);
            F++;
        }
        

        break;
        
        case 3:
        //Underflow:Check whether the stack is empty
        
        
        if(R < n-1)
        {
            printf("Underflow");
        }
        else
        {
            printf("Queue is not empty");
        }
        

        break;
        case 4:
        //Overflow:Check whether the stack is full
        
        if(R == n-1)
        {
            printf("Overflow");
        }
        else
        {
            printf("Queue is not full");
        }
        

        break;
        case 5:
           // Display:Show elements in queue
            printf("Displaying the elements in queue\n");
            for(int i=F;i<=R;i++)
            {
                printf("%d\t",queue[i]);
            }
        break;
        case 6:exit(0);
        break;
        default :
        printf("\nInvalid choice !!");
        
     }
}
    
    

    return 0;
}