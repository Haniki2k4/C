#include <stdio.h>
int main() {
  int n; // the number of elements in the array
  int arr [100]; // the array to store the numbers
  int max; // the variable to store the maximum value
  

  printf("Enter the number of elements: ");
  scanf("%d", &n);

  printf("Enter the elements: ");
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr [i]);
  }

  max = arr [0]; // initialize max with the first element
  for (int i = 1; i < n; i++) {
    if (arr [i] > max) { // compare each element with max
      max = arr [i]; // update max if a larger element is found
    }
  }

  printf("The largest element is %d\n", max); // print the result
  return 0;
}

