static void FUN1()
{
    char * VAR1;
    char VAR2[50];
    char VAR3[100];
    memset(VAR2, '', 50-1); 
    VAR2[50-1] = ''; 
    memset(VAR3, '', 100-1); 
    VAR3[100-1] = ''; 
    if(FUN2())
    {
        
        FUN3("");
    }
    else
    {
        
        VAR1 = VAR3;
    }
    {
        size_t VAR4, VAR5;
        char VAR6[100];
        memset(VAR6, '', 100-1);
        VAR6[100-1] = ''; 
        VAR5 = strlen(VAR6);
        
        for (VAR4 = 0; VAR4 < VAR5; VAR4++)
        {
            VAR6[VAR4] = VAR1[VAR4];
        }
        VAR6[100-1] = '';
        FUN3(VAR6);
    }
}