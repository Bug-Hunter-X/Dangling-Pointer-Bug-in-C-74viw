int main() {
  int arr[5] = {1, 2, 3, 4, 5};
  int *ptr = (int *)malloc(sizeof(int) * 5);
  if (ptr == NULL) {
    fprintf(stderr, "Memory allocation failed\n");
    return 1;
  }
  memcpy(ptr, arr, sizeof(int) * 5);

  for (int i = 0; i < 5; i++) {
    printf("%d ", ptr[i]);
  }

  free(ptr);
  ptr = NULL; // Set ptr to NULL to prevent dangling pointer

  return 0;
}