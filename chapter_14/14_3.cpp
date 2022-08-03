
#include <iostream>
using namespace std;
int main()
{
    int arr[] = {3, 4, 5, 6};
    int *ptr1 = arr;
    int len = sizeof(arr) / sizeof(arr[0]);
    cout << "len = " << len << endl;
    for (int i = 0; i < len; i++) {
        cout << *ptr1++ << endl;
        
    }
}