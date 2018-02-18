// # ======================================= #
// # Ilham Firdausi Putra, 23 Desember 2017  #
// # ======================================= #
#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define nl printf("\n");

typedef long long ll;
typedef unsigned int ui;
typedef unsigned long long ull; 
vector<char> a[4][4];

bool isCellFull(int x, int y){
  bool hasil = true;
  for (int i = 0; i < 9; ++i)
  {
    if (a[x][y][i]=='.')
    {
      hasil=false;
      break;
    }
  }
  return hasil;
}
void fillCell(int x, int y){
  // printf("MASUK\n");
  for (int i = 0; i < 9; ++i)
  {
    if (a[x][y][i]=='.')
    {
      a[x][y][i]='!';
      // printf("%c\n", a[x][y][i]);
    }
  }
}

int main()
{

  for (int i = 0; i < 3; ++i)
  {
    char c1,c2,c3;
    scanf("%c%c%c ", &c1, &c2, &c3);
    a[1][1].pb(c1);a[1][1].pb(c2);a[1][1].pb(c3);

    scanf("%c%c%c ", &c1, &c2, &c3);
    a[1][2].pb(c1);a[1][2].pb(c2);a[1][2].pb(c3);

    scanf("%c%c%c ", &c1, &c2, &c3);
    a[1][3].pb(c1);a[1][3].pb(c2);a[1][3].pb(c3);
  }

  for (int i = 0; i < 3; ++i)
  {
    char c1,c2,c3;
    scanf("%c%c%c ", &c1, &c2, &c3);
    a[2][1].pb(c1);a[2][1].pb(c2);a[2][1].pb(c3);

    scanf("%c%c%c ", &c1, &c2, &c3);
    a[2][2].pb(c1);a[2][2].pb(c2);a[2][2].pb(c3);

    scanf("%c%c%c ", &c1, &c2, &c3);
    a[2][3].pb(c1);a[2][3].pb(c2);a[2][3].pb(c3);
  }

  for (int i = 0; i < 3; ++i)
  {
    char c1,c2,c3;
    scanf("%c%c%c ", &c1, &c2, &c3);
    a[3][1].pb(c1);a[3][1].pb(c2);a[3][1].pb(c3);

    scanf("%c%c%c ", &c1, &c2, &c3);
    a[3][2].pb(c1);a[3][2].pb(c2);a[3][2].pb(c3);

    scanf("%c%c%c ", &c1, &c2, &c3);
    a[3][3].pb(c1);a[3][3].pb(c2);a[3][3].pb(c3);
  }

  int x,y;
  scanf("%d %d", &x, &y);
  x%=3;
  x = x==0? 3:x;
  y%=3;
  y = y==0? 3:y;
  // cout<<x<<endl;
  // cout<<y<<endl;

  if (isCellFull(x,y))
  {
    fillCell(1,1);
    fillCell(1,2);
    fillCell(1,3);
    fillCell(2,1);
    fillCell(2,2);
    fillCell(2,3);
    fillCell(3,1);
    fillCell(3,2);
    fillCell(3,3);
  } else {
    fillCell(x,y);
  }

  for (int i = 0; i < 3; ++i)
  {

    printf("%c%c%c ", a[1][1][3*i], a[1][1][3*i + 1], a[1][1][3*i + 2]);
    printf("%c%c%c ",  a[1][2][3*i], a[1][2][3*i + 1], a[1][2][3*i + 2]);
    printf("%c%c%c \n",  a[1][3][3*i], a[1][3][3*i + 1], a[1][3][3*i + 2]);

  }
  nl
  for (int i = 0; i < 3; ++i)
  {

    printf("%c%c%c ", a[2][1][3*i], a[2][1][3*i + 1], a[2][1][3*i + 2]);

    printf("%c%c%c ",  a[2][2][3*i], a[2][2][3*i + 1], a[2][2][3*i + 2]);

    printf("%c%c%c \n",  a[2][3][3*i], a[2][3][3*i + 1], a[2][3][3*i + 2]);
  }
  nl
  for (int i = 0; i < 3; ++i)
  {

    printf("%c%c%c ", a[3][1][3*i], a[3][1][3*i + 1], a[3][1][3*i + 2]);

    printf("%c%c%c ",  a[3][2][3*i], a[3][2][3*i + 1], a[3][2][3*i + 2]);

    printf("%c%c%c \n",  a[3][3][3*i], a[3][3][3*i + 1], a[3][3][3*i + 2]);
  }


  return 0;
}

