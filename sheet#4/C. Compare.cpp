//first simple solution
#include<iostream>
#include<string>
 
int main(){
    std::string s;
    std::string t;
    std::getline(std::cin,s);
    std::getline(std::cin,t);
    if(s>t){
        std::cout<<t<<'\n';
    }else{
        std::cout<<s<<'\n';
    }
    
}
//other more detailed 
#include<iostream>
#include<string>
int main(){
    std::string value1, value2;
    std::cin>>value1>>value2;
    int size1 = value1.size();
    int size2 = value2.size();
    int size  =std:: min(size1,size2);
    
    int flag = 0;
    for (int i =0;i<size;++i){
        if(value1[i]<value2[i]){
            std::cout<<value1;
            flag = 0;
            break;
          //you could also use return 0 and get done
        }else if(value2[i]<value1[i]){
            std::cout<<value2;
            flag=0;
            break;
        }else{
            flag=-1;
        }
    }
    if (flag==-1){
        if(size1>size2){
            std::cout<<value2;
        }else{
            std::cout<<value1;
        }
    }
    
}
