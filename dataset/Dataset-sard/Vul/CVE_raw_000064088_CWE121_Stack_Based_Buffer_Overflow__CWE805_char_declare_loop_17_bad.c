void FUN1()
{
    int VAR1;
    char * VAR2;
    char VAR3[50];
    char VAR4[100];
    for(VAR1 = 0; VAR1 < 1; VAR1++)
    {
        
        VAR2 = VAR3;
        VAR2[0] = ''; 
    }
    {
        size_t VAR1;
        char VAR5[100];
        memset(VAR5, '', 100-1); 
        VAR5[100-1] = ''; 
        
        for (VAR1 = 0; VAR1 < 100; VAR1++)
        {
            VAR2[VAR1] = VAR5[VAR1];
        }
        VAR2[100-1] = ''; 
        FUN2(VAR2);
    }
}