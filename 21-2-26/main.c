//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//    printf("Hello world!\n");
//    return 0;
//}
//#include<stdio.h>
//#include<ctype.h>
//int quan[]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
//char M[]="10X98765432";
//int pan(char*p)
//{
//    int sum=0,i;
//    for(i=0;i<17;i++)
//    {
//
//        if(!isdigit(*p))
//            return 1;
//        sum+=(*p++-'0')*quan[i];
//    }
//    if(*p==M[sum%11])
//        return 0;
//    else
//        return 1;
//}
//int main()
//{
//    int n,i,flag=1;
//    char tmp[19];
//    scanf("%d",&n);
//    for(i=0;i<n;i++)
//    {
//        scanf("%s",tmp);
//        if(pan(tmp))
//        {
//            printf("%s\n",tmp);
//            flag=0;
//        }
//    }
//    if(flag)
//        printf("All passed");
//}
//#include<stdio.h>
//int main()
//{
//    int hao[100005],fen[100005]={0},n,i,tmp,f,max,maxi;
//    scanf("%d",&n);
//    for(i=0;i<n;i++)
//    {
//        scanf("%d",&tmp);
//        scanf("%d",&f);
//        fen[tmp]+=f;
//        hao[tmp]=1;
//    }
//    max=fen[0];
//    maxi=0;
//    for(i=1;hao[i];i++)
//    {
//        if(fen[i]>max)
//        {
//            max=fen[i];
//            maxi=i;
//        }
//    }
//    printf("%d %d",maxi,fen[maxi]);
//    return 0;
//}
