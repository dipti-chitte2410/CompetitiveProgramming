#include<iostream>
#include<list>
#include<iterator>
using namespace std;
void showlist(list<int> g1){
  list<int>::iterator itr;
  for(itr=g1.begin();itr!=g1.end();itr++)
  {
    std::cout << *itr << '\n';
  }
}

int main()
{
  list<int>gqlist1,gqlist2;
  int i;
  for(i=1;i<10;i++)
  {
    gqlist1.push_back(i*2);
    gqlist2.push_back(i*3);
  }
  cout<<"List1";
  showlist(gqlist1);
  cout<<"List2";
  showlist(gqlist2);
  cout<<"front list1"<<gqlist1.front()<<endl;
  cout<<"back list1"<<gqlist1.back()<<endl;
  gqlist1.pop_front();
  gqlist1.pop_back();
  showlist(gqlist1);
  gqlist2.reverse();

  showlist(gqlist2);
  gqlist2.sort();
  showlist(gqlist2);
  list<int>::iterator it=gqlist1.;
  gqlist1.insert(it,90);

  showlist(gqlist1);
}
