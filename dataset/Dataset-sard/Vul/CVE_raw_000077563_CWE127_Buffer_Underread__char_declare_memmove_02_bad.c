void FUN1()
{
    char * VAR1;
    char VAR2[100];
    memset(VAR2, '', 100-1);
    VAR2[100-1] = '';
    if(1)
    {
        
        VAR1 = VAR2 - 8;
    }
    {
        char VAR3[100];
        memset(VAR3, '', 100-1); 
        VAR3[100-1] = ''; 
        
        memmove(VAR3, VAR1, 100*sizeof(char));
        
        VAR3[100-1] = '';
        FUN2(VAR3);
    }
}