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
