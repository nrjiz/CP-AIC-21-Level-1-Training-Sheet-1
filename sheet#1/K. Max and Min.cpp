#include<cstdio>
 
int main(){
    int a, b, c;
    scanf("%d %d %d",&a,&b,&c);
    int min=a,max=a;
    (b>=max)?max=b:min=b;
    (c>=max)?max=c:(c<=min)?min=c:min=min;
    printf("%d %d",min,max);
    return 0;
}
//2min:50sec
