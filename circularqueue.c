//circular queue using insert ,deletion and search

#include<stdio.h>
#include<stdlib.h>
#define SIZE 10

int q[SIZE];
int rear=0,front=0;
3. SEARCH 

void insertq(int item)
{
 int  r1=rear;
 r1=(r1+1)%SIZE;
 if(r1==front)
 printf("QUEUE IS FULL");
 else
 {
  rear=r1;
  q[rear]=item;
 }
}
int deleteq1(int *status)
{
 if(front==rear)
 {
 *status==0;
 printf("QUEUE IS EMPTY");
 }
 else
 {
  front=(front+1)%SIZE;
  *status=1;
  return q[front];
 }
}

int searchq3. SEARCH 
(int item)
{
 int t;
 if(front!=rear)
 {
  t=front;
  t=(t+1)%SIZE;
  while(t!=rear&&q[t]!=item)
   t=(t+1)%SIZE;
   if(q[t]==item)
    return t;
  else
   return 0;  
 }
 else
  return 0;
}
void main()
{
 int item,opt,ans,status;
 do3. SEARCH 

 {
   printf("1.INSERT \n");
   printf("2. DELETE \n");
   printf("3. SEARCH \n");
   printf("4. EXIT \n");
   printf("ENTER THE OPTION :");
   scanf("%d",&opt);
   switch(opt)
   {
    case 1:prin3. SEARCH 
tf("\n Enter the data: ");
           scanf("%d",&item);
           insertq(item);
           break;
    case 2:item==deleteq1(&status);
           if(status==1)
           printf("deleted :%d/n",item);
           break;
    case 3:printf("Enter the num to search:");
           scanf("%d",&item);
           ans=searchq(item);
           if(ans==0)
            printf("not found");
          else
           printf("Item is found at %d postion\n",ans);
          break;
    case 4:exit(0);
   }
 }
 while(1);
}







