#include <stdio.h>
int main() {
  int arr[] = { 7, 0, -1, 4, 3, 12, -8, 4, 23, 8};
  int *ip = arr + 4;
  printf("%d %d", &ip, arr[6]);
  return 0;
}