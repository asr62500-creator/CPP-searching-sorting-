#include <iostream>   // Library for input and output
using namespace std;  // Allows use of cin and cout without std::

// Function to calculate sum of array elements
int Sum(int a[], int n)
{
    int s = 0;      // Variable to store sum, initially 0
    int countSteps = 0;  // Variable to count number of steps (operations)

    // Loop runs from 0 to n-1 (total n iterations)
    for (int i = 0; i < n; i++)
    {
        countSteps += 1;     // Step count for loop control / iteration

        s = s + a[i];        // Add current array element to sum

        countSteps += 1;     // Step count for addition operation
    }

    countSteps += 1;   // Counts last loop condition check (when loop stops)
    countSteps += 1;   // Counts return statement execution

    // Display total number of operations performed
    cout << "Total Steps = " << countSteps << endl;

    return s;   // Return calculated sum to main()
}

int main()
{
    int n;   // Variable to store number of elements

    // Taking input size from user
    cout << "Enter number of elements: ";
    cin >> n;

    // Creating array of size n
    int arr[n];

    // Taking array elements input from user
    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    // Calling Sum function and storing returned result
    int result = Sum(arr, n);

    // Displaying final sum
    cout << "Sum = " << result << endl;

    return 0;   // Program ends successfully
}
