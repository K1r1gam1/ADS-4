// Copyright 2021 NNTU-CS
int countPairs1(int *arr, int size, int value) {
  int count = 0;
  for (int i = 0; i < size - 1; i++)
    for (int j = i + 1; j < size; j++)
      if ((arr[i] + arr[j]) == value)
        count += 1;
  return count;
}
int countPairs2(int *arr, int size, int value) {
  int count = 0;
  for (int i = 0; i < size - 1; i++) {
    if (arr[i] > value)
      continue;
    for (int j = size - 1; j > i; j--) {
      if (arr[j] > value)
        continue;
      if ((arr[i] + arr[j]) == value)
        count += 1;
    }
  }
  return count;
}
int countPairs3(int *arr, int size, int value) {
  int count = 0;
  for (int i = 0; i < size - 1; i++) {
      int left = i, right = size, n = value - arr[i];
      while ((right - left) > 1) {
          int mid = (left + right) / 2;
          if (arr[mid] == n) {
              count++;
              int top = mid + 1;
              while (arr[top] == n && top < right) {
                  k++;
                  top++;
              }
              top = mid - 1;
              while (arr[top] == n && top > left) {
                  count++;
                  top--;
              }
              break;
          }
          if (arr[mid] > n)
              right = mid;
          if (arr[mid] < n)
              left = mid;
      }
  }
  return count;
}
