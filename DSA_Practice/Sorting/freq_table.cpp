#include <iostream>
#include <unordered_map>
#include<map>

int main() {
    int arr[] = {15, 15, 1, 7, 7, 7};
    int arrSize = sizeof(arr) / sizeof(arr[0]);

    // Create an unordered_map to store element frequencies
    std::unordered_map<int, int> frequencyMap;
    std::map<int, int> f2;

    // Count the frequency of each element in the array
    for (int i = 0; i < arrSize; ++i) {
        // Use the element as the key and increment the count
        frequencyMap[arr[i]]++;
        f2[arr[i]]++;
    }

    // Iterate through the map to print frequencies
    for (const auto& pair : frequencyMap) {
        std::cout << "Element " << pair.first << " occurs " << pair.second << " times." << std::endl;
    }

    for(const auto& pair : f2){
        std::cout <<"elem "<<pair.first<<" oc "<<pair.second<<" times "<<std::endl;
    }

    return 0;
}
