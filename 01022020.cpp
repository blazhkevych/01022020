#include <iostream>
#include <Windows.h>;
using namespace std;

int main()
{
	int n, poz = 0, neg = 0, nul = 0, parn = 0, neparn = 0;
	cout << "Enter n="; cin >> n;
	for (int a, i = 0; i < n; i++)
	{
		cout << "Input a=";
		cin >> a;
		if (a > 0)
			poz++;
		if (a < 0)
			neg++;
		if (a == 0)
			nul++;
		if (abs(a) % 2 == 1)
			parn++;
		if (a % 2)
			neparn++;
	}
	cout << "Pozitiv= " << poz << "\nNegativ= " << neg << "\nNuliv= " << nul << "\nParnux= " << parn << "\nNe parnux = " << neparn << endl;

	return 0;
}
/*int n, sum = 0;
	cout << "Enter n="; cin >> n;
	for (int a, i = 0; i < n; i++)
	{
		cout << "Input a=";
		cin >> a;
		sum = sum + a;
	}
	cout << "S= " << sum;

	return 0;*/

	/*int n, sum=0;
						cin >> n;
						for (int i = 1; i <= n; ++i)
						{
							cout << i << "+";
							sum = i+sum;
						}
						cout << "\b= " << sum;
						return 0;*/
						/*int n = 5;
							cin >> n;
							int i = 1;
							do
							{
								cout << i << "\t";
								i++;
							}
							while (i <= n);
							return 0;*/

							/*int n = 5;
								cin >> n;
								int i = n;
								while (i > 0) // поки істинна умова ми робимо тіло
								{
									cout << i << "\t";
									i--;
								}
								return 0;*/

								/*int n = 5;
									cin >> n;
									int i = 1;
									while (i<=n) // поки істинна умова ми робимо тіло
									{
										cout << i << "\t";
										i++;
									}
										return 0;*/

										/*int n = 5;
											cin >> n;
											for (int i = n; i > 0; i--)
												cout << i << "\t";
											return 0;*/

											/*{
												int n = 5;
												for (int a = 1, i = 1; i <= n; ++i, a += 2)
													cout << a << "\t";
												return 0;
											}*/

											/*int n, sum=0;
												cin >> n;
												for (int i = 1; i <= n; ++i)
												{
													cout << i << "+";
													sum = i+sum;
												}
												cout << "\b= " << sum;
												return 0;*/

												/*int n ;
													cin >> n;
													for (int i = 1; i <= n; ++i)
													{
														cout << i << "+";
													}

														cout <<"\b ";

													return 0;*/