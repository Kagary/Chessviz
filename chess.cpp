#include <iostream>
using namespace std;
int main()
{
   int x[32],y[32];
   for(int i=0;i<32;i++)
      x[i]=8-i%8;
   for(int i=0;i<4;i++)
      for(int j=0;j<8;j++)
         if(i==0)
            y[i*8+j]=8;
         else if(i==1)
            y[i*8+j]=7;
         else if(i==2)
            y[i*8+j]=2;
         else if(i==3)
            y[i*8+j]=1;
   for(int i=8;i>=0;i--)
   {
	  if(i!=0)
	  { 
	   cout<<i<<" ";
      for(int j=0;j<9;j++) 
      {  
         if(((y[0]==i)&&(x[0]==j))||((y[7]==i)&&(x[7]==j)))
            {cout<<"r "; continue;}
         if(((y[1]==i)&&(x[1]==j))||((y[6]==i)&&(x[6]==j)))
            {cout<<"n "; continue;}
         if(((y[2]==i)&&(x[2]==j))||((y[5]==i)&&(x[5]==j)))
            {cout<<"b "; continue;}
         if((y[3]==i)&&(x[3]==j))
            {cout<<"q "; continue;}
         if((y[4]==i)&&(x[4]==j))
            {cout<<"k "; continue;}
         for(int p=8;p<16;p++)
            if((y[p]==i)&&(x[p]==j))
               {cout<<"p "; continue;}
         for(int p=16;p<24;p++)
            if((y[p]==i)&&(x[p]==j))
               {cout<<"P "; continue;}
         if(((y[24]==i)&&(x[24]==j))||((y[31]==i)&&(x[31]==j)))
            {cout<<"R "; continue;}
         if(((y[25]==i)&&(x[25]==j))||((y[30]==i)&&(x[30]==j)))
            {cout<<"N "; continue;}
         if(((y[26]==i)&&(x[26]==j))||((y[29]==i)&&(x[29]==j)))
            {cout<<"B "; continue;}
         if((y[27]==i)&&(x[27]==j))
            {cout<<"Q "; continue;}
         if((y[28]==i)&&(x[28]==j))
            {cout<<"K "; continue;}
      }
      cout<<"\n";
	  }
	  else cout<<"  a b c d e f g h\n";
   }
   return 0;
}
