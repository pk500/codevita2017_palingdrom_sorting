
//#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<iostream>
using namespace std;
void isPpalindrome(char str[]);

int compare(const void *a, const void * b)
{
    return ( *(char *)a - *(char *)b );
}


void swap(char* a, char* b)
{
    char t = *a;
    *a = *b;
    *b = t;
}


int findCeil(char str[], char first, int l, int h)
{

    int ceilIndex = l;


    for (int i = l+1; i <= h; i++)
        if (str[i] > first && str[i] < str[ceilIndex])
            ceilIndex = i;

    return ceilIndex;
}


void soortedPeormutations(char str[])
{

    int size = strlen(str);


    qsort(str, size, sizeof( str[0] ), compare);


    bool isFinished = false;
    while (!isFinished)
    {

        static int x = 1;
        isPpalindrome(str);

        int i;
        for (i = size - 2; i >= 0; --i)
            if (str[i] < str[i+1])
                break;


        if (i == -1)
            isFinished = true;
        else
        {

            int ceilIndex = findCeil(str, str[i], i + 1, size - 1);


            swap(&str[i], &str[ceilIndex]);


            qsort(str + i + 1, size - i - 1, sizeof(str[0]), compare);
        }
    }
}
void isPpalindrome(char str[])
{

	int l = 0;
	int h = strlen(str) - 1;


	while (h > l)
	{
		if (str[l++] != str[h--])
		{

			return;
		}
	}
	//printf("%s\n", str);
	cout<<str;//<<endl;
}

int main()
{//int t;
char str[10];



//cin>>t;
//scanf("%d",&t);
//for(int i=1;i<=t;i++){


    //scanf("%s",&str);
    cin>>str;

    //cout<<i<<endl;
   // sortedPermutations( str );
   // }
    //return 0;
//}
//for(int i=1;i<=t;i++){

   // char str[100000];
    //scanf("%s",&str);
    //cin>>str;

    //cout<<"\n"<<i<<endl;
    soortedPeormutations( str );
   // }
    return 0;
}
