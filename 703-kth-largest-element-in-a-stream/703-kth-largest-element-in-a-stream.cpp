class KthLargest
{
public:
    // member variable for storing kth value
    int k;
    // min heap stl priority queue
    priority_queue<int, vector<int>, greater<int>> min_heap;
    KthLargest(int x, vector<int> &v)
    {
        k = x;
        // sorting the vector
        sort(v.begin(), v.end());
        // adding k largest elements in the min heap
        if (!v.empty())
            while (x-- && !v.empty())
            {
                min_heap.push(v.back());
                v.pop_back();
            }
    }

    int add(int val)
    {
        // if min heap size is less than k then add val directly
        if (min_heap.size() < k)
        {
            min_heap.push(val);
            return min_heap.top();
        }
        // if size is equal to k, compare the val with top
        // if val is greater than top, remove top and add val
        // because we have to maintain a min heap of size k.
        if (val > min_heap.top())
            min_heap.pop(),
                min_heap.push(val);
        return min_heap.top();
    }
};