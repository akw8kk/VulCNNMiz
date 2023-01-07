void FUN1()
{
    int VAR1;
    char * VAR2;
    char VAR3[100];
    memset(VAR3, '', 100-1);
    VAR3[100-1] = '';
    for(VAR1 = 0; VAR1 < 1; VAR1++)
    {
        
        VAR2 = VAR3 - 8;
    }
    {
        size_t VAR1;
        char VAR4[100];
        memset(VAR4, '', 100-1); 
        VAR4[100-1] = ''; 
        
        for (VAR1 = 0; VAR1 < 100; VAR1++)
        {
            VAR2[VAR1] = VAR4[VAR1];
        }
        
        VAR2[100-1] = '';
        FUN2(VAR2);
    }
}