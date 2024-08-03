//my way
#include<iostream>
#include<vector>
int main(){
    int n,m;
    std::cin>>n>>m;
    std::vector<std::vector<char>>arr(n,std::vector<char>(m));
    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
            std::cin>>arr[i][j];
        }
    }
    
    int r,c;
    std::cin>>r>>c;
    r-=1;
    c-=1;
    bool flag =true;
    
    for(int y = r-1;y<=r+1;++y){
      //edge cases
        if(y<0||y>=n)continue;
        for(int x = c-1;x<=c+1;++x){
          //edge cases
            if(x<0||x>=m) continue;
          //critical point 
            if(y == r && x == c) continue;
            
            if(arr[y][x]=='.'){
                flag=false;
                break;
            }
        }
        if(!flag){break;}
    }
    if(flag){
        std::cout<<"yes\n";
    }else{
        std::cout<<"no\n";
    }
    
}
////////other more inspiring approach:
//
// Directions for the 8 neighbors (top-left, top, top-right, left, right, bottom-left, bottom, bottom-right)
// Read the grid
// Convert to 0-based indexing
// Check all 8 possible neighbors
// Check if the neighbor is within bounds

#include <iostream>
#include <vector>

using namespace std;

// Directions for the 8 neighbors (top-left, top, top-right, left, right, bottom-left, bottom, bottom-right)
const int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
const int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};

int main() {
    int N, M;
    cin >> N >> M;
    
    vector<vector<char>> grid(N, vector<char>(M));
    
    // Read the grid
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            cin >> grid[i][j];
        }
    }
    
    int X, Y;
    cin >> X >> Y;
    
    // Convert to 0-based indexing
    X -= 1;
    Y -= 1;
    
    bool allNeighborsX = true;
    
    // Check all 8 possible neighbors
    for (int i = 0; i < 8; ++i) {
        int nx = X + dx[i];
        int ny = Y + dy[i];
        
        // Check if the neighbor is within bounds
        if (nx >= 0 && nx < N && ny >= 0 && ny < M) {
            if (grid[nx][ny] != 'x') {
                allNeighborsX = false;
                break;
            }
        }
    }
    
    if (allNeighborsX) {
        cout << "yes" << endl;
    } else {
        cout << "no" << endl;
    }
    
    return 0;
}
