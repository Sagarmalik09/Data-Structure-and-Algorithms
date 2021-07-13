#include<stdatomic.h>
#include<stdlib.h>
struct Queue
{
    int size ;
    int front;
    int rear;
    int *Q;

};
void create (struct Queue *q,int size){
    q->size= size;
    q->front=q->rear=-1;
    q->Q=(int*)malloc(q->size*sizeof(int));
}
void enqueue(int x,struct Queue *q){
    if(q->rear=q->size-1){
    printf("Queue is full");
   }   else{
             q->rear++;
             Q[q->rear]=x;
          }
}
void dequeue(sturct Queue *q)
{
    int x=-1;
    if(q->front==q->rear)
    printf("Queue is empty \n");
    else{
        q->front++;
        x=q->Q[q->front];
    }
    return x;
}
void  display(struct Queue q){
    int i ;
    for (i=q.front+1;i<=q.rear;i++)
    printf("%d",q.Q[i]);
    printf("\n");
}


int main(){
    struct Queue  q;
    create (&q,6);
    enqueue(&q,10);
    enqueue(&q,20);
    enqueue(&q,30);
    enqueue(&q,40);
    d isplay(q);


}