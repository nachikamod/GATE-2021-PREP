#include <iostream>
#include <stack>

using namespace std;

void leader_in_array(long *A,long N) {
    long check = 0;
    stack<long> leader;
    for (long j = N - 1; j >= 0 ; j--)
    {
        if (check <= A[j])
        {
            check = A[j];
            leader.push(check); 
        }   
    }   

    while (leader.empty() == false)
    {
        cout << leader.top() << " ";
        leader.pop();
    }
    
}

int main() {
    long T;

    cin >> T;

    for (long i = 0; i < T; i++)
    {
        long N;
        cin >> N;
        long A[N];

        for (long j = 0; j < N; j++)
        {
            cin >> A[j];
        }

        leader_in_array(A, N);
        cout << endl;

    }
    
    return 0;
}

/*
Input:
3
6
16 17 4 3 5 2
5
1 2 3 4 0
5
7 4 5 7 3
Output:
17 5 2
4 0
7 7 3
*/