#include<iostream>
#include<vector>
using namespace std;
int main()
{
  vector<int> v2,v1;

  int i,value;
//   for(auto i=0;i<=5;i++){
//     cin>>value;
//     v1.push_back(value);
//   }
// cout<<"Output of begin and end() function";
//   for(auto i=v1.begin();i!=v1.end();i++)
//   {
//     cout<<*i<<endl;
//   }
//   cout<<"Output of cbegin and cend() function";
//
//   for(auto i=v1.cbegin();i!=v1.cend();i++){
//     cout<<*i<<endl;
//   }
//   cout<<"Output of rbegin and rend() function";
//   for(auto i=v1.rbegin();i!=v1.rend();i++)
//   {
//     cout<<*i<<endl;
//   }
//   cout<<"Output of crbegin and crend()";
//   for(auto i=v1.crbegin();i!=v1.crend();i++){
//     cout<<*i<<endl;
//   }
      // v2.assign(10,5);
      // for(auto i=v2.begin();i!=v2.end();i++)
      // {
      //   cout<<*i<<endl;
      // }
      // v2.reserve(10);
      // cout<<v2.size()<<endl;
      // cout<<v2.max_size()<<endl;
      // cout<<v2.capacity()<<endl;
      // v2.resize(4);
      // // v2.shrink_to_fit();
      // for(auto i=v2.begin();i!=v2.end();i++)
      // {
      //   cout<<*i<<endl;
      // }
      for(auto i=1;i<=10;i++){
        v2.push_back(i*10);
      }
      cout<<"Reference pointer"<<v2[3]<<endl;
      cout<<"V2 at 8"<<v2.at(8)<<endl;
      cout<<"v2.front"<<v2.front()<<endl;
      cout<<"v2.back()"<<v2.back()<<endl;

      int *pos=v2.data();
      for(i=0;i<=10;i++){
        cout<<*pos;
        pos++;
      }

      v2.pop_back();
      pos=v2.data();
      for(i=0;i<=10;i++){
        cout<<*pos;
        pos++;
      }

      v2.erase(v2.begin());
      pos=v2.data();
      cout<<endl;
      for(i=0;i<=10;i++){
        cout<<*pos;
        pos++;
      }
      v2.emplace(v2.begin(),28);
      v2.emplace_back(89);
      pos=v2.data();
      cout<<endl;
      for(i=0;i<=10;i++){
        cout<<*pos;
        pos++;
      }
      v2.clear();
      v1.push_back(10);
      v1.push_back(20);
      v1.push_back(30);
      v2.push_back(40);
      v2.push_back(50);
      v2.push_back(60);
      for( i=0;i<v1.size();i++)
      {
        cout << v1[i] << '\n';
      }

      for(i=0;i<v2.size();i++)
      {
        std::cout << v2[i] << '\n';
      }

      v1.swap(v2);
      cout << "After swapping" << '\n';
      for(i=0;i<v1.size();i++)
      {
        cout << v1[i] << '\n';
      }

      for(i=0;i<v2.size();i++)
      {
        std::cout << v2[i] << '\n';
      }



}
