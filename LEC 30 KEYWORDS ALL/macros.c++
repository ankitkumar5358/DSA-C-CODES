#include <iostream>
using namespace std;

//create and define macros
#define PI 3.14
// multi line macro
# define AREA1, \
         AREA2, \
         AREA3, \
         AREA4, \

int main() {

  int r = 5;
  float area = PI * r * r;
  cout << "Area is " << area;



  return 0;
}
