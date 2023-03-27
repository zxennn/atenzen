#include <stdio.h>
#include <iostream>


auto addVal(int t) {
  return [t](const int& val1,
             const int& val2 ) {
    int res;
    if(t)
    {
            return val1+val2;
    }
    return 0;
  };
}


int main()
{
    const int a =3;
    const int b =5;
    auto myFunc = addVal(1);
    int result = myFunc(a,b);
    
    // printf("result is %d",int(result));
std::cout << "result is " << result << std::endl;
    return 0;
}
