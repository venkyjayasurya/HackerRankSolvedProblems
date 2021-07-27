/*
 So, the New Year holidays are over. Santa Claus and his colleagues can take a rest and have guests at last.
 When two "New Year and Christmas Men" meet, thear assistants cut out of cardboard the letters from the guest's name
 and the host's name in honor of this event. Then the hung the letters above the main entrance. One night,
 when everyone went to bed, someone took all the letters of our characters' names. Then he may have shuffled
 the letters and put them in one pile in front of the door.

The next morning it was impossible to find the culprit who had made the disorder. But everybody
 wondered whether it is possible to restore the names of the host and his guests from the letters
 lying at the door? That is, we need to verify that there are no extra letters, and that nobody will
 need to cut more letters.

Help the "New Year and Christmas Men" and their friends to cope with this problem. You are given both
 inscriptions that hung over the front door the previous night, and a pile of letters that were found
 at the front door next morning.

Input Format

The input file consists of three lines: the first line contains the guest's name, the second line
 contains the name of the residence host and the third line contains letters in a pile that were
 found at the door in the morning. All lines are not empty and contain only uppercase Latin letters.

Constraints
The length of each line does not exceed 100.

Output Format
Print "YES" without the quotes, if the letters in the pile could be permuted to make the names of the
 "New Year and Christmas Men". Otherwise, print "NO" without the quotes.

Sample Input 0
SANTACLAUS
DEDMOROZ
SANTAMOROZDEDCLAUS

Sample Output 0
YES

Sample Input 1
PAPAINOEL
JOULUPUKKI
JOULNAPAOILELUPUKKI

Sample Output 1
NO
 * */

#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
using namespace std;

char s1[105],s2[105],s3[105];

int main()
{
    int a[105],b[105],tag;
    while(~scanf("%s%s%s",s1,s2,s3))
    {
        if(strlen(s1)+strlen(s2)!=strlen(s3))
        {
            printf("NO\n");
            continue;
        }
        memset(a,0,sizeof(a));
        memset(b,0,sizeof(b));
        for(int i=0;i<strlen(s3);++i)
        {
            tag=0;
            for(int j=0;j<strlen(s1);++j)
                if(a[j]==0 && s1[j] == s3[i])
                {
                    tag=1;
                    a[j]=1;
                    break;
                }
            if(tag==0)
            {
                for(int j=0;j<strlen(s2);++j)
                    if(!b[j] && s2[j]==s3[i])
                    {
                        tag=1;
                        b[j]=1;
                        break;
                    }
            }
            if(!tag)
            {
                printf("NO\n");
                break;
            }
        }
        if(tag)
            printf("YES\n");
    }
    return 0;
}