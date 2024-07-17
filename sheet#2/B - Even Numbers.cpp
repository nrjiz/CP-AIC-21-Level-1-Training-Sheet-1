#include<iostream>

int main(){
    int n;
    scanf("%d",&n);
    if(n==1){
        printf("-1\n");
    }else{
        int counter=2;
        while(counter<=n){
            printf("%d\n",counter);
            counter+=2;
        }
    }
    return 0;
    
}

////////////////////
#include<iostream>
 
int main(){
    int a;
    scanf("%d",&a);
    int i=2;
    if(a<i){
        printf("-1\n");
    }else {
        while(i<=a){
            printf("%d\n",i);
            i+=2;
        }
    }
}

