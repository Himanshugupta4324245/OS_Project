/*Design a scheduling program to implem
ents a Queue with two levels:
Level 1 : Fixed priority preemptive Scheduling
Level 2 : Round Robin Scheduling
For  a  Fixed  priority  preemptive  Scheduling  (Queue  1),  the  Priority  0  is  highest  priority.  If  one
process P1 is scheduled  and running ,  another pro
cess P2 with higher priority  comes. The New
process (high priority) process P2 preempts currently running process P1 and process P1 will go
to  second  level  queue.  Time  for  which  process  will  strictly  execute  must  be  considered  in  the
multiples of 2..
All  t
he  processes  in  second  level  queue  will  complete  their  execution  according  to  round  robin
scheduling.
Consider: 1. Queue 2 will be processed after Queue 1 becomes empty.
2. Priority of Queue 2 has lower priority than in Queue 1.*/
#include<stdio.h>
#include<string.h>
#include<conio.h>
void main()
{
    char p[10][5],temp[5];
    int i,j,pt[10],wt[10],totwt=0,pr[10],temp1,n;
    float avgwt;
    printf("enter no of processes:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
