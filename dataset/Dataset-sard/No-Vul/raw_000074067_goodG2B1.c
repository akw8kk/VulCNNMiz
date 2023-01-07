static void FUN1()
{
    char * VAR1;
    char VAR2[100];
    memset(VAR2, '', 100-1);
    VAR2[100-1] = '';
    if(VAR3!=5)
    {
        
        FUN2("");
    }
    else
    {
        
        VAR1 = VAR2;
    }
    {
        char VAR4[100];
        memset(VAR4, '', 100-1); 
        VAR4[100-1] = ''; 
        
        memmove(VAR1, VAR4, 100*sizeof(char));
        
        VAR1[100-1] = '';
        FUN2(VAR1);
    }
}