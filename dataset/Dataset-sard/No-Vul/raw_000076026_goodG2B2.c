static void FUN1()
{
    char * VAR1;
    char * VAR2 = (char *)FUN2(50*sizeof(char));
    char * VAR3 = (char *)FUN2(100*sizeof(char));
    memset(VAR2, '', 50-1); 
    VAR2[50-1] = ''; 
    memset(VAR3, '', 100-1); 
    VAR3[100-1] = ''; 
    if(FUN3())
    {
        
        VAR1 = VAR3;
    }
    {
        char VAR4[100];
        memset(VAR4, '', 100-1);
        VAR4[100-1] = ''; 
        
        memcpy(VAR4, VAR1, strlen(VAR4)*sizeof(char));
        VAR4[100-1] = '';
        FUN4(VAR4);
    }
}