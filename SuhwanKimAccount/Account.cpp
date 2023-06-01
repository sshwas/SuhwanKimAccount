class Account
{
public:
	Account(int won, int percent) : balance(won), interest(percent)
	{}

	int getBalance()
	{
		return balance;
	}

	void changeInterest(int percent)
	{
		interest = percent;
	}

	void afterYear(int year)
	{
		for (int i = 0; i < year; ++i)
			balance += ((balance * interest) / 100);
	}

private:
	int balance;
	int interest;
};
