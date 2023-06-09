#include <bits/stdc++.h>
void sort012(int *arr, int n) {
  int num[] = {0, 0, 0};
  for (int i = 0; i < n; i++) {
    if (arr[i] == 0) {
      num[0]++;
    } else if (arr[i] == 1) {
      num[1]++;
    } else {
      num[2]++;
    }
  }
  for (int i = 0; i < n; i++) {
    if (num[0] != 0) {
      arr[i] = 0;
      num[0]--;
    } else if (num[1] != 0) {
      arr[i] = 1;
      num[1]--;
    } else {
      arr[i] = 2;
      num[2]--;
    }
  }
  return;
}
