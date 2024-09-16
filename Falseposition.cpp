#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l=0;
    float x=0,x1,x2,x0;
    float y,i,y1,y2,y0;
    y=x*x-x-2;
    float s,k;
    /*if(y>0)
    {
        s=1;

    }
    else
    {
        s=-1;

    }
    if(s==1)
    {
        while(s!=-1)
        {
            x=x+1;
            y=x*x-x-2;
            if(y>0)
            {
                s=1;
            }
            else
            {
                s=-1;
            }
        }
    }
    else
    {
        while(s!=1)
        {
            x=x+1;
            y=x*x-x-2;
            if(y>0)
            {
                s=1;
            }
            else
            {
                s=-1;
            }
        }
    }
*/

    x1=1;
    x2=3;

    loop:

    {
        y1=x1*x1-x1-2;
        y2=x2*x2-x2-2;
        x0=x1-((y1*(x2-x1))/(y2-y1));
        //y0=x0*x0*x0-2*x0-5;

        if(k==x0)
        {
            cout<<"The Final Result: "<<x0<<endl;
            return 0;
        }
        else
        {
            l=l+1;
            cout<<"Iteration: "<<l<<" = "<<x0<<endl;
            k=x0;
        }
        y0=x0*x0-x0-2;
        if(y0*y1<0)
        {
            x1=x0;
            x2=x2;
        }
        else
        {
            x2=x0;
            x1=x1;
        }
    }
    goto loop;
}
