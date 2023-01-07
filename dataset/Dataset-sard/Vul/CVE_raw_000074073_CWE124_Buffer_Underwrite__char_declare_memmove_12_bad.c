void FUN1()
{
    char * VAR1;
    char VAR2[100];
    memset(VAR2, '', 100-1);
    VAR2[100-1] = '';
    if(FUN2())
    {
        
        VAR1 = VAR2 - 8;
    }
    else
    {
        
        VAR1 = VAR2;
    }
    {
        char VAR3[100];
        memset(VAR3, '', 100-1); 
        VAR3[100-1] = ''; 
        
        memmove(VAR1, VAR3, 100*sizeof(char));
        
        VAR1[100-1] = '';
        FUN3(VAR1);
    }
}