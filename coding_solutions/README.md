# Coding Solution

<b> USN: </b> 4AL17CS038 <br>
<b> NAME: </b> K Thrishul <br>

<b>1. <b/>A simple solution is simply multiply and count trailing 0s in product. This solution may cause integer overflow. A better solution is based on the fact that zeros are formed by a combination of 2 and 5. Hence the number of zeros will depend on the number of pairs of 2’s and 5’s that can be formed.<br>
Ex.: 8 * 3 * 5 * 23 * 17 * 25 * 4 * 11<br>
23 * 31 * 51 * 231 * 171 * 52 * 22 * 111<br>
In this example there are 5 twos and 3 fives. Hence, we shall be able to form only 3 pairs of (2*5). Hence will be 3 Zeros in the product.<br>
<b>Location : </b> /Java/CountZeros.java<br><br>
<b>2. </b>Python program to read a number and print the pattern.<br>
<b>Location : </b> /Python/StarPattern.py<br><br>