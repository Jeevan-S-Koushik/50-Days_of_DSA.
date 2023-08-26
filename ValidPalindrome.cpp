class Solution {
public:
    bool isPalindrome(string s) {
        string cleaned;
    for (char c : s)
    {
        if (isalnum(c))
        {
            cleaned += tolower(c);
        }
    }

    // Check if the cleaned string is a palindrome
    int left = 0;
    int right = cleaned.size() - 1;
    while (left < right)
    {
        if (cleaned[left] != cleaned[right])
        {
            return false;
        }
        left++;
        right--;
    }

    return true;
    }
};