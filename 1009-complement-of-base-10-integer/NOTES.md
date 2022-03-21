Here,  Eg: n=5   => 00000....0101
so,  ~n = 111.....010
​
Now, we have to save the last part from right that is 10
and we have to replce all the other part with 0 to get the correct answer
so we can replace all 1 with 0 by Doing "&" with mask
​