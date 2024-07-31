//enhanced solution
#include <iostream>
#include <vector>
using namespace std;
 
bool isSubsequence(const vector<int>& A, const vector<int>& B) {
    int n = A.size();
    int m = B.size();
    int j = 0; // Pointer for B
 
    // Traverse A with pointer i
    for (int i = 0; i < n && j < m; ++i) {
        if (A[i] == B[j]) {
            ++j; // Move the pointer of B if there's a match
        }
    }
 
    // If we have traversed all elements of B, it's a subsequence
    return j == m;
}
 
int main() {
    int N, M;
    cin >> N >> M;
    
    vector<int> A(N);
    vector<int> B(M);
    
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }
    
    for (int i = 0; i < M; ++i) {
        cin >> B[i];
    }
    
    if (isSubsequence(A, B)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
 
    return 0;
}


//my initial solution
#include <iostream>
#include <vector>
int main() {
    int n,m;
    std::cin>>n>>m;
    std::vector<int>a(n);
    std::vector<int>b(m);
    for (int i=0;i<n;++i){
        std::cin>>a[i];
    }
    for(int j=0;j<m;++j){
        std::cin>>b[j];
    }
    bool found ;
    int pointerA = -1;
    for(int i = 0 ; i < m;i++){
        found =false;
        int element = b[i];
        for(int j = 0 ;  j < n ; ++j){
            if(a[j]==element && j>pointerA){
 
                found = true;
                pointerA =j;
                break;
            }
        }
        if(!found){
            
            break;
        }
    }
    found==true?std::cout<<"YES\n":std::cout<<"NO\n";
    
    return 0;
}
