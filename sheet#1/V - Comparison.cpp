#include<iostream>
using namespace std;
int main(){
    int a,b;
    char s;
    cin>>a>>s>>b;
    if((s=='='&&a==b)||(a<b&&s=='<')||(a>b&&s=='>')){
        cout<<"Right\n"; 
    }else{
        cout<<"Wrong\n";
    }
}


//////////////////////////////////////

#include<cstdio>

int main(){
    int a,b;
    char s;
    scanf("%d %c %d",&a,&s,&b);

    if((s=='='&&a==b)||(a<b&&s=='<')||(a>b&&s=='>')){
        printf("Right\n");
    }else{
        printf("Wrong\n");
    }
}
