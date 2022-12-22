#include <stdio.h>
#include <stdlib.h>
struct queue
{
	int front;
	int rear;
	int capacity;
	int * s;
};
void create(struct queue * q)
{
	q = (struct queue *)malloc(sizeof(struct queue));
	printf("\nEnter the capacity of queue : ");
	scanf("%d",&q->capacity);
	q->front = -1;
	q->rear = -1;
	q->s = (int *)malloc(q->capacity * sizeof(int));
}
void enqueue(struct queue * q, int x)
{
	if((q->rear==q->capacity-1))
	{
		printf("\nQueue is full");
		return;
	}
	if(q->front == -1)
	{
		q->front = 0;
	}
	q->rear = q->rear + 1;
	q->s[q->rear] = x;
}
void dequeue(struct queue * q)
{
	if(q->rear == -1)
	{
		printf("\nEmpty Queue");
		return;
	}
	int i;
	for(i=0;i<q->rear-1;i++)
	{
		q->s[i]=q->s[i+1];
	}
	q->rear--;
}
void a_dequeue(struct queue * q)
{
	q->front++;
}
int peek(struct queue * q)
{
	return q->s[q->front];
}
void traverse(struct queue * q)
{
	int i;
	printf("\n");
	for(i=q->front;i<q->rear;i++)
	{
		printf("%d <-- ",q->s[i]);
	}
	printf("%d",q->s[i]);
}
int main()
{
	struct queue * q;
	create(q);
	enqueue(q,5);
	enqueue(q,6);
	enqueue(q,7);
	enqueue(q,8);
	enqueue(q,9);
	enqueue(q,10);
	enqueue(q,11);
	dequeue(q);
	printf("\n%d",peek(q));
	dequeue(q);
	printf("\n%d",peek(q));
	dequeue(q);
	printf("\n%d",peek(q));
	enqueue(q,12);
	traverse(q);
	return 0;
}
