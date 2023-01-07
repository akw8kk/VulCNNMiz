static void FUN1()
{
    char * VAR1;
    char VAR2[100];
    memset(VAR2, '', 100-1);
    VAR2[100-1] = '';
    goto VAR3;
VAR3:
    
    VAR1 = VAR2;
    {
        size_t VAR4;
        char VAR3[100];
        memset(VAR3, '', 100-1); 
        VAR3[100-1] = ''; 
        
        for (VAR4 = 0; VAR4 < 100; VAR4++)
        {
            VAR1[VAR4] = VAR3[VAR4];
        }
        
        VAR1[100-1] = '';
        FUN2(VAR1);
    }
}