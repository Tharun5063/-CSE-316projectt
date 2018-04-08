#include<stdio.h>
#include<conio.h>
struct process{
	int proid;
	int burtime;
	int arrtime;
	int priority;
	int wait;
	int start;
	int remaintime;
};

int isFull(struct Queue* queue)
{  return (queue->size == queue->capacity);  }
 
// Queue is empty when size is 0
int isEmpty(struct Queue* queue)
{  return (queue->size == 0); }
 
// Function to add an item to the queue.  
// It changes rear and size
void push(struct Queue* queue, int item)
{
    if (isFull(queue))
        return;
    queue->rear = (queue->rear + 1)%queue->capacity;
    queue->array[queue->rear] = item;
    queue->size = queue->size + 1;
    printf("%d enqueued to queue\n", item);
}
 
// Function to remove an item from queue. 
// It changes front and size
int pop(struct Queue* queue)
{
    if (isEmpty(queue))
        return INT_MIN;
    int item = queue->array[queue->front];
    queue->front = (queue->front + 1)%queue->capacity;
    queue->size = queue->size - 1;
    return item;
}
 
int main()
{
	int n;
	printf("Enter the number of processes-");
	scanf("%d",&n);
	struct process l[n];
    printf("\n PROCESS\tPRIORITY\tBURST-TIME\tARRIVALTIME\n");
	for(int i=0;i<n;i++)
	{printf("Enter the process id");
	  scanf("%d",&l[i].pid);
	  printf("Enter the priority ");
	  scanf("%d",&l[i].priority);
	  printf("Enter the burst time");
	  scanf("%d",&l[i].burst);
	  printf("Enter the arrival time");
	  scanf("%d",&l[i].arrival);
	  printf("\n");
		
	}
	display(n,l);
	
}
