void FUN1()
{
    int VAR1;
    int VAR2;
    
    VAR2 = -1;
    for(VAR1 = 0; VAR1 < 1; VAR1++)
    {
        {
            char VAR3[VAR4] = "";
            
            if (fgets(VAR3, VAR4, stdin) != NULL)
            {
                
                VAR2 = FUN2(VAR3);
            }
            else
            {
                FUN3("");
            }
        }
    }
    {
        char VAR5[100];
        char VAR6[100] = "";
        memset(VAR5, '', 100-1);
        VAR5[100-1] = '';
        if (VAR2 < 100)
        {
            
            memmove(VAR6, VAR5, VAR2);
            VAR6[VAR2] = ''; 
        }
        FUN3(VAR6);
    }
}