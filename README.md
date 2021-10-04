## UVA100_The_3n_plus_1_problem_4
+ website : https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=3&page=show_problem&problem=36
-----
```c++
if(n==1) 
{
  return length;
}
else if(n%2==1)
{
  n=(n*3)+1;
  condition(n,++length);
}
else if(n%2==0)
{
	n=n/2;
   ....
}
```
Use recursive to solve this question.
