//without using additional vector
#include<iostream>
 
int main(){
    std::string line;
    std::getline(std::cin,line);
    int j =0;
    int xj=0;
    for(int i=0;i<line.size();++i){
        if(line[i]!=' '){
            j=i;
        }else{
            for(int k = j; k >=xj;--k){
                std::cout<<line[k];
            }
            std::cout<<' ';
            j++;
            xj=j+1;
            
        }
    }
    for(int k = j; k >=xj;--k){
        std::cout<<line[k];
    }
    std::cout<<'\n';
    
    
}
//using additional vector:
#include<iostream>
#include<vector>
 
int main(){
    std::string line;
    std::getline(std::cin,line);
    std::vector<char> v;
    for(int i=0;i<line.size();i++){
        if(line[i]!=' '){
            v.push_back(line[i]);
        }else{
            for(int j = v.size()-1;j>-1;--j){
                std::cout<<v[j];
            }
            std::cout<<' ';
            v.clear();
        }
        
    }
    if(!v.empty()){
        for(int j = v.size()-1;j>-1;--j){
                std::cout<<v[j];
            }
    }
}
