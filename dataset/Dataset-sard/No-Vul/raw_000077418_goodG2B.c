static void FUN1()
{
    int VAR1;
    char * VAR2;
    char * VAR3 = (char *)FUN2(100*sizeof(char));
    memset(VAR3, '', 100-1);
    VAR3[100-1] = '';
    for(VAR1 = 0; VAR1 < 1; VAR1++)
    {
        
        VAR2 = VAR3;
    }
    {
        char VAR4[100];
        memset(VAR4, '', 100-1); 
        VAR4[100-1] = ''; 
        
        strncpy(VAR4, VAR2, strlen(VAR4));
        
        VAR4[100-1] = '';
        FUN3(VAR4);
    }
}