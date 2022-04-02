s, st, e-1: inorder to delete or ignore the character present on right
Now, let's take example : aabbcaa
here, Round 1: start =0, end = length-1 => a and a, both are same
so, Round 2: st++; end --;
now, palindrome is: abbca
Round 3: a and a(index 1 and index 5) both are same, so still palindrom
st++, end--  => bbc
Round 4: b and c(index 2 and index 4 )
It's not same, so we can call CheckPalindrome function and in that we have 2 cases: 1) start as it is, end-- => b and index 4-1=> 3 = b, so, b and b are palindrome
2) end as it is, start+1 => index 2+1 => index 3 => b and end is : c, so, we will put these cases in OR. so that if any one of these passes it's still palindrome.