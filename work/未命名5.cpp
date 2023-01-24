#include <iostream>

using namespace std;

int main()
{
 int n, s, a, b, p[5000] = { 0 } , q[5000] = { 0 }, i, m, k, j = 0;
 cin >> n >> s;
 cin >> a >> b;
 for (i = 0; i < n; i++)
 {
  cin >> p[i] >> q[i];
 }
 
 for (i = 0; i < n; i++)
 {
  
  if (p[i] > a + b) {
   

   q[i - j] = 0;
  
   
   for (m = i-j; m < n; m++)
   {
    k = q[m]; q[m] = q[m + 1]; q[m + 1] = k;
   }
       j++;
  
   }
 }
 
 system("pause");

 for (i = 1; i < n - j; i++)
 {
  for(k=1;k<n-j;k++)
  if(q[i-1]>q[i])
  {
  	m=q[i-1];
  	q[i-1]=q[i];
  	q[i]=m;
  }
 }
 
 int y = 0;
 for (i = 0; i < n - j; i++)
 {
  y += q[i];
  if (y > s) { break; }


 }
 cout << i << endl;

    return 0;
}
