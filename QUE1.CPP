#include<iostream>
using namespace std;
class bnkacnt{
    private:
    string name;
    int accno;
    string acctype;
    int balamt;

    public:
    bnkacnt(){
        name=" ";
        accno=0;
        acctype=LAB2"";
        balamt=0;

    }
    void init();
    void dpstamt();
    void wthdrw();
    void dsply();
     
};
void bnkacnt::init(){
  cout<<"Enter the name of account holder:";
    cin>>name;
    cout<<endl;
  cout<<"Enter the account number:";
    cin>>accno;
    cout<<endl;
  cout<<"Enter the type of account current or saving:";
    cin>>acctype;
    cout<<endl;
  cout<<"Enter the balance which is already in account:";
    cin>>balamt;
    cout<<endl;
}

void bnkacnt::dpstamt(){
    int amt;
     cout<<"Amount to be deposited:";
     cin>>amt;
     balamt+=amt;
     cout<<balamt<<endl;
}
void bnkacnt::wthdrw(){
    int wthdrwamt;
    cout<<"Enter amount to be withdrawn:";
    cin>>wthdrwamt;
    cout<<endl;
    if(wthdrwamt>balamt)
    cout<<"Balance is not sufficient to withdraw"<<endl;
    else
    balamt-=wthdrwamt;
    cout<<balamt<<endl;
}
void bnkacnt::dsply(){
    cout<<name<<endl;
    cout<<balamt<<endl;
}

int main(){
    bnkacnt dtl;
    dtl.init();
    int choice;
    cout<<"Enter the choice: 1.Deposit amount 2.Withdraw amount 3.Display amount"<<endl;
    cin>>choice;
    cout<<endl;
    switch(choice){
        case 1:dtl.dpstamt();
                  break;
        case 2:dtl.wthdrw();
                  break;
        case 3:dtl.dsply();
                  break;
    }
    return 0;
}