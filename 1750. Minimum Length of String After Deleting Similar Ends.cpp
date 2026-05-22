//intuition 
//we can use two pointer approach to solve this problem
//we will start from the left and right end of the string and check if the characters are same or not if they are same then we will move the pointers towards the center of the string until we find different characters or the pointers cross each other
/*code
class Solution {
public:
    int minimumLength(string s) {
        int n = s.length();
        int i =0, j=n-1;
        while(i<j && s[i]==s[j]){
            char ch =s[i];
            while(i<j&&s[i]==ch){
                i++;
            }
            while(j>=i &&s[j]==ch){
                j--;
            }
        }
        
        return j-i+1;
    }
};

Time Complexity
O(n)
Because both pointers move inward only once.
Space Complexity
O(1)
No extra space used.
What Your Code Does


i → left pointer
j → right pointer

If both ends have the same character:

Store that character in ch
Remove all occurrences of ch from left
Remove all occurrences of ch from right
Continue until ends differ
then return j-i+1;
*/