void FUN1()
{
    char * VAR1;
    char VAR2[100] = "";
    VAR1 = VAR2;
    goto VAR3;
VAR3:
    {
        
        size_t VAR4 = strlen(VAR1);
        
        if (100-VAR4 > 1)
        {
            
            if (fgets(VAR1+VAR4, (int)(100-VAR4), stdin) != NULL)
            {
                
                VAR4 = strlen(VAR1);
                if (VAR4 > 0 && VAR1[VAR4-1] == '')
                {
                    VAR1[VAR4-1] = '';
                }
            }
            else
            {
                FUN2("");
                
                VAR1[VAR4] = '';
            }
        }
    }
    goto VAR5;
VAR5:
    {
        char VAR6[100] = "";
        
        FUN3(VAR6, 100-1, VAR1);
        FUN2(VAR6);
    }
}