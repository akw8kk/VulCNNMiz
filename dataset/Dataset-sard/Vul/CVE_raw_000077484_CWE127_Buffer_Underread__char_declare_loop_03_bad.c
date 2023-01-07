void FUN1()
{
    char * VAR1;
    char VAR2[100];
    memset(VAR2, '', 100-1);
    VAR2[100-1] = '';
    if(5==5)
    {
        
        VAR1 = VAR2 - 8;
    }
    {
        size_t VAR3;
        char VAR4[100];
        memset(VAR4, '', 100-1); 
        VAR4[100-1] = ''; 
        
        for (VAR3 = 0; VAR3 < 100; VAR3++)
        {
            VAR4[VAR3] = VAR1[VAR3];
        }
        
        VAR4[100-1] = '';
        FUN2(VAR4);
    }
}