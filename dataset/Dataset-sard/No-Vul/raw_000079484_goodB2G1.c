static void FUN1()
{
    char * VAR1;
    char VAR2[100] = "";
    VAR1 = VAR2;
    if(5==5)
    {
        {
            
            size_t VAR3 = strlen(VAR1);
            
            if (100-VAR3 > 1)
            {
                
                if (fgets(VAR1+VAR3, (int)(100-VAR3), stdin) != NULL)
                {
                    
                    VAR3 = strlen(VAR1);
                    if (VAR3 > 0 && VAR1[VAR3-1] == '')
                    {
                        VAR1[VAR3-1] = '';
                    }
                }
                else
                {
                    FUN2("");
                    
                    VAR1[VAR3] = '';
                }
            }
        }
    }
    if(5!=5)
    {
        
        FUN2("");
    }
    else
    {
        {
            char VAR4[100] = "";
            
            FUN3(VAR4, 100-1, "", VAR1);
            FUN2(VAR4);
        }
    }
}