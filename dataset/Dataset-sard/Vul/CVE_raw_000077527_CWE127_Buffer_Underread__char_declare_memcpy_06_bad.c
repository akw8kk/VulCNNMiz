void FUN1()
{
    char * VAR1;
    char VAR2[100];
    memset(VAR2, '', 100-1);
    VAR2[100-1] = '';
    if(VAR3==5)
    {
        
        VAR1 = VAR2 - 8;
    }
    {
        char VAR4[100];
        memset(VAR4, '', 100-1); 
        VAR4[100-1] = ''; 
        
        memcpy(VAR4, VAR1, 100*sizeof(char));
        
        VAR4[100-1] = '';
        FUN2(VAR4);
    }
}