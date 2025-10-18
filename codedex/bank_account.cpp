#include <iostream>
#include <string>

class BankAccount 
{
public:
  std::string name;
  int account_id;
  std::string account_type;
  double balance;

  double deposit(double amount)
  {
    balance += amount;
    return balance;
  }

  double withdraw(double amount)
  {
    if (amount <= balance)
      balance -= amount;
    else 
      std::cout << "insufficient balance\n";
    return balance;
  }

  void display_balance()
  {
    std::cout << "balance: " << balance << "\n"; 
  }
};

int main ()
{
  BankAccount myACC;
  myACC.name = "KAT";
  myACC.account_id = 101;
  myACC.account_type = "saving";
  myACC.balance = 100.0;

  myACC.deposit(200);
  myACC.withdraw(100);

  myACC.display_balance();

  return 0;
}