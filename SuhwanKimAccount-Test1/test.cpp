#include "pch.h"
#include "../SuhwanKimAccount/Account.cpp"

using namespace std;

class AccountFixture : public testing::Test
{
public:
	Account account{ 10000, 5 };
};

TEST_F(AccountFixture, CreateAccountInit10000won)
{
	EXPECT_EQ(10000, account.getBalance());
}

TEST_F(AccountFixture, AfterYear)
{
	account.afterYear(1);
	EXPECT_EQ(10500, account.getBalance());
}

TEST_F(AccountFixture, ChangeInterest)
{
	account.changeInterest(10);
	account.afterYear(2);
	EXPECT_EQ(12100, account.getBalance());
}

