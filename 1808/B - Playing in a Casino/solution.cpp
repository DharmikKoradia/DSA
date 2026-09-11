#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
	int t;
	cin >> t; // Read the number of test cases
 
	while (t--)
	{
		int n, m;
		cin >> n >> m; // Read the number of cards (n) and numbers on each card (m)
 
		// Create a 2D vector to store the numbers on each card in a rotated fashion
		vector<vector<long long>> v(m, vector<long long>(n));
 
		// Read the numbers for each card and store them in the rotated matrix
		for (int j = 0; j < n; j++)
		{
			for (int i = 0; i < m; i++)
			{
				cin >> v[i][j]; // Store the j-th card's i-th number in v[i][j]
			}
		} // Time complexity: O(n * m)
 
		// Sort each row of the rotated matrix
		for (int i = 0; i < m; i++)
		{
			sort(v[i].begin(), v[i].end()); // Sort the i-th row
		} // Time complexity: O(m * (n log n))
 
		long long ans = 0; // Initialize the total winnings
 
		// Calculate the total winnings for all games
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < n; j++)
			{
				// Calculate the contribution of v[i][j] to the total winnings
				ans -= (v[i][j] * (n - j - 1));
				ans += (v[i][j] * j);
			}
		} // Time complexity: O(n * m)
 
		cout << ans << "
"; // Output the total winnings for the current test case
	}
}
 
// Time Complexity (TC): O(m * (n log n))
// Space Complexity (SC): O(n * m)