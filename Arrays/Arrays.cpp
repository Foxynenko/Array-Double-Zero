#include <iostream>
#include <vector>

void duplicateZeros(std::vector<int>& arr) {
    int i = 0;
    while (i < arr.size()) {
        if (arr[i] == 0) {
            arr.insert(arr.begin() + i, 0);
            arr.pop_back();
            i += 2; // пропускаємо новий дубльований елемент
        }
        else {
            i += 1;
        }
    }
}

int main() {
    
    std::vector<int> arr1 = { 1, 0, 2, 3, 0, 4, 5, 0 };
    duplicateZeros(arr1);
    for (const auto& num : arr1) {
        std::cout << num << " ";
    }
    

    

    
    return 0;
}
