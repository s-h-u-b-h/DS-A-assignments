/*
Given a string s and a character c that occurs in s, return an array of integers answer where answer.length == s.length and answer[i] is the distance from index i to the closest occurrence of character c in s.

The distance between two indices i and j is abs(i - j), where abs is the absolute value function.
*/
class Solution {
public:
	vector<int> shortestToChar(string S, char C) {
		vector<int> result(S.length());
		int num = count(S.begin(), S.end(), C);
		if (num == 1)
			for (int i = 0; i < S.length(); ++i)
				result[i] = abs(int(i - S.find(C)));
		else
		{
			int p1 = S.find(C);
			for (int i = 0; i <= p1; ++i)
				result[i] = p1-i;
			int p2;
			int k = p1 + 1;
			while (k < S.length())
			{
				if (S[k] == C)
				{
					p2 = k;
					for (int j = p1 + 1; j < p2; j++)
						result[j] = abs(int(j - p1)) < abs(int(j - p2)) ? abs(int(j - p1)) : abs(int(j - p2));
					p1 = p2;
					k = p1;
				}
				k++;
			}
			if (p2 < S.length())
				for (int i = p2 + 1; i < S.length(); i++)
					result[i] = i - p2;
		}
		return result;
	}
};