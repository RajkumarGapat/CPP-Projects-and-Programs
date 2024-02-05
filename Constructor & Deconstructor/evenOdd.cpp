#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n,i,k=0, l=0;


    cin>>n;
    
    int a[n],even[n],odd[n];
    

    //let's store array elements
    for(int i=0; i<n; i++)
    {
      cin>>a[i];
    }

     
      
    
   // Lte's separated even and odd numbers
   for(i=0; i<n; i++)
   {
        if(a[i]%2==0)
        {
            even[k]=a[i]; // 10 98 12
            k++;
        }
        else
        {
            odd[l]=a[i]; // 3 33
            l++;
        }
    }
     //Let's dislay output  
       
       for(i=0;i<k;i++)
       {
           cout<<even[i]<<" ";
       }
       for(i=0;i<l;i++)
       {
           cout<<odd[i]<<" ";
       }    
     
    return 0;
}