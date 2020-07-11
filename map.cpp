#include<iostream>
#include<map>
using namespace std;
int main()
{
  map<int,int> map1;
  map1.insert(pair<int,int>(1,40));
  map1.insert(pair<int,int>(2,10));
  map1.insert(pair<int,int>(3,50));
  map1.insert(pair<int,int>(4,30));
  map1.insert(pair<int,int>(5,20));
  map1.insert(pair<int,int>(6,10));
  map1.insert(pair<int,int>(7,12));
  map1.insert(pair<int,int>(8,45));
  map1.insert(pair<int,int>(9,42));
  map1.insert(pair<int,int>(10,41));

  map<int,int>::iterator itr;
  std::cout << "Map1" << '\n';
  for(itr=map1.begin();itr!=map1.end();itr++)
  {
    std::cout << itr->first << '\t';
    std::cout << itr->second << '\n';
  }
map<int,int>map2(map1.begin(),map1.end());
std::cout << "Map2" << '\n';
for(itr=map2.begin();itr!=map2.end();itr++)
{
  std::cout << itr->first << '\t';
  std::cout << itr->second << '\n';
}
map1.erase(map1.begin(),map1.find(3));
for(itr=map1.begin();itr!=map1.end();itr++)
{
  std::cout << itr->first << '\t';
  std::cout << itr->second << '\n';
}

}
