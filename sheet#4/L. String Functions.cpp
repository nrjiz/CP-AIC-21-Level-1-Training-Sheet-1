#include<iostream>
#include<string>
#include<algorithm>

int main(){
    int n,q;
    std::cin>>n>>q;
    std::cin.ignore();
    std::string s;
    std::getline(std::cin,s);
    while(q--){
        std::string query;
        std::cin>>query;
        
        if (query=="pop_back"){
            s.pop_back();
        }else if (query=="front"){
            std::cout<<s.front()<<'\n';
        }else if (query=="back"){
            std::cout<<s.back()<<'\n';
        }else if (query=="sort"){
            int l,r;
            std::cin>>l>>r;
            std::sort(s.begin()+l-1,s.begin()+r);

        }else if (query=="reverse"){
            int l,r;
            std::cin>>l>>r;
            std::reverse(s.begin()+l-1,s.begin()+r);
        }else if (query=="print"){
            int pos;
            std::cin>>pos;
            std::cout<<s[pos-1]<<'\n';
        }else if (query=="substr"){
            int l,r;
            std::cin>>l>>r;
            std::cout<<s.substr(l-1,r-l+1);
        }else if (query=="push_back"){
            char x;
            std::cin>>x;
            s.push_back(x);
        }
            
        
        
    }
}
