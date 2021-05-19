#include <stdio.h>
#include <string.h>
int main(){
    char str1[100][15],str2[100][15];
    char t1[] ="(";
    char t2[] = ") ";
    char *p [100],*o;
    int i,j,n = 0,t,key1 = 0,key2 = 0,len1,len2;
    char s1[50];
    i = 0;
    printf("请输入一个英文句子：\n");
    while (1)
    {
        scanf("%s",str1[i]);
        t = 0;
        for(j = 0;j<strlen(str1[i]);j++){
            if(str1[i][j]!='.' && str1[i][j]!=','){
                str2[i][t]=str1[i][j];
                t++;
            }
            str2[i][t]='\0';
            if(str1[i][j]=='.'){
                key1 = 1;
            }
        }
        i++;
        if(key1 == 1)
            break;
    }
    memset(str1,'\0',sizeof(str1));
    len1 = i;//i表示循环次数，代表列数，即单词数
    for(i = 0;i<len1;i++){
        for(j = 0;strcmp(str2[i],str2[j])!=0;j++);
        //判断str2上第i个单词与第j个单词是否相等，储存第一次出现的单词；i位前若有相同的则提前结束，否则会位移到i，此时是第一处出现
            if(i==j){
                strcpy(str1[n],str2[j]);
                n++;
        }
    }
    len2 = n;//n表示不重复的单词数
    int a[50] = {0};
    for(i = 0;i<n;i++){
        for(j = 0;j<len1;j++){
            if(strcmp(str1[i],str2[j])==0){
                a[i]++;
            }
        }
    }

    for(i=0;i<n;i++){
        printf("%d",a[i]);
    }
    // for(i = 0;i<len2;i++){
    //     printf("%s ",str1[i]);
    // }
    printf("\n");
    //排列部分
    for(i = 0;i<len2;i++){
        p[i] = str1[i];
    }
    for(i = 0;i<len2;i++){
        for(j = i+1;j<len2-1;j++){
            if(a[i]<a[j]){
                o = p[j];
                p[j] = p[i];
                p[i] = o;
            }
        }
    }
    for(i = 0;i<len2;i++){
        printf("%s ",p[i]);
    }
    return 0;
}
