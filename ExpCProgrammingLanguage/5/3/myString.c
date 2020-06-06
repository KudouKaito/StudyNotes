extern int myStrcmp(const char * s1,const char * s2)
{
    size_t i;
    for(i=0;s1[i]==s2[i]&&s1[i]&&s2[i];i++);
    return s1[i]-s2[i];
}

extern size_t myStrlen(const char * s)
{
    size_t i;
    for(i=0;s[i]!='\0';i++);
    return i;
}

extern char * myStrcat(char * dest,const char * src)
{
    size_t i;
    size_t len=myStrlen(dest);
    for(i=0;src[i]!='\0';i++)
    {
        dest[len+i]=src[i];
    }
    dest[len+i]='\0';
    return dest;
}

extern char * myStrcpy(char * dest,const char * src)
{
    size_t i;
    for(i=0;src[i]!='\0';i++)
    {
        dest[i]=src[i];
    }
    dest[i]='\0';
    return dest;
}
