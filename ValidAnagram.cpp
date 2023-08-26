class Solution {
public:
    bool isAnagram(string s, string t) {
        bool flag = true;
            int n = s.length();
            int m = t.length();
            sort(s.begin(), s.end());
            sort(t.begin(), t.end());
            if (s.compare(t) == 0)
            {
                flag = 1;
            }
            else
            {
                flag = 0;
            }

            if (flag == 1)
            {
                cout << "valid" << endl;
            }
            else
            {
                cout << "invalid" << endl;
            }


            if (flag == true)
            {
                return true;
            }
            else
            {
                return false;
            }
    }
};