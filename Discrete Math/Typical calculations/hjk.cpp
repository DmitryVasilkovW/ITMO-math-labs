#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isAlpha(string str)
{
	for (char c : str)
	{
		if (isdigit(c))
		{
			return false;
		}
	}
	return true;
}

int main()
{
	int n, y = 0, u;
	cin >> n;
	vector<string> authors;
	for (int i = 0; i < n; i++)
	{
		string query;
		cin >> query;
		y++;
		if (isAlpha(query))
		{
			authors.push_back(query);
		}
		if (!isAlpha(query))
		{
			break;
		}
	}
	stable_sort(authors.begin(), authors.end());
	for (int i = y; i < n; i++)
	{
		cin >> u;
		cout << authors[u - 1] << '\n';
	}
	return 0;
}
