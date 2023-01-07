void FUN1()
{
    int VAR1;
    char * VAR2;
    char * VAR3 = (char *)FUN2(50*sizeof(char));
    char * VAR4 = (char *)FUN2(100*sizeof(char));
    memset(VAR3, '', 50-1); 
    VAR3[50-1] = ''; 
    memset(VAR4, '', 100-1); 
    VAR4[100-1] = ''; 
    for(VAR1 = 0; VAR1 < 1; VAR1++)
    {
        
        VAR2 = VAR3;
    }
    {
        char VAR5[100];
        memset(VAR5, '', 100-1);
        VAR5[100-1] = ''; 
        
        memmove(VAR5, VAR2, strlen(VAR5)*sizeof(char));
        VAR5[100-1] = '';
        FUN3(VAR5);
    }
}