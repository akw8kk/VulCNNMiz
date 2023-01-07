void FUN1()
{
    int VAR1;
    char * VAR2;
    char VAR3[100] = "";
    VAR2 = VAR3;
    for(VAR1 = 0; VAR1 < 1; VAR1++)
    {
        {
            
            size_t VAR4 = strlen(VAR2);
            
            if (100-VAR4 > 1)
            {
                
                if (fgets(VAR2+VAR4, (int)(100-VAR4), stdin) != NULL)
                {
                    
                    VAR4 = strlen(VAR2);
                    if (VAR4 > 0 && VAR2[VAR4-1] == '')
                    {
                        VAR2[VAR4-1] = '';
                    }
                }
                else
                {
                    FUN2("");
                    
                    VAR2[VAR4] = '';
                }
            }
        }
    }
    
    
    FUN3(VAR5, VAR5, VAR6, VAR7, VAR8, NULL);
}