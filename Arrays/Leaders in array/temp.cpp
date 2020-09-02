#include <iostream>

using namespace std;

long **leader;
long *cond; 

void leader_in_array(long *A,long N,long i) {
    long check = 0, count = 0;
    for (long j = N - 1; j >= 0 ; j--)
    {
        if (check <= A[j])
        {
            check = A[j];
            leader[i][count] = check;

            count++;
        }   
    }   

    cond[i] = count;
}

int main() {
    long T;

    cin >> T;

    leader = new long*[T];
    cond = new long(T);

    for (long i = 0; i < T; i++)
    {
        long N;
        cin >> N;
        long *A = new long(N);
        leader[i] = new long[N];

        for (long j = 0; j < N; j++)
        {
            cin >> A[j];
        }

        leader_in_array(A, N, i);

        delete [] A;

    }

    for (long i = 0; i < T; i++)
    {
        
        for (long j = cond[i] - 1; j >=0 ; j--)
        {
            cout << leader[i][j] << " ";
        }
        cout << endl;
        
    }

    delete [] leader;
    delete [] cond;
    
    return 0;
}