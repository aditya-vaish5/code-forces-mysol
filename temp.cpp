
class Solution
{
    long ans = 0;
    long f(const vector<int> &speed, const vector<int> &efficiency, int index, int k, const int &n, long curr_min, int curr_sum)
    {
        long temp_ans = 0;
        if (k == 0)
        {
            return curr_min * curr_sum;
        }

        int temp_min = curr_min;
        long temp_sum = curr_sum;
        for (int i = index; i < n-k+1; i++)
        {
            temp_min = curr_min;
            if (efficiency[i] < temp_min)
            {
                temp_min = curr_min;
            }
            temp_sum = curr_sum + speed[i];

            temp_ans = max(f(speed, efficiency, i, k - 1, n, temp_min, temp_sum), temp_ans);
        }
        return temp_ans;
    }
    int maxPerformance(int n, vector<int> &speed, vector<int> &efficiency, int k)
    {
        return f(speed, efficiency, 0, k, n, INT_MAX);
    }
};
eyJ0eXAiOiJKV1QiLCJhbGciOiJIUzI1NiJ9.eyJfYXV0aF91c2VyX2lkIjoiMjMwMTU0NyIsIl9hdXRoX3VzZXJfYmFja2VuZCI6ImRqYW5nby5jb250cmliLmF1dGguYmFja2VuZHMuTW9kZWxCYWNrZW5kIiwiX2F1dGhfdXNlcl9oYXNoIjoiZDdiZWYzNzAxYzgzZGEwNjRkMTQxZjc1OGE2MzA4YjU0NjIwYzQwNiIsImlkIjoyMzAxNTQ3LCJlbWFpbCI6ImYyMDE3MDM3OUBwaWxhbmkuYml0cy1waWxhbmkuYWMuaW4iLCJ1c2VybmFtZSI6Imh1c2thcmwiLCJ1c2VyX3NsdWciOiJodXNrYXJsIiwiYXZhdGFyIjoiaHR0cHM6Ly9hc3NldHMubGVldGNvZGUuY29tL3VzZXJzL2h1c2thcmwvYXZhdGFyXzE1ODc1ODQxMTUucG5nIiwidGltZXN0YW1wIjoiMjAyMC0wNC0yMiAyMDoyMTo1Mi43Nzk2NTMrMDA6MDAiLCJJUCI6IjI0MDE6NDkwMDo0MThlOjZkNGE6NDgxMTpiNTZmOjk1ZGI6ZGQxNSIsIklERU5USVRZIjoiMTU3MGFkZDRiM2U2NjBmMjc4MzViZGNhNTA4MTRhNzEiLCJfc2Vzc2lvbl9leHBpcnkiOjEyMDk2MDB9.vj9f_Je9R8O3yvhRWRKg5aQkkd_9u4fxbDazrM7o0h8