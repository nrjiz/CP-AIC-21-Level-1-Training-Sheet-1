#include<iostream>

int main(){
    int a,b,c;
    char s,t;
    std::cin>>a>>s>>b>>t>>c;
    
    if((a+b==c&&s=='+')||(a-b==c&&s=='-')||(a*b==c&&s=='*')){
        std::cout<<"Yes\n";
    }else{
        if(s=='+'){
            std::cout<<a+b;
        }else if(s=='-'){
            std::cout<<a-b<<"\n";
        }else if(s=='*'){
            std::cout<<a*b<<"\n";
        }
    }
}

\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\
#include<cstdio>
 
int main(){
    int a,b,c;
    char o,e;
    
    scanf("%d %c %d %c %d",&a,&o,&b,&e,&c);
    if((o=='+'&&a+b==c)||(o=='-'&&a-b==c)||(o=='*'&&a*b==c)){
        printf("Yes");
    }else {
        if(o=='+'){
            printf("%d",a+b);
        }else if(o=='-'){
            printf("%d",a-b);
        }else if(o=='*'){
            printf("%d",a*b);
        }
    }
    return 0;
}
//3:48 //3:52//3:18//
