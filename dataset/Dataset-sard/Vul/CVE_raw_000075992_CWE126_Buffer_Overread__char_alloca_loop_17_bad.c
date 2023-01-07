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
        size_t VAR1, VAR5;
        char VAR6[100];
        memset(VAR6, '', 100-1);
        VAR6[100-1] = ''; 
        VAR5 = strlen(VAR6);
        
        for (VAR1 = 0; VAR1 < VAR5; VAR1++)
        {
            VAR6[VAR1] = VAR2[VAR1];
        }
        VAR6[100-1] = '';
        FUN3(VAR6);
    }
}