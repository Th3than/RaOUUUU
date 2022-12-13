#include<iostream>

using namespace std;
int a(int x, int y){
  int c;
  if(x > y){
    c = x- y;
  }else{
    c = y-x;
  }
  return c;
}
int adiff(int x,int y){
  int x1 = x%360,y1 = y%360,c1,c2,r;
  c1 = a(x1,360);
  c2 = a(y1,360);
  r = a(c1,c2);
  if(r > 180){
    r = a(r,360);
  }
  return r;
}

int main(){
  cout << adiff(180,270);
  cout << adiff(210,45);
  cout << adiff(0,360);
  cout << adiff(10,350);
  cout << adiff(95,260);
  cout << adiff(90,-90);
  cout << adiff(1000,280);
  cout << adiff(60,244);
}
