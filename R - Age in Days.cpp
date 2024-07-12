#include<cstdio>
int main(){
    int days;
    scanf("%d",&days);
    int years = days/365;
    days%=365;
    int months = days/30;
    days%=30;
    printf("%d years\n%d months\n%d days",years,months,days);
    return 0;
}
