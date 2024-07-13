#include<cstdio>
#include<cmath>
 
int main(){
    int l1,r1,l2,r2;
    scanf("%d %d %d %d",&l1,&r1,&l2,&r2);
    
    int l = std::max(l1,l2),r=std::min(r1,r2);
    if(l>r){
        printf("-1\n");
    }else{
        printf("%d %d",l,r);
    }
}
