#include<bits/stdc++.h>

using namespace std;

int main()
{
    FILE *aju,*abhi,*mai;
    char ch,file1[20],file2[20],file3[20];
    cout<<"Enter name of first file: "<<endl;
    gets(file1);
    cout<<"Enter name of second file: "<<endl;
    gets(file2);
    cout<<"Enter name of file too merge above files: "<<endl;
    gets(file3);
    aju=fopen(file1,"r");
    abhi=fopen(file2,"r");
    if(aju!=NULL || abhi!=NULL)
    {
        cout<<"error has occured:"<<endl;
    }
    mai=fopen(file3,"w");
    if(mai==NULL)
    {
        cout<<"error occured"<<endl;
    }
    while((ch=fgetc(aju))!=EOF)
    {
        fputc(ch,mai);
    }
        while((ch=fgetc(abhi))!=EOF)
    {
        fputc(ch,mai);
    }
    cout<<"two files merged successfully"<<endl;
    fclose(aju);
    fclose(abhi);
    fclose(mai);

    return 0;



}