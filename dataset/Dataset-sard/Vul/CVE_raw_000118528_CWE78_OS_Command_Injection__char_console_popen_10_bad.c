void FUN1()
{
    char * VAR1;
    char VAR2[100] = VAR3;
    VAR1 = VAR2;
    if(VAR4)
    {
        {
            
            size_t VAR5 = strlen(VAR1);
            
            if (100-VAR5 > 1)
            {
                
                if (fgets(VAR1+VAR5, (int)(100-VAR5), stdin) != NULL)
                {
                    
                    VAR5 = strlen(VAR1);
                    if (VAR5 > 0 && VAR1[VAR5-1] == '')
                    {
                        VAR1[VAR5-1] = '';
                    }
                }
                else
                {
                    FUN2("");
                    
                    VAR1[VAR5] = '';
                }
            }
        }
    }
    {
        VAR6 *VAR7;
        
        VAR7 = FUN3(VAR1, "");
        if (VAR7 != NULL)
        {
            FUN4(VAR7);
        }
    }
}