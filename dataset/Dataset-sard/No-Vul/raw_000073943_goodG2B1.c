static void FUN1()
{
    char * VAR1;
    char VAR2[100];
    memset(VAR2, '', 100-1);
    VAR2[100-1] = '';
    if(0)
    {
        
        FUN2("");
    }
    else
    {
        
        VAR1 = VAR2;
    }
    {
        char VAR3[100];
        memset(VAR3, '', 100-1); 
        VAR3[100-1] = ''; 
        
        strcpy(VAR1, VAR3);
        FUN2(VAR1);
    }
}