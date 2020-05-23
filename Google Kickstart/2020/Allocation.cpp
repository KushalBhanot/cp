#include<bits/stdc++.h>
using namespace std;

void test_case()
{
    int n, b;
    scanf("%d %d", &n, &b);
    
    vector<int> prices;
    
    while(n--)
    {
        int temp;
        scanf("%d", &temp);
        
        prices.push_back(temp);
    }
    
    sort(prices.begin(), prices.end());
    
    int sum=0, count=0, i=0;
    while(sum <= b)
    {
        sum += prices[i];
        count++;
        i++;
    }
    
    printf("%d\n", count-1);
}

int main()
{
    int t;
    scanf("%d", &t);
    
    for(int i=1; i<=t; i++)
    {
        printf("Case #%d: ", i);
        test_case();
    }
}