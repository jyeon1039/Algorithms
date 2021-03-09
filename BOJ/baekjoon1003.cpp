#include <iostream>
using namespace std;

int main()
{
    int T, N;
    int arr[41] = {0, };
    arr[0] = 0;
    arr[1] = 1;
    for(int n = 2; n <= 40; n++)
        arr[n] = arr[n-1] + arr[n-2];

    cin >> T;

    for(int i = 0; i < T; i++)
    {
        cin >> N;
        if (N == 0)
            cout << "1 0\n";
        else 
            cout << arr[N-1] << " " << arr[N] << "\n";
    }
    return 0;
}