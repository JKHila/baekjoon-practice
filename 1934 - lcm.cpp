#include <cstdio>
using namespace std;

int gcd(int a,int b){
    return b == 0? a : gcd(b,a%b);
}

int main(){
    int T;
    int a,b;
    scanf("%d",&T);

    while(T > 0){
        scanf("%d %d",&a,&b);
        printf("%d\n",a*b/gcd(a,b));
        T--;
    }
}