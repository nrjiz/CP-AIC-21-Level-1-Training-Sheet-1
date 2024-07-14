#include<iostream>

bool valid(int a,int b,int c){
    if(a<b+c){
        return true;
    }
    return false;
}

int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int minutesCounter=0;
    while(!valid(a,b,c)){
        minutesCounter++;
        b++;
    }
     while(!valid(b,c,a)){
        minutesCounter++;
        c++;
    }
    while(!valid(c,a,b)){
        minutesCounter++;
        a++;
    }
    printf("%d\n",minutesCounter);
    
    


}
