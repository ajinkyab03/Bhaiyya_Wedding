#include<bits/stdc++.h>

using namespace std;

#define FILENAME "aju.txt"

int main()
{
    FILE *fp;
    char ch;
    int lineCount=0;
    fp=fopen(FILENAME,"r");
    if(fp==NULL)
    {
        cout<<"file does not exhist"<<endl;
        
    }
    else{
    while(ch=fgetc(fp)!=EOF)
    {
        if(ch==' ')
        {
            lineCount++;
        }
    }
    fclose(fp);
    cout<<"Total no.of lines in this text files are: "<<lineCount<<endl;
    }
    return 0;
}