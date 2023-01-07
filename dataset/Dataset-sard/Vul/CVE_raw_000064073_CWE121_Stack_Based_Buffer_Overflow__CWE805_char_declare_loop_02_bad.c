void FUN1()
{
    char * VAR1;
    char VAR2[50];
    char VAR3[100];
    if(1)
    {
        
        VAR1 = VAR2;
        VAR1[0] = ''; 
    }
    {
        size_t VAR4;
        char VAR5[100];
        memset(VAR5, '', 100-1); 
        VAR5[100-1] = ''; 
        
        for (VAR4 = 0; VAR4 < 100; VAR4++)
        {
            VAR1[VAR4] = VAR5[VAR4];
        }
        VAR1[100-1] = ''; 
        FUN2(VAR1);
    }
}