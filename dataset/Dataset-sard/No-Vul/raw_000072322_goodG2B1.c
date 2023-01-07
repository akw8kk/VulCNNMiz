static void FUN1()
{
    char * VAR1;
    VAR1 = (char *)malloc(100*sizeof(char));
    if(5!=5)
    {
        
        FUN2("");
    }
    else
    {
        
        memset(VAR1, '', 50-1); 
        VAR1[50-1] = ''; 
    }
    {
        char VAR2[50] = "";
        
        memmove(VAR2, VAR1, strlen(VAR1)*sizeof(char));
        VAR2[50-1] = ''; 
        FUN2(VAR1);
        free(VAR1);
    }
}