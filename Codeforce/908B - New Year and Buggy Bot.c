#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define nl printf("\n");

typedef long long ll;
typedef unsigned int ui;
typedef unsigned long long ull; 

int n,m, xS,yS,xE,yE;  
char a[100][100];

int main() {
  cin>>n>>m;
  char x;
  scanf("%c", &x);
  for (int i = 0; i <= m+1; ++i)
  {
    a[0][i]='#';
  }
  for (int i = 1; i <= n; ++i)
  {
    a[i][0]='#';
    for (int j = 1; j <=m; ++j)
    {
      char x;
      scanf("%c", &x);
      a[i][j]=x;
      if (x=='S')
      {
        xS=j;
        yS=i;
      } else if (x=='E'){
        xE=j;
        yE=i;
      }
    }
    char x;
    scanf("%c", &x);
    a[i][m+1]='#';

  }
  for (int i = 0; i <= m+1; ++i)
  {
    a[n+1][i]='#';
  }

  string gerak;
  cin >> gerak;

  //Hitung
  int banyakCara=0;
  // down-left-up-right
  char command[] = {'0','1','2','3'};
  sort (command,command+4);
  
  do {
    // printf("%c\n", command[0] );
    // printf("%c\n", command[1] );
    // printf("%c\n", command[2] );
    // printf("%c\n", command[3] );
    // printf("___________\n");
    int tempX = xS , tempY = yS;
    for (int i = 0; i < gerak.size(); ++i)
    {
      if (gerak[i]==command[0])
      {
        tempY--;
      } else if (gerak[i]==command[1]){
        tempX--;
      } else if (gerak[i]==command[2]){
        tempY++;
      } else if (gerak[i]==command[3]){
        tempX++;
      }

      // printf("%c\n", a[tempX][tempY]);
      if (a[tempY][tempX]=='E')
      {
        banyakCara++;
        break;
      } else if (a[tempY][tempX]=='#') {
        break;
      }
    }
    // printf("MASUK\n");
  }while( next_permutation(command,command+4) );
  
  // for (int i = 0; i <= n+1; ++i)
  // {
  //   for (int j = 0; j <=m+1; ++j)
  //   {
  //     printf("%c", a[i][j]);
  //   }
  //   nl
  // }

  printf("%d\n", banyakCara);
  return 0;
}