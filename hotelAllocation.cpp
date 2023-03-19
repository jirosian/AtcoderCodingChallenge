#include <iostream>
using namespace std;

int main()
{
    int N, D;
    int A[109], L[109], R[109];
    
    cin >> N;
    
    for(int i = 0; i < N; i++) cin >> A[i];
    
    cin >> D;
    
    for(int j = 0; j < D; j++) cin >> L[j] >> R[j];
    
    int max,b,y = 0;

    for(int x = 0; x < D; x++) {
        while(y < N) {
            if(y + 1 == L[b]) y += R[b] - L[b];
            
            if(A[y] > max) max = A[y];
            
            y++;
        }
        cout <<  max << endl;
        b++;
        y = 0;
        max = 0;
    }
    

    return 0;
}
