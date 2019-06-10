#include <vector>
using namespace std;

int partition(vector<int>& arr, int low, int high) {
    int pivot = arr[high];
    int i = low - 1;
    for (int j = low; j <= high - 1; j++) {
        if (arr[j] <= pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return i + 1;
}

void quickSortImpl(vector<int>& arr, int low, int high) {
    if (low < high) {
        auto pos = partition(arr, low, high);
        quickSortImpl(arr, low, pos - 1);
        quickSortImpl(arr, pos + 1, high);
    }
}

void QuickSort(vector<int>& arr) {
    quickSortImpl(arr, 0, arr.size() - 1);
}



int main() {
    vector<int> arr = {4,5,7,2,3,8,9,1,0,43,4,3,6};

    QuickSort(arr);

    for (auto i : arr) {
        printf("%d ", i);
    }
}