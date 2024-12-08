#include <iostream>
using namespace std;
int main() {
    int n, sum = 0;
    cout << "Enter number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        sum += arr[i];
    }
    double average = (sum) / n;
    cout << "Average: " << average << endl;
    return 0;
}
