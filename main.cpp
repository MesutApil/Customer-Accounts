//Program by Mesut Apil
#include<iostream>
#include<iomanip>
#include<string>

using namespace std;

struct CustomerInfo{
    string Name;
    string Address;
    string City;
    string State;
    double ZIP;
    string PhoneNumber;
    double AccountBalance;
    string DateLast;
};
void Input(CustomerInfo[]);
void Output(CustomerInfo[]);
void Search(CustomerInfo[]);
int main()
{
    int answer;
    CustomerInfo customer[5];
    cout << "1. Enter new account information\n";
    cout << "2. Change account information\n";
    cout << "3. Display all account information\n";
    cout << "4. Exit the program\n\n";
    
    cout<<" Choose 1-4";
    cin>>answer;
    
    while(answer!=4){
        switch(answer){
            case 1:{
                Input(customer);
            }
            break;
            case 2:{
                Search(customer);
            }
            break;
            case 3:{
              Output(customer);
            }
                break;
        }
    }
    return 0;
    
}
void Input(CustomerInfo customer[])
{
    for (int i = 0; i<5; i++)
    {
    cout<<" Name: ";
        cin>>customer[i].Name;
        cout<<" Address: ";
        cin>>customer[i].Address;
        cout<<" City: ";
        cin>>customer[i].City;
        cout<<" State: ";
        cin>>customer[i].State;
        cout<<" ZIP: ";
        cin>>customer[i].ZIP;
        cout<<" Phone Number: ";
        cin>>customer[i].PhoneNumber;
        cout<<" Account Balance: ";
        cin>>customer[i].AccountBalance;
        cout<<" Date of Last Payment: ";
        cin>>customer[i].DateLast;
    }
}

void Output(CustomerInfo customer[])
{
    for( int i =0; i<5; i++)
    {
        cout<<" Name: "<<customer[i].Name<<endl;
        cout<<" Address: "<<customer[i].Address<<" " <<customer[i].City<<" "<<customer[i].State<<" "<<customer[i].ZIP<<endl;
        cout<<" Phone Number: "<<customer[i].PhoneNumber<<endl;
        cout<<" Account Balance: "<<customer[i].AccountBalance<<endl;
        cout<<" Date of Last Payment: "<<customer[i].DateLast<<endl;
        
    }
}
void Search(CustomerInfo customer[])
{
    string namel;
    cout<<" Please Enter Name: ";
    cin>>namel;
    for(int i = 0; i<5;i++)
        if(namel == customer[i].Name){
            cout << "Name: " << customer[i].Name << endl;
            cout << "Address: "<< customer[i].Address << endl;
            cout << "Phone Number: " << customer[i].PhoneNumber << endl;
            cout << "Account Balance: " << customer[i].AccountBalance << endl;
            cout << "Date of Last Payment: " << customer[i].DateLast << endl;
            break;
        }else{
            cout << "Account not found" << endl;
        }
}
        
    

