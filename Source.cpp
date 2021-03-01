#include <iostream>
#include <cmath>
#define N 5

using namespace std;

class Polinom
{
private:
	int x;
	int st;					/*степ≥нь чисел*/
	double arr[N];
public:
	Polinom()
	{
		st = N;
		for (int i = 0; i < N; i++) {
			arr[i] = 0;
		}
		for (int j = 0; j < N; j++) {
			arr[j] = 0;
		}
	}

	~Polinom() {};

	int input()
	{
		cout << "\n¬ведiть коефiцiЇнти:  \n";
		for (int i = 0; i < N; i++) {
			cin >> arr[i];
		}
		return 0;

		cout << "¬ведiть коефiцiЇнти: \n ";
		for (int j = 0; j < N; j++) {
			cin >> arr[j];
		}
		return 0;
	}

	void output()
	{
		cout << "ѕолiном:" << '\n';		
		for (int j = 0; j < N, st != 0; j++, st--)
		{
			cout << arr[j] << 'x' << '^' << st << '+';			
		}
		cout << '\n';
	}

	void InputX()
	{
		cout << "x = ";
		cin >> x;
	}

	double result() {
		int res = 0;
		st = N;
		for (int i = 0; i < N, st != 0; i++, st--) {
			res += (arr[i] * pow(x, st));				
		}
		return res;
	}

}; Polinom A; Polinom B;
	
int main()
{
	setlocale(LC_ALL, "Ukrainian");	

	double sum;
	double riz;
	double res;

	A.input();
	A.output();
	A.InputX();	
	res = A.result();
	cout << "–езультат = " << res;

	B.input();
	B.output();
	B.InputX();	
	res = B.result();
	cout << "–езультат = " << res;
	
	sum = A.result() + B.result();
	cout << "\n\n—ума полiномiв = " << sum;

	riz = fabs(A.result() - B.result());
	cout << "\n–iзниц€ полiномiв = " << riz;

	return 0;
}