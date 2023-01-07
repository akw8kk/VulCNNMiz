void FUN1()
{
    int VAR1;
    char * VAR2;
    char VAR3[100] = VAR4;
    VAR2 = VAR3;
    for(VAR1 = 0; VAR1 < 1; VAR1++)
    {
        {
            
            size_t VAR5 = strlen(VAR2);
            
            if (100-VAR5 > 1)
            {
                
                if (fgets(VAR2+VAR5, (int)(100-VAR5), stdin) != NULL)
                {
                    
                    VAR5 = strlen(VAR2);
                    if (VAR5 > 0 && VAR2[VAR5-1] == '')
                    {
                        VAR2[VAR5-1] = '';
                    }
                }
                else
                {
                    FUN2("");
                    
                    VAR2[VAR5] = '';
                }
            }
        }
    }
    {
        VAR6 *VAR7;
        
        VAR7 = FUN3(VAR2, "");
        if (VAR7 != NULL)
        {
            FUN4(VAR7);
        }
    }
}