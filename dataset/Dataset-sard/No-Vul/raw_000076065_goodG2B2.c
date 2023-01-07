static void FUN1()
{
    char * VAR1;
    char * VAR2 = (char *)FUN2(50*sizeof(char));
    char * VAR3 = (char *)FUN2(100*sizeof(char));
    memset(VAR2, '', 50-1); 
    VAR2[50-1] = ''; 
    memset(VAR3, '', 100-1); 
    VAR3[100-1] = ''; 
    if(VAR4)
    {
        
        VAR1 = VAR3;
    }
    {
        char VAR5[100];
        memset(VAR5, '', 100-1);
        VAR5[100-1] = ''; 
        
        memmove(VAR5, VAR1, strlen(VAR5)*sizeof(char));
        VAR5[100-1] = '';
        FUN3(VAR5);
    }
}