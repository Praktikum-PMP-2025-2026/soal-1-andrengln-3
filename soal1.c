#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct pasien{
    int id;
    int waktu;
    struct pasien* next;
} pasien;

typedef struct Queue{
    int CurrSize;
    pasien* front;
    pasien* rear;
} Queue;

pasien* newPasien(int id) {
    pasien* pasien = (pasien*)malloc(sizeof(pasien));
    pasien->data = data;
    pasien->next = NULL;
    return pasien;
}

queue* createQueue(unsigned capacity) {
    queue* pasien = (pasien*)malloc(sizeof(pasien));
    queue->capacity = capacity;
    queue->front = pasien->size = 0;
    queue->rear = capacity - 1;
    queue->array = (int*)malloc(queue->capacity * sizeof(int));
    return queue;
}

void enqueue(Queue* q, int waktu) {
    pasien* pasien = newpasien(data);
    if (isEmpty(q)) {
        q->front = q->rear = pasien;
    } else {
        q->rear->next = pasien;
        q->rear = pasien;
    }
    
    q->currSize++;


int main(){
    int n;
    printf("");
    scanf("%d", n);
    pasien* queue = CreateQueue(n)



    printf("ORDER %d\n", pasien);

    printf("WAIT %d\n", waktu);
}
