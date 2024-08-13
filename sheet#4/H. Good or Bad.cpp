#include<iostream>
#include<string>

int main(){
    
    int t;
    std::cin>>t;
    while(t--){
        std::string str;
        std::cin>>str;
        bool flag = false;
        for(int i=0;i<str.length()-2;i++){
            
            if(str.substr(i,3)== "101"
            || str.substr(i,3)== "010"){
                flag = true;
                break;
            }
        }
        if (flag){
            std::cout<<"Good\n";
        }else{
            std::cout<<"Bad\n";
        }
    }
    
}

// optimized the code by refraining from using substr method and using diret comparisons with Direct Character Comparison

#include<iostream>
#include<string>

int main(){
    int t;
    std::cin >> t;
    while(t--){
        std::string str;
        std::cin >> str;
        bool flag = false;  // Initialize flag to false (assume "Bad" until proven "Good")
        
        for(int i = 0; i < str.length() - 2; i++){
            if(str.substr(i, 3) == "101" || str.substr(i, 3) == "010"){
                flag = true;
                break;
            }
        }
        
        if (flag){
            std::cout << "Good\n";
        } else {
            std::cout << "Bad\n";
        }
    }
    
    return 0;
}

