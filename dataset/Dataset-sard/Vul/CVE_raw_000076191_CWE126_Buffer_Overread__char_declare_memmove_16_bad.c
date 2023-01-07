void FUN1()
{
    char * VAR1;
    char VAR2[50];
    char VAR3[100];
    memset(VAR2, '', 50-1); 
    VAR2[50-1] = ''; 
    memset(VAR3, '', 100-1); 
    VAR3[100-1] = ''; 
    while(1)
    {
        
        VAR1 = VAR2;
        break;
    }
    {
        char VAR4[100];
        memset(VAR4, '', 100-1);
        VAR4[100-1] = ''; 
        
        memmove(VAR4, VAR1, strlen(VAR4)*sizeof(char));
        VAR4[100-1] = '';
        FUN2(VAR4);
    }
}