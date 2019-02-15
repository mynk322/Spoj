#include<iostream>
#include<stack>
#include<string>
#include"class.h"
using namespace std;
int main()
{
  stack<int> n;
  string d="812+4*+";
  calculator calc(d,n);
  cout<<calc.compute()<<endl;
  return 0;
}
#include<iostream>
#include<stack>
#include<string>
#include"class.h"
using namespace std;
calculator::calculator(string f,stack<int> n)
{
  expr=f;
  x=n;
}

int calculator::compute()
{
  for (i=0;i<expr.size();i++)
  {
    if ((expr[i]=='+')||(expr[i]=='-')||(expr[i]=='*')||(expr[i]=='/'))
    {
      int result;
      switch (expr[i]) {
        case'+':
          result = x.top();
          x.pop();
          result += x.top();
          x.pop();
          x.push(result);
          break;
        case'-':
          result = x.top();
          x.pop();
          result -= x.top();
          x.pop();
          x.push(result);
          break;
        case'*':
          result = x.top();
          x.pop();
          result *= x.top();
          x.pop();
          x.push(result);
          break;
        case'/':
          result = x.top();
          x.pop();
          result /= x.top();
          x.pop();
          x.push(result);
          break;
      }
    }
    else{
      x.push(expr[i]-'0');
      cout<<"|"<<x.top()<<"|"<<endl;
    }
    return x.top();
  }
}
#include<iostream>
#include<stack>
#include<string>
using namespace std;
class calculator{
private:
  int i,xx;
  stack<int>x;
  string expr;
public:
  calculator(string,stack<int>);
  int compute();
};
