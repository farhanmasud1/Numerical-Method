#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l=0;
    float x=0,x1,x2,x0;
    float y,i,y1,y2,y0;
    y=x*x*x-2*x-5;
    float s,k;
    if(y>0)
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
            y=x*x*x-2*x-5;
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
            y=x*x*x-2*x-5;
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


    x1=x-1;
    x2=x;
    //cout<<x;
loop:

    {
        y1=x1*x1*x1-2*x1-5;
        y2=x2*x2*x2-2*x2-5;
        x0=(x1+x2)/2;
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
        y0=x0*x0*x0-2*x0-5;
        if(y0*y1<0)
        {
            x2=x0;
            x1=x1;
        }
        else
        {
            x1=x0;
            x2=x2;
        }
    }
    goto loop;
}


// return 0;


