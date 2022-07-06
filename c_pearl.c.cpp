#include<stdio.h>

int main()
{
    long long int m, a, b, TC, temp, x, ans= 0;
    
    scanf("%lld", &TC);
    for(x= 1; x <= TC; x++)
    {
        //Input a, b
        scanf("%lld%lld", &a, &b);
        
        //if a is smaller than b, we swap a, b
        if(a>b)
        {
            temp= a;
            a= b;
            b= temp;
        }
        
        //sum of even number,  also a & b
        for(m= a; m<=b; m++)
        {
            if(m%2 == 0)
            {
                ans +=m;
            }
        }
        
        //Case no (value of x) & ans will print
        printf("Case #%lld: %lld\n", x, ans);
        
        //Again ans= 0, otherwise the next TC will affected by present ans or sum
        ans= 0;
    }
    return 0;
}


