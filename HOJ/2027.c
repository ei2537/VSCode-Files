#include <stdio.h>

int quicksort(unsigned long long arr[], int left, int right) {
    if (left < right) {
        int pivot = partition(arr, left, right);
        quicksort(arr, left, pivot - 1);
        quicksort(arr, pivot + 1, right);
    }
    return 0;
}

int partition(unsigned long long arr[], int left, int right) {
    unsigned long long pivot = arr[right];
    int i = left - 1;
    for (int j = left; j < right; j++) {
        if (arr[j] <= pivot) {
            i++;
            unsigned long long temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    unsigned long long temp = arr[i + 1];
    arr[i + 1] = arr[right];
    arr[right] = temp;
    return i + 1;
}

int main() {
    int N, M, count = 0, ans = 0;
    unsigned long long g;
    unsigned long long G[100000];
    
    scanf("%d", &N);
    for(int i = 0; i < N; i++) {
        scanf("%d", &M);
        for(int j = 0; j < M; j++) {
            scanf("%llu", &g);
            G[count] = g;
            count++;
        }
    }
    
    if(count > 0) {
        quicksort(G, 0, count - 1);
        ans = 1;
        for(int i = 1; i < count; i++) {
            if(G[i] != G[i-1]) {
                ans++;
            }
        }
    }
    
    printf("%d\n", ans);
    return 0;
}
//Write by Github copilot pro.