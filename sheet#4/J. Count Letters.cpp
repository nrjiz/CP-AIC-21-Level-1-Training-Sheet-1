#include<iostream>
#include<vector>
#include<string>

int main(){
    std::string str;
    std::cin>>str;
    std::vector<int> arr(26);
    for (char ch : str){
        ++arr[ch-97];
    }
    for (int i = 0 ; i < 26 ;++i){
        if(arr[i]>0){
            std::cout<<char(i+97)<<" : "<<arr[i]<<"\n";
        }
    }
}
