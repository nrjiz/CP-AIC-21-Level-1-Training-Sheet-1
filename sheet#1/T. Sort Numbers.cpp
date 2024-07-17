#include<cstdio>
int main(){
    int a, b, c;
    scanf("%d %d %d",&a,&b,&c);
    int d=a,e=b,f=c;
    if(a>b){int temp=a;a=b;b=temp;}
    if(a>c){int temp=a;a=c;c=temp;}
    if(b>c){int temp=b;b=c;c=temp;}
    printf("%d\n%d\n%d\n\n",a,b,c);
    printf("%d\n%d\n%d\n",d,e,f);
 
}
