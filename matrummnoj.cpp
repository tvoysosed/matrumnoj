#include <iostream> 

//[._.]

using namespace std; 

int main()
{ 
int n, m, k ; 
cout << "Размер n" << endl; 
cin >> n;
cout << "Размер m" << endl;
cin >> m;
cout << "Размер k" << endl; 
cin >> k; 
int a[n][m], b[m][k], c[n][k]; 
for (int i = 0; i < n; i++)
   { 
   for (int j = 0; j < m; j++)
      { 
      cin >> a[i][j]; 
      } 
   } 
cout << endl; 
for (int i = 0; i < m; i++)
   { 
   for (int j = 0; j < k; j++)
      { 
      cin >> b[i][j]; 
      } 
   } 
cout << endl; 
for (int i = 0; i<n;i++)
   { 
   for (int j = 0;j<k;j++)
      { 
      c[i][j] = 0; 
      } 
   } 

for (int i = 0; i < n; i++)
   { 
   for (int j = 0; j < k; j++)
      { 
      for (int r = 0; r < m; r++)
         { 
         c[i][j] = c[i][j] + a[i][r] * b[r][j]; 

         } 
      cout << c[i][j] << " "; 
      } 
   cout << endl; 
   } 
}
