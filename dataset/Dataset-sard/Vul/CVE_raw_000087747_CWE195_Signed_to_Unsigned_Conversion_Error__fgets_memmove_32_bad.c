void FUN1()
{
    int VAR1;
    int *VAR2 = &VAR1;
    int *VAR3 = &VAR1;
    
    VAR1 = -1;
    {
        int VAR1 = *VAR2;
        {
            char VAR4[VAR5] = "";
            
            if (fgets(VAR4, VAR5, stdin) != NULL)
            {
                
                VAR1 = FUN2(VAR4);
            }
            else
            {
                FUN3("");
            }
        }
        *VAR2 = VAR1;
    }
    {
        int VAR1 = *VAR3;
        {
            char VAR6[100];
            char VAR7[100] = "";
            memset(VAR6, '', 100-1);
            VAR6[100-1] = '';
            if (VAR1 < 100)
            {
                
                memmove(VAR7, VAR6, VAR1);
                VAR7[VAR1] = ''; 
            }
            FUN3(VAR7);
        }
    }
}