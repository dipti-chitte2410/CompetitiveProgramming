#include<iostream>
#include<set>
#include<iterator>
using namespace std;
int main()
{
  set<int, greater<int>>s1;
  set<int,greater<int>>::iterator itr;
  int i;
  s1.insert(10);
  s1.insert(60);
  s1.insert(50);
  s1.insert(40);
  s1.insert(10);
  for(auto i=s1.begin();i!=s1.end();i++)
  {
    cout<<*i<<endl;
  }

  set<int>s2(s1.begin(),s1.end());
  cout<<"element in s2\n";
  for(auto i=s2.begin();i!=s2.end();i++)
  {
    cout<<*i<<endl;
  }
  cout<<"Removal of element less than 30";
  s2.erase(s2.begin(),s2.find(50));
  for(itr=s2.begin();itr!=s2.end();itr++)
  {
    cout<<*itr<<endl;
  }

  set<int,greater<int>>s3;
  s1.swap(s3);
  cout<<"After swapping\n";
  for(itr=s3.begin();itr!=s3.end();itr++)
  {
    cout<<*itr<<endl;
  }


//Vector to set
// #include<iostream>
// #include<vector>
// #include<set>
// #include<iterator>
// using namespace std;
// int main()
// {
//   vector<int> v9;
//   v9.push_back(10);
//   v9.push_back(30);
//   v9.push_back(78);
//   v9.push_back(100);
//   v9.push_back(30);
//   v9.push_back(78);
//
//   vector<int>::iterator itr;
//   cout<<"Elements in vector"<<endl;
//   for(itr=v9.begin();itr!=v9.end();itr++)
//   {
//     cout<<*itr;
//   }
//   // for(int x:v9){
//   //   s9.insert(x);
//   // }
//   set<int>s9(v9.begin(),v9.end());
//   std::cout << "Element in set" << '\n';
//   set<int>::iterator it;
//   for(it=s9.begin();it!=s9.end();it++)
//   {
//     cout<<*it;
//   }
// }

}
