#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
int i,timer=0,queueTimer=10,total;
struct Process{
	int process_id;
	int finish_time;
	int completed_time;
	int arr_time;
	int start_time;
	int priority;
	int burst_time;
	int store;
};
int main()
{	
	int n,i,rr=0,pr=0,fc=0;
	total=n;
	printf("Enter the number of processes \n");
	scanf("%d",&n);
	total=n;
	struct Process p[n];
    for(i=0;i<n;i++)
    {
    	printf("PROCESS %d \n",i+1);
		p[i].process_id=i+1;
		printf("Enter the Arrival Time\n");
    	scanf("%d",&p[i].arr_time);
    	printf("Enter the priority from 1 to 5\n");
    	scanf("%d",&p[i].priority);
    	p[i].completed_time=-1;
    	p[i].start_time=-1;
    	if(p[i].priority==1)
		rr++;
		else if(p[i].priority==5)
		fc++;
		else 
		pr++;
		printf("Enter burst time\n");
    	scanf("%d",&p[i].burst_time);	
		p[i].store=p[i].burst_time;
		p[i].start_time=-1;
    	p[i].completed_time=-1;
	}