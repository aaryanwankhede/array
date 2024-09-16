#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[10],i,n,choice,pos;
    printf("Enter the size of Array\n");
    scanf("%d",&n);
    printf("Enter the elements of Array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
while(1) {
     printf("\n1.Insertion of elements at 1st position");
     printf("\n2.Insertion of elements at any position");
     printf("\n3.Insertion of elements at last position");
     printf("\n4.Deletion of elements at 1st position");
     printf("\n5.Deletion of elements at any position");
     printf("\n6.Deletion of elements at last position");
     printf("\n7.Display of array");
     printf("\n8.Exit");
     printf("\nEnter the choice\n");
     scanf("%d",&choice);
     switch(choice)
     {
        case 1:
        //Insertion of elements at 1st position
        int x;
        printf("\nEnter the element for insertion at 1st position");
        scanf("%d",&x);
        for(i=n-1;i>=0;i--)
        {
            arr[i+1]=arr[i];
        }
        arr[0]=x;
        n++;
        break;
        case 2:
        //Insertion of element at any position
        int y;
        printf("Enter element");
        scanf("%d",&y);
        printf("Enter position");
        scanf("%d",&pos);
        for(i=n;i>=pos;i--)
        {
            arr[i]=arr[i-1];
        }
        arr[pos-1]=y;
        n++;
        break;
        case 3:
        //Insertion of element at last position
        int z;
        printf("\nEnter the element for insertion at end : ");
        scanf("%d",&z);
        arr[n]=z;
        n++;
        break;
        case 4:
        // Deletion of elements at 1st position
        printf("\nDeletion element from 1st position");
        //scanf("%d",&pos);
        for(i=0;i<=n-1;i++)
        {
            arr[i]=arr[i+1];  //shifting an array
        }
        n--;
        break;
        case 5:
        //Deletion of elements at any position
        printf("Enter the position for deletion ");
        scanf("%d",&pos);
        for(i=pos-1;i<=n-1;i++)
        {
            arr[i]=arr[i+1];
        }
        n--;
        break;
        case 6:
        //Deletion of elements at last position
        printf("\nDelete the element from the end");
        n--;
        
        break;
        case 7:
        printf("Display the elements of array\n");
        for(i=0;i<n;i++)
        {
          printf(" %d\t",arr[i]);
        }
        break;
        case 8:exit(0);
        break;
        default :
        printf("\nInvalid choice !!");
        
     }
}
return 0;
}
    
    