#include<iostream>
using namespace std;

class User{
    private:
    int userId;
    string username;
    string pwd;
    string name;
    string email;

    public:
    void logout();
};
void User::logout(){
    printf("You are loggin out! \nThank You for using Banking App!");
    return;
}

class Manager : public User{
    
    public:
    void registerCustomer();
    void setInterestRate();
    void setMinBalance();
    void setWithdrawLimit();
    void addInterest();
};

class Customer : public User{

    public:
    void createAcc();
    void withdraw();
    void deposit();
    void reqBalance();
};


int main(){
int UserType;
string username, pwd;
printf("Please Enter Your User Type!\n 1 -> Bank Manager\n 2 -> Customer\n 3 -> Exit\n");
cin >> UserType;
switch(UserType){
    case 1:
        printf("Proceed with Manager");
        break;
    case 2:
        printf("Proceed with Customer");
        break;
    case 3:
        printf("Exiting");
        break;
    default:
        printf("Sorry your choice is not available!! Try Again!");
}
    return 0;
}