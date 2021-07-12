/*
Given a date string in the form Day Month Year, where:

Day is in the set {"1st", "2nd", "3rd", "4th", ..., "30th", "31st"}.
Month is in the set {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"}.
Year is in the range [1900, 2100].
Convert the date string to the format YYYY-MM-DD, where:

YYYY denotes the 4 digit year.
MM denotes the 2 digit month.
DD denotes the 2 digit day.
*/
class Solution {
    vector<string> seq = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};

public:
    string reformatDate(string date) {
        std::ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);

        unordered_map<string, int> um;
        for (int i = 0; i < 12; ++i) um[seq[i]] = i + 1;

        istringstream is(date);
        string tmp, res;

        int cnt = 0;
        while (getline(is, tmp, ' ')) {
            ++cnt;
            if (cnt == 1) {
                if (tmp.size() == 3) res.push_back('0');
                res += tmp.substr(0, tmp.size() - 2); 
            }
            else if (cnt == 2) {
                res = to_string(um[tmp]) + "-" + res;
                if (um[tmp] < 10) res = "0" + res;
            }
            else {
                res = tmp + "-" + res;
            }
        }

        return res;
    }
};

