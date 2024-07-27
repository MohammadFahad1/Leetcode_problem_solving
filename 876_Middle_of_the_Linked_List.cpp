
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{

    int size_of_list(ListNode *head)
    {
        ListNode *tmp = head;
        int count = 0;
        while (tmp != NULL)
        {
            count++;
            tmp = tmp->next;
        }
        return count;
    }

public:
    ListNode *middleNode(ListNode *head)
    {
        ListNode *tmp = head;
        int mid = size_of_list(head) / 2;
        for (int i = 0; i < mid; i++)
        {
            tmp = tmp->next;
        }
        return tmp;
    }
};