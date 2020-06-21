#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    	int i=1,count=1,n;
	    	cin>>n;
	    	int arr[1000001];
	    	if(n%2)
	    	{
               while(i<=n*n){
               arr[i]=i;
               i++;}
             }
           else
           {
              while(i<=n*n)
              {
                if(count%2)
                 {
                  arr[i]=i;
                 }
               else{
               if(i%2)
               arr[i]=i+1;

               else
               arr[i]=i-1;
                }

            if(i%n==0)
               {count++;}

             i++;

               }   
            }
      i=1;
      while(i<=n*n){
          if(i%n!=0)
          {cout<<arr[i]<<" ";
          }
          else
          {
          cout<<arr[i]<<endl;
          }
         i++;
      }
     arr[1000001]={};
	}

	return 0;
}