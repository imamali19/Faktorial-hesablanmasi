#include<stdio.h>
#include<math.h>
long long F(long long);
int main()
{
long long a;
scanf("%lld",&a);
printf("%lld\n",F(a));
return 0;

}
long long F(long long a)
{
long long f=1,i;
for(i=1;i<=a;i++)
  f=f*i;
return f;
}
