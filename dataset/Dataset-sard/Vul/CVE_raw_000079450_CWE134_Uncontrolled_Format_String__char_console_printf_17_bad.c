void FUN1()
{
    int VAR1,VAR2;
    char * VAR3;
    char VAR4[100] = "";
    VAR3 = VAR4;
    for(VAR1 = 0; VAR1 < 1; VAR1++)
    {
        {
            
            size_t VAR5 = strlen(VAR3);
            
            if (100-VAR5 > 1)
            {
                
                if (fgets(VAR3+VAR5, (int)(100-VAR5), stdin) != NULL)
                {
                    
                    VAR5 = strlen(VAR3);
                    if (VAR5 > 0 && VAR3[VAR5-1] == '')
                    {
                        VAR3[VAR5-1] = '';
                    }
                }
                else
                {
                    FUN2("");
                    
                    VAR3[VAR5] = '';
                }
            }
        }
    }
    for(VAR2 = 0; VAR2 < 1; VAR2++)
    {
        
        FUN3(VAR3);
    }
}