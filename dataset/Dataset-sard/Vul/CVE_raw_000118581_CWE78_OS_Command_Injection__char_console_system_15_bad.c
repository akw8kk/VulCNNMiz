void FUN1()
{
    char * VAR1;
    char VAR2[100] = VAR3;
    VAR1 = VAR2;
    switch(6)
    {
    case 6:
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
    break;
    default:
        
        FUN2("");
        break;
    }
    
    if (FUN3(VAR1) <= 0)
    {
        FUN2("");
        FUN4(1);
    }
}