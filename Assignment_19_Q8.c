/* 8. Given a list of words followed by two words, the task is to find the minimum distance
between the given two words in the list of words.
(Example : s = {“the”,”quick”,”brown”,”fox”,”quick”}
 word1 = “the”, word2 = “fox”, OUTPUT : 2 )
*/
#include<stdio.h>
int main()
{
    char words[5][20]={"the","quick","brown","fox","quick"};
    char word1[]="the";
    char word2[]="fox";
    int i,w1=-1,w2=-1,min=10000,temp;
    for( i=0; i<5; i++)
    {
        if(strcmp(words[i],word1)==0)
            w1=i;
        if(strcmp(words[i],word2)==0)
            w2=i;
    }
    if(w1 != -1 && w2 !=-1 )
    {
        temp= abs(w2-w1);
        if(temp<min)
            min=temp;
    }
     printf("minimum distance=%d",min-1);

}
