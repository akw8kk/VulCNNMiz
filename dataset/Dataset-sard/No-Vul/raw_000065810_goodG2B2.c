static void FUN1()
{
    char * VAR1;
    char VAR2[100];
    VAR1 = VAR2;
    if(FUN2())
    {
        
        memset(VAR1, '', 50-1); 
        VAR1[50-1] = ''; 
    }
    {
        char VAR3[50] = "";
        size_t VAR4, VAR5;
        VAR5 = strlen(VAR1);
        
        for (VAR4 = 0; VAR4 < VAR5; VAR4++)
        {
            VAR3[VAR4] = VAR1[VAR4];
        }
        VAR3[50-1] = ''; 
        FUN3(VAR1);
    }
}