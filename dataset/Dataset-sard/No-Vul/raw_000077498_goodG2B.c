static void FUN1()
{
    int VAR1;
    char * VAR2;
    char VAR3[100];
    memset(VAR3, '', 100-1);
    VAR3[100-1] = '';
    for(VAR1 = 0; VAR1 < 1; VAR1++)
    {
        
        VAR2 = VAR3;
    }
    {
        size_t VAR4;
        char VAR5[100];
        memset(VAR5, '', 100-1); 
        VAR5[100-1] = ''; 
        
        for (VAR4 = 0; VAR4 < 100; VAR4++)
        {
            VAR5[VAR4] = VAR2[VAR4];
        }
        
        VAR5[100-1] = '';
        FUN2(VAR5);
    }
}