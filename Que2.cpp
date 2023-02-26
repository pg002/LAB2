#include<iostream>
using namespace std;
class box{
    private:
    int width;
    public:
    void setwidth(int w){
        width=w;
    }
    int getwidth(){
        return width;
    }
}; 
box ob1;
void printwidth(){
  int x=ob1.getwidth();
   cout<<x<<endl;
}

int main(){ 
    int y;
    cout<<"Width to set:";
    cin>>y;
  ob1.setwidth(y);
  printwidth();


 return 0;
}
