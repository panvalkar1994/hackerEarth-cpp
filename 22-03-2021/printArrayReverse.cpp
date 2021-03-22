#include<iostream>
using namespace std;

void printReverse(int arr[], int n)
{   
    for (int i = n-1; i>=0; i--)
    {
        printf("%d ", arr[i]);
    }
    
}

int main()
{
    int T, N;
    int A[100];
    cin>>T;
    while (T--)
    {
        cin>>N;
        for (int i = 0; i < N; i++)
        {
            cin>>A[i];
        }

        printReverse(A, N);
        
    }

    return 0;
    

}