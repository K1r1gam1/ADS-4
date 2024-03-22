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
  int cnt;
  for (int i = 0; i < size - 1; i++) {
      if(arr[i] = arr{i-1] && i != 0) {
          count+=cnt;
          continue;
      }
      cnt=0;
      int left = i, right = size;
      while ((right - left) > 1) {
          int mid = (left + right) / 2;
          if (arr[mid] + arr[i] == value) {
              cnt++;
              int top = mid + 1;
              while (arr[top] + arr[i] == value && top < right) {
                  cnt++;
                  top++;
              }
              top = mid - 1;
              while (arr[top] + arr[i] == value && top > left) {
                  cnt++;
                  top--;
              }
              count += cnt;
              break;
          }
          if (arr[mid] + arr[i] > value)
              right = mid;
          if (arr[mid] + arr[i] < value)
              left = mid;
      }
  }
  return count;
}
