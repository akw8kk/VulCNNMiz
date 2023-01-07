void FUN1()
{
    char * VAR1;
    char * VAR2 = (char *)FUN2(100*sizeof(char));
    memset(VAR2, '', 100-1);
    VAR2[100-1] = '';
    if(VAR3)
    {
        
        VAR1 = VAR2 - 8;
    }
    {
        char VAR4[100];
        memset(VAR4, '', 100-1); 
        VAR4[100-1] = ''; 
        
        memcpy(VAR1, VAR4, 100*sizeof(char));
        
        VAR1[100-1] = '';
        FUN3(VAR1);
    }
}