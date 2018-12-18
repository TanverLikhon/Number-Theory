///       From dust I came and to dust I shall return
/**
                    Asadullah Bin Rahman
                          CSE-17
    HAJEE MOHAMMAD DANESH SCIENCE AND TECHNOLOGY UNIVERSITY
*/
#include<bits/stdc++.h>
#define sf(f)                            scanf("%d",&f)
#define pf(f)                            printf("%d\n",f)
#define PI                               3.1415926535897932385
#define mp                               make_pair
#define pb                               push_back
#define one(x)                           __builtin_popcount(x)              ///int
#define onel(x)                          __builtin_popcountl(x)             ///long int
#define onell(x)                         __builtin_popcountll(x)            ///long long
using namespace std;
typedef long long ll;

///int dx[]= {-1,-1,0,0,1,1};
///int dy[]= {-1,0,-1,1,0,1};
///int dx[]= {0,0,1,-1};                 /*4 side move*/
///int dy[]= {-1,1,0,0};                 /*4 side move*/
///int dx[]= {1,1,0,-1,-1,-1,0,1};       /*8 side move*/
///int dy[]= {0,1,1,1,0,-1,-1,-1};       /*8 side move*/
///int dx[]={1,1,2,2,-1,-1,-2,-2};       /*knight move*/
///int dy[]={2,-2,1,-1,2,-2,1,-1};       /*knight move*/
///Always Remember   'A'=65,'Z'=90 'a'=97 'z'=122 '0'=48

int main()
{
	int t;
	sf(t);
	vector<int>v1;
	vector<int>v2;
	for(int i=1; i<=t; i++)
		v1.pb(i);

    int ck=0,j=0;
	while(v1.size()!=1)
	{
		vector<int>:: iterator itr = v1.begin();
		if(ck==0)
		{
			v2.pb(*itr);
		    v1.erase(itr);
		    goto m;
		}

		else if(ck==1)
		{
			int save = *itr;
		    v1.erase(itr);
		    v1.pb(save);
		    goto n;
		}

		m:
		{
			ck=1;
			goto o;
		}

		n:
		    ck=0;
		o:
		{;}
	}


	cout<<"Discarded cards:";
	for(j=0; j<v2.size()-1; j++)
		cout<<" "<<v2[j]<<",";
	cout<<" "<<v2[j]<<endl;

	cout<<"Remaining card:";
	cout<<" "<<v1[0]<<endl;

	return 0;
}
