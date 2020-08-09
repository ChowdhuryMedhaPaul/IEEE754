#include<bits/stdc++.h>
using namespace std;
vector<int> line1,line2,exo,res;
void main_data()
{

 double f,frac1,frac2,fact = 0.1,f1,f2,temp;
    long int int1,int2,sign,cnt;
    int i,j,s,p,expo;
    cout<<"\nEnter floating number: ";
    cin>>f;
    if(f<0)
        f=abs(f);

          if(f>0)
        sign=0;
    else
        sign=1;


//    if(f!=0)
//        cnt=1;
    int1 = (int)f;
    frac1 = f - int1;
    f2=frac1;

    while(int1!=0)
    {
        s = int1%2;
        line1.push_back(s);
        int1 /= 2 ;
    }
    reverse(line1.begin(),line1.end());

//    cout<<"\nShow integer to binary numbers:  ";
//    for(int i=0; i<line1.size(); i++)
//        cout<<line1[i]<<" ";
//    cout<<endl;

    for(int i=1; i<=50; i++)
    {
        f2 = f2*2;
        temp=f2;
        int2=(int)temp;
        frac2=temp-int2;
        f2=frac2;
        line2.push_back(int2);

    }

//    cout<<"\nShow fractional to binary numbers:  ";
//    for(int i=0; i<line2.size(); i++)
//        cout<<line2[i]<<" ";
//    cout<<endl;

    if(f>0)
        sign=0;
    else
        sign=1;
    while(expo!=0)
    {
        p = expo%2;
        res.push_back(p);
        expo /= 2 ;
    }
   expo=(line1.size()-cnt)+127;

    if(f==0)
        res.push_back(0);
    res.push_back(sign);

    reverse(res.begin(),res.end());


    for(i=0; i<line1.size(); i++)
        res.push_back(line1[i]);


    for(i=0; i<line2.size(); i++)
        res.push_back(line2[i]);

    for(i=0; i<32; i++)
    {
        if(i==0||i==8)
            cout <<res[i]<<"-" ;
        else
            cout<<res[i];

    }
    cout<<endl;
    res.clear();
    int press;
   cout<<"\n Do you want to input again than press 1  ";
    cout<<"  OR exit press 0"<<endl;
    cout<<"Enter Press: ";
    cin>>press;
    if(press==1)
        main_data();
    else exit(0);

}

int main()
{
         system("color 3F");
    cout<<"\t****Assignment-1****\n\n"<<endl;
    cout<<"\t****IEEE754 Floating point to binary****\n\n"<<endl;
    main_data();

    return 0;
}
