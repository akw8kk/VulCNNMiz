void FUN1()
{
    char * VAR1;
    char * VAR2 = (char *)FUN2(100*sizeof(char));
    memset(VAR2, '', 100-1);
    VAR2[100-1] = '';
    if(FUN3())
    {
        
        VAR1 = VAR2 - 8;
    }
    {
        char VAR3[100];
        memset(VAR3, '', 100-1); 
        VAR3[100-1] = ''; 
        
        strncpy(VAR1, VAR3, 100-1);
        
        VAR1[100-1] = '';
        FUN4(VAR1);
    }
}