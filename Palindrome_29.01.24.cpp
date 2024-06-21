#include<iostream>
#include<queue>
#include<list>
using namespace std;
bool isPalindrom(string s)
{
  queue<char>q;
  for(auto c:s)
  {
      q.push(c);
  }
  list <char> a;
  for(auto c: s)
  {
      a.push_back(c);
  }
  while(!q.empty())
  {
      if(q.front()!=a.back())
      {
          return false;
      }
          q.pop();
          a.pop_back();
          return true;
  }

}
int main()
{
    string str;
    cin>>str;
    if(isPalindrom(str))
    {
        cout << "Palindrom" << endl;
    }
    else
    {
        cout << "Not palindrom" << endl;
    }
}
