#include <iostream>
#include <vector>

using namespace std;

vector<int> makeVector(int n){
   vector<int> v;
   for(int i = 0;i<n;i++){
      v.push_back(i);
   }  
   return v;
}

int main()
{
   int n;
   cout<<"Enter value for n: ";
   cin>>n;
   
   vector<int> v = makeVector(n);
   
   for(int i = 0;i<n;i++){
      cout<<v[i]<<endl;
   }
   
   return 0;
}
