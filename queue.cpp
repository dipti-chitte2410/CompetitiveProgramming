#include<iostream>
#include<queue>
using namespace std;
void showqueue(queue<int>q)
{
  cout<<"Queue elemen are";
  while (!q.empty()) {
    std::cout << q.front() << '\n';
    q.pop();
  }
}

int main()
{
  queue<int>gq;
  gq.push(10);
  gq.push(20);
  gq.push(30);
  gq.push(40);
  gq.push(50);
  gq.push(60);
  gq.push(70);
  showqueue(gq);
  std::cout << "front:" <<gq.front()<< '\n';
  std::cout << "end:"<<gq.back() << '\n';
  std::cout << "size"<<gq.size() << '\n';

}
