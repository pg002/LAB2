#include<iostream>
using namespace std;
class student{
    private:
    int rno;
    int perc;
    void inputon(){
        cout<<"Input start"<<endl;
    }
    void inputoff(){
        cout<<"Input end"<<endl;

    }
    public:
    void read(){
        inputon();
        cout<<"Enter the roll no:";
        cin>>rno;
        cout<<endl;
        cout<<"Enter the percentage:";
        cin>>perc;
        cout<<endl;
        inputoff();
    }
    void print(){
        cout<<"Roll no:"<<rno<<endl;
        cout<<"Percentage:"<<perc<<"%"<<endl;
    }


};
int main(){
    student ob;
    ob.read();
    ob.print();
    return 0;


}