#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void initVector(int vector[], int length) {
  for (int i = 0; i < length; i++) {
    vector[i] = i;
  }
}

void change(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

void generateTicket(int ticket[], int length) {

  int numbers[100];
  initVector(numbers, 100);

  srand(time(NULL));
  for (int i = 0; i < 100; i++) {
    int j = rand() % 100;
    change(&numbers[i], &numbers[j]);
  }

  for (int i = 0; i < length; i++) {
    ticket[i] = numbers[i];
  }
}

void printTicket(int ticket[], int length) {
  printf("Ticket de apuesta: ");
  for (int i = 0; i < length; i++) {
    printf("%02d ", ticket[i]);
  }
  printf("\n");
}

int main() {
  int ticket[5];

  generateTicket(ticket, 5);
  printTicket(ticket, 5);

  return 0;
}
