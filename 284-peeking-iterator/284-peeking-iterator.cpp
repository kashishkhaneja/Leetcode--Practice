/*
 * Below is the interface for Iterator, which is already defined for you.
 * **DO NOT** modify the interface for Iterator.
 *
 *  class Iterator {
 *		struct Data;
 * 		Data* data;
 *  public:
 *		Iterator(const vector<int>& nums);
 * 		Iterator(const Iterator& iter);
 *
 * 		// Returns the next element in the iteration.
 *		int next();
 *
 *		// Returns true if the iteration has more elements.
 *		bool hasNext() const;
 *	};
 */

class PeekingIterator : public Iterator {
public:
	vector<int> v;
    int i;
	PeekingIterator(const vector<int>& nums) : Iterator(nums) {
	    // Initializing any member here.
	    // Using Iterator interface methods.
        v = nums;
        i = 0;
	}
	
    // Returns the next element in the iteration without advancing the iterator.
	int peek() {
        return v[i];
	}
	
	// hasNext() and next() should behave the same as in the Iterator interface.
	// Override them if needed.
	int next() {
	    int x = v[i];
        i++;
        return x;
	}
	
	bool hasNext() const {
	    return i >= v.size() ? false : true;
	}
};