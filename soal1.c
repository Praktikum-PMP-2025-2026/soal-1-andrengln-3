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

Pasien* newPasien(int id) {
    Pasien* Pasien = (Pasien*)malloc(sizeof(Pasien));
    Pasien->data = data;
    Pasien->next = NULL;
    return Pasien;
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
    Pasien* queue = CreateQueue(n)



    printf("ORDER %d\n", pasien);

    printf("WAIT %d\n", waktu);
}
