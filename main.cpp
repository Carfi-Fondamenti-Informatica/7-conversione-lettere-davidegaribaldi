#include <iostream>
#include "controllo.h"
using namespace std;
int main() {
  char a;
  cin>>a;
  if(controllo(a))
  {
   cout<<a;
  }
  else
  {
      cout<<"errore";
  }
    return 0;
}
