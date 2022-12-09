#include <iostream>
#include <vector>
using namespace std;

//task a

int main()
{
   int n;
   cout<<"Enter value for n: ";
   cin>>n;
   
   vector<int> v = makeVector(n);
   
   for(int i = 0;i<n;i++){
      cout<<v[i]<<endl;
   }
   
//task b

vector<int> v;
v.push_back(1);
v.push_back(-2);
v.push_back(2);

vector<int> v2;
v2 = goodVibes(v);

for (int i = 0; i < v2.size(); i++) {

cout<<v2[i]<<" ";
}

cout<<endl;

  //task c

gogeta(v, v2);

for (int i = 0; i < v.size(); i++) {

cout<<v[i]<<" ";
}

cout<<endl;

for (int i = 0; i < v2.size(); i++) {

cout<<v2[i]<<" ";
}

cout<<endl;

//task d

   vector<int> v1{1,2,3};
    vector<int> v2{4,5};

    vector<int> res = sumPairWise(v1, v2); 
    
    for(int i = 0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
    cout<<endl;

   return 0;
}

