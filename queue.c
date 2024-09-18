#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int queue[100],f=-1,r=-1,n,ch;
	system("cls");
	printf("Enter the size of Queue: ");
	scanf("%d",&n);
	while(1)
	{
		system("cls");
		printf("\n\t***MENU***\n");
		printf("1. Enqueue\n");
		printf("2. Dequeue\n");
		printf("3. Front\n");
		printf("4. Is_empty\n");
		printf("5. Is_full\n");
		printf("6. exit\n");
		printf("\n\nEnter your choice:");
		scanf("%d",&ch);
		if(f>r)
			r=-1;
		switch(ch)
		{
			case 1:
				{
					if(r<n-1)	
					{
						r++;
						printf("Enter the element: ");
						scanf("%d",&queue[r]);
						printf("\nElement enqueued successfully.");
						if(r==0)
							f=0;
					}
					else
						printf("\n\nQueue is overflow!");
					getch();
					break;
				}
			case 2:
			{
				if(f==-1||f>r)
				{
					printf("\n\nQueue is underflow!");
					f=-1;
				}
				else
				{
					printf("\nDequeued element: %d",queue[f]);
					f++;
					printf("\n\nElement dequeued successfully!");
				}
				getch();
				break;
			}
			case 3:
			{
				if(f==-1||f>r)
					printf("\n\nQueue is empty!");
				else
					printf("\nFront element: %d",queue[f]);	
				getch();
				break;		
			}
			case 4:
			{
				if(r<n-1)
					printf("\n\nQueue is empty");
				else
					printf("\nQueue is not empty!");	
				getch();
				break;	
			}
			case 5:
			{
				if(r<n-1)
					printf("\n\nQueue is not full!");
				else
					printf("\nQueue is full.");	
				getch();
				break;	
			}
			case 6:
			{
				printf("\nExiting...\n");
				getch();
				exit(0);
				break;
			}
			default:
			{
				printf("\n\n\n\nPlz choose valid option.");
				getch();
				break;
			}	
		}
	}
	return 0;
}
