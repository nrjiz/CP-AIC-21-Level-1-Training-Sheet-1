//solving a 2d task with 1d vector
//////////////////////
#include<iostream>
#include<vector>
 
int main(){
    int n,m;
    std::cin>>n>>m;
    std::vector<int> array;
    
    for(int i = 0 ; i < m;++i){
        for(int j = 0 ; j < n ; ++j){
            int element;
            std::cin>>element;
            array.push_back(element);
        }
    }
    int x;
    std::cin>>x;
    bool found = false;
    for( int element:array){
        if(element==x){
            found = true;
            break;
        }
    }
    found?std::cout<<"will not take number\n":std::cout<<"will take number\n";
}
//initializing a 2D vector
#include<iostream>
#include<vector>
 
int main(){
    
    int N,M;
    std::cin>>N>>M;
    std::vector<std::vector<int>>matrix(N,std::vector<int>(M));
    for(int i=0;i<N;++i){
        for(int j=0;j<M;++j){
            std::cin>>matrix[i][j];
        }
    }
    int x;
    std::cin>>x;
    bool found=false;
    for(int i=0;i<N;++i){
        for(int j=0;j<M;++j){
            if(matrix[i][j]==x){
                found = true;
                break;
            }
        } if(found){
            break;
        }
    }
    if(found){
        std::cout<<"will not take number\n";
    }else{
        std::cout<<"will take number\n";
    }
    
}
