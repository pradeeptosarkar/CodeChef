#include <iostream>
using namespace std;

int sumtilln(int start, int end)
{int sum=0;
for(int i=start;i<=end;i++)
{
    sum=sum+i;
}
return sum;
}

int num(int x,int y)
{
    int number;
    number=sumtilln(1,x)+sumtilln(x,((x+y)-2));
    return number;
}

int main() {
	// your code goes here
int t;
cin>>t;
int x1[t],y1[t],x2[t],y2[t];
for(int i=0;i<t;i++)
{
    cin>>x1[i]>>y1[i]>>x2[i]>>y2[i];
}

for(int i=0;i<t;i++)
{
    int pathsum=0;
    for(int j=x1[i];j<=x2[i];j++)
    {
        pathsum+=num(j,y1[i]);
    }
    for(int j=(y1[i]+1);j<=y2[i];j++)
    {
        pathsum+=num(x2[i],j);
    }

    cout<<pathsum<<endl;
}

return 0;
	
}
