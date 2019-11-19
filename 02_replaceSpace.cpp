/*
链接：https://www.nowcoder.com/practice/4060ac7e3e404ad1a894ef3e17650423?tpId=13&tqId=11155&rp=1&ru=/ta/coding-interviews&qru=/ta/coding-interviews/question-ranking
题目描述
请实现一个函数，将一个字符串中的每个空格替换成“%20”。例如，当
字符串为We Are Happy.则经过替换之后的字符串为We%20Are%20Happy。
*/
class Solution {
public:
	void replaceSpace(char *str,int length) {
        int count = 0;
        for(int i = 0; i < length; ++i)
        {
            if(str[i] == ' ')
                ++count;
        }
        int right = length + 2 * count - 1;
        int left = length - 1;
        while(left >= 0)
        {
            if(str[left] == ' ')
            {
                --left;
                str[right--] = '0';
                str[right--] = '2';
                str[right--] = '%';
                
            }
            else
            {
                str[right--] = str[left--];
            }
        }
            
	}
};