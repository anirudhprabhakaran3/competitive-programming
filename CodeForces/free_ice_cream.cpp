#include<bits/stdc++.h>

using namespace std;
long n,x,b;
char a;
int main()
{
    scanf("%I64d %I64d",&n,&x);
    long sum=x;
    long flag=0;
    for(int i=1;i<=n;i++)
    {
        getchar();
        scanf("%c %d",&a,&b);
        if(a=='+')
        sum+=b;
        if(a=='-')
        {
            if(sum>=b)
            sum-=b;
            else
            flag++;
        }    
    }
    cout<<sum<<" "<<flag<<endl;
    return 0;
}