#include<iostream>
#include<climits> // for INT_MAX and INT_MIN
using namespace std;

int main(){
    int n, i;
    int array[10];
    
    cout << "Enter the length of array (1 to 10): ";
    cin >> n;

    if(n < 2 || n > 10) {
        cout << "Invalid array size. Enter a size between 2 and 10." << endl;
        return 0;
    }

    cout << "Enter the elements: ";
    for(i = 0; i < n; i++) {
        cin >> array[i];
    }

    int smallest = INT_MAX, second_small = INT_MAX;
    int largest = INT_MIN, second_large = INT_MIN;

    // Loop to find smallest and second smallest
    for(i = 0; i < n; i++) {
        if(array[i] < smallest) {
            second_small = smallest;
            smallest = array[i];
        } else if(array[i] < second_small && array[i] != smallest) {
            second_small = array[i];
        }
    }

    // Loop to find largest and second largest
    for(i = 0; i < n; i++) {
        if(array[i] > largest) {
            second_large = largest;
            largest = array[i];
        } else if(array[i] > second_large && array[i] != largest) {
            second_large = array[i];
        }
    }

    if(second_small == INT_MAX)
        cout << "No second smallest value found (all elements may be equal)." << endl;
    else
        cout << "Second Smallest = " << second_small << endl;

    if(second_large == INT_MIN)
        cout << "No second largest value found (all elements may be equal)." << endl;
    else
        cout << "Second Largest = " << second_large << endl;

    return 0;
}
